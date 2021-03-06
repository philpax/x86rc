import idaapi
import idautils
import idc
import ida_allins
import ida_ua
import ida_name
import ida_nalt
import os
import ctypes
import textwrap
import re

from enum import Enum

# application code
GENERATE_APPLICATION_CODE = True
# stubs for executable imports
GENERATE_STUBS = True
# segments for the application
GENERATE_SEGMENTS = True
# stubs for every instruction and instruction form used in the program
GENERATE_INSTRUCTION_FAKES = False

BASE_DIRECTORY = os.path.abspath(
    os.path.join(os.path.dirname(os.path.abspath(__file__)), "..")
)

APP_INCLUDE_DIRECTORY = os.path.join(BASE_DIRECTORY, "include", "app")
APP_SOURCE_DIRECTORY = os.path.join(BASE_DIRECTORY, "src", "app")

STUBS_DIRECTORY = os.path.join(APP_INCLUDE_DIRECTORY, "stubs")
FUNCTIONS_DIRECTORY = os.path.join(APP_SOURCE_DIRECTORY, "functions")

SEGMENTS_INCLUDE_DIRECTORY = os.path.join(APP_INCLUDE_DIRECTORY, "segments")
SEGMENTS_SRC_DIRECTORY = os.path.join(APP_SOURCE_DIRECTORY, "segments")


class InstructionCategory(Enum):
    STANDARD = 0
    COMPARISON = 1
    COMPARISON_EXTRACT = 2
    CONTROL_FLOW = 3
    CALL = 4
    STACK = 5
    FLOATING_POINT = 6


MUTATE_DESTINATION_CATEGORIES = [
    InstructionCategory.STANDARD,
    InstructionCategory.COMPARISON_EXTRACT,
]


X86_INSTRUCTIONS = [item for item in dir(ida_allins) if item.startswith("NN_")]


ITYPE_TO_MNEMONIC = {
    ida_allins.__dict__[item]: str(item).removeprefix("NN_")
    for item in X86_INSTRUCTIONS
}

MNEMONIC_TO_ITYPE = dict((v, k) for k, v in ITYPE_TO_MNEMONIC.items())

ITYPE_TO_CATEGORY = {
    ida_allins.__dict__[item]: InstructionCategory.STANDARD for item in X86_INSTRUCTIONS
}

for insn in [
    "ja",
    "jae",
    "jb",
    "jbe",
    "jc",
    "jcxz",
    "je",
    "jecxz",
    "jg",
    "jge",
    "jl",
    "jle",
    "jmp",
    "jmpfi",
    "jmpni",
    "jmpshort",
    "jna",
    "jnae",
    "jnb",
    "jnbe",
    "jnc",
    "jne",
    "jng",
    "jnge",
    "jnl",
    "jnle",
    "jno",
    "jnp",
    "jns",
    "jnz",
    "jo",
    "jp",
    "jpe",
    "jpo",
    "jrcxz",
    "js",
    "jz",
]:
    ITYPE_TO_CATEGORY[MNEMONIC_TO_ITYPE[insn]] = InstructionCategory.CONTROL_FLOW

for insn in [
    "fld",
    "fst",
    "fstp",
    "fild",
    "fist",
    "fistp",
    "fbld",
    "fbstp",
    "fxch",
    "fcmove",
    "fcmovne",
    "fcmovb",
    "fcmovbe",
    "fcmovnb",
    "fcmovnbe",
    "fcmovu",
    "fcmovnu",
    "fadd",
    "faddp",
    "fiadd",
    "fsub",
    "fsubp",
    "fisub",
    "fsubr",
    "fsubrp",
    "fisubr",
    "fmul",
    "fmulp",
    "fimul",
    "fdiv",
    "fdivp",
    "fidiv",
    "fdivr",
    "fdivrp",
    "fidivr",
    "fprem",
    "fprem1",
    "fabs",
    "fchs",
    "frndint",
    "fscale",
    "fsqrt",
    "fxtract",
    "fcom",
    "fcomp",
    "fcompp",
    "fucom",
    "fucomp",
    "fucompp",
    "ficom",
    "ficomp",
    "fcomi",
    "fucomi",
    "fcomip",
    "fucomip",
    "ftst",
    "fxam",
    "fsin",
    "fcos",
    "fsincos",
    "fptan",
    "fpatan",
    "f2xm1",
    "fyl2x",
    "fyl2xp1",
    "fld1",
    "fldz",
    "fldpi",
    "fldl2e",
    "fldln2",
    "fldl2t",
    "fldlg2",
    "fincstp",
    "fdecstp",
    "ffree",
    "finit",
    "fninit",
    "fclex",
    "fnclex",
    "fstcw",
    "fnstcw",
    "fldcw",
    "fstenv",
    "fnstenv",
    "fldenv",
    "fsave",
    "fnsave",
    "frstor",
    "fstsw",
    "fnstsw",
    "fnop",
    "fxsave",
    "fxrstor",
]:
    ITYPE_TO_CATEGORY[MNEMONIC_TO_ITYPE[insn]] = InstructionCategory.FLOATING_POINT

ITYPE_TO_CATEGORY[MNEMONIC_TO_ITYPE["call"]] = InstructionCategory.CALL
ITYPE_TO_CATEGORY[MNEMONIC_TO_ITYPE["callni"]] = InstructionCategory.CALL
ITYPE_TO_CATEGORY[MNEMONIC_TO_ITYPE["push"]] = InstructionCategory.STACK
ITYPE_TO_CATEGORY[MNEMONIC_TO_ITYPE["pop"]] = InstructionCategory.STACK
ITYPE_TO_CATEGORY[MNEMONIC_TO_ITYPE["retn"]] = InstructionCategory.STACK

for insn in [
    "cmp",
    "test",
]:
    ITYPE_TO_CATEGORY[MNEMONIC_TO_ITYPE[insn]] = InstructionCategory.COMPARISON

for insn in [
    "sete",
    "setz",
    "setne",
    "setnz",
    "seta",
    "setnbe",
    "setb",
    "setnae",
    "setc",
    "setbe",
    "setna",
    "setg",
    "setnle",
    "setge",
    "setnl",
    "setl",
    "setnge",
    "setle",
    "setng",
    "sets",
    "setns",
    "seto",
    "setno",
    "setpe",
    "setp",
    "setpo",
    "setnp",
]:
    ITYPE_TO_CATEGORY[MNEMONIC_TO_ITYPE[insn]] = InstructionCategory.COMPARISON_EXTRACT

SUFFIX_ITYPE = {}
SUFFIX_ITYPE[MNEMONIC_TO_ITYPE["and"]] = True
SUFFIX_ITYPE[MNEMONIC_TO_ITYPE["or"]] = True
SUFFIX_ITYPE[MNEMONIC_TO_ITYPE["xor"]] = True
SUFFIX_ITYPE[MNEMONIC_TO_ITYPE["int"]] = True
SUFFIX_ITYPE[MNEMONIC_TO_ITYPE["not"]] = True

seen_names = {}


def sanitize_name(name, ea):
    demangled_name = idc.demangle_name(name, idc.get_inf_attr(INF_SHORT_DN))
    if demangled_name != None:
        name = demangled_name

    name = (
        re.sub("[:\(\) `'~,<>\?@]", "_", name)
        .replace("*", "P")
        .replace("&", "R")
        .replace(" ", "_")
    )

    name_result = seen_names.get(name)
    if name_result == None:
        # no previous EA for this name, save the name
        seen_names[name] = ea
    elif name_result != ea:
        # there's another result for this EA, suffix this function
        name = f"{name}_{ea:X}"

    return name


def label_from_ea(ea):
    name = ida_name.get_ea_name(ea)
    if name == "":
        return None

    return sanitize_name(name, ea)


def get_func_name(ea):
    import re

    func = ida_funcs.get_func(ea)
    if func == None:
        return None

    if func.start_ea != ea:
        return None

    name = idc.get_func_name(ea)
    if len(name) == 0:
        return None

    return sanitize_name(name, ea)


def operand_size(op):
    # courtesy https://reverseengineering.stackexchange.com/a/22695
    tbyte = 8
    dt_ldbl = 8
    n_bytes = [1, 2, 4, 4, 8, tbyte, -1, 8, 16, -1, -1, 6, -1, 4, 4, dt_ldbl, 32, 64]
    return n_bytes[op.dtype]


def operand_reg_sized(reg, size):
    return idaapi.get_reg_name(reg, size)


def operand_reg(op):
    return operand_reg_sized(op.reg, operand_size(op))


def operand_decode_memory_ref(op):
    # courtesy of https://reverseengineering.stackexchange.com/a/14300
    has_sib = op.specflag1
    sib = op.specflag2

    addr_str = ""
    addr = ctypes.c_int32(op.addr).value
    if addr < 0:
        addr_str = f" - 0x{(-addr):X}"
    elif addr > 0:
        addr_str = f" + 0x{addr:X}"

    # we're not handling the modrm byte here correctly,
    # `jmp     ds:jpt_4F2DA7[edx*4]` is being translated as
    # jmp(x86::mem(0x4F2EA8, 4))

    if has_sib:
        base = sib & 7
        index = (sib >> 3) & 7
        scale = (sib >> 6) & 3

        base_reg = operand_reg_sized(base, 4)
        scaled_str = ""
        if index != 4:  # corresponds to no scaled index
            index_reg = operand_reg_sized(index, 4)
            scale_str = "*{}".format(2 ** scale) if scale else ""
            scaled_str = f" + (ts->{index_reg}{scale_str})"

        resolved_address = f"ts->{base_reg}{scaled_str}{addr_str}"
        return f"x86::mem({resolved_address}, {operand_size(op)})"
    else:
        resolved_address = f"ts->{operand_reg_sized(op.reg, 4)}{addr_str}"
        return f"x86::mem({resolved_address}, {operand_size(op)})"


def generate_operand(op):
    if isinstance(op, str):
        return op

    size = operand_size(op) * 8
    type_cast = f"reg{size}"

    if op.type == ida_ua.o_void:
        pass
    elif op.type == ida_ua.o_reg:
        return f"x86::{type_cast}(ts->{operand_reg(op)})"
    elif op.type == ida_ua.o_mem:
        return f"x86::mem(0x{op.addr:X}, {operand_size(op)})"
    elif op.type == ida_ua.o_phrase:
        return operand_decode_memory_ref(op)
    elif op.type == ida_ua.o_displ:
        return operand_decode_memory_ref(op)
    elif op.type == ida_ua.o_imm:
        return f"x86::{type_cast}(0x{op.value:X})"
    elif op.type == ida_ua.o_far:
        return f"0x{op.addr:X}"
    elif op.type == ida_ua.o_near:
        return f"0x{op.addr:X}"
    elif op.type == ida_ua.o_idpspec3:
        return f"x86::fp_index({op.reg})"
    else:
        raise NotImplementedError("invalid operand type:", op.type)


def generate_operands_string(ops, extra_ops, mutates_dst):
    # hack: treat first operand as destination
    op_strs = [generate_operand(op) for op in ops]
    if mutates_dst:
        if len(ops) > 0 and not isinstance(ops[0], str) and ops[0].type == ida_ua.o_reg:
            first_op = op_strs[0]
            # remove the register wrapping around this, we can be sure it's the right type
            re_match = re.search(r"\((.*?)\)", first_op)
            if re_match != None:
                first_op = re_match.group(1)
            op_strs[0] = "&" + first_op

    return ", ".join([generate_operand(op) for op in extra_ops] + op_strs)


def itype_to_cpp(itype):
    cmd = ITYPE_TO_MNEMONIC[itype]
    if SUFFIX_ITYPE.get(itype, False):
        cmd += "_"
    return cmd


def generate_control_flow(insn, ops):
    if insn.itype == MNEMONIC_TO_ITYPE["jmp"]:
        name = get_func_name(ops[0].addr)
        if name == None:
            name = label_from_ea(ops[0].addr)
        return f"goto {name};"
    if insn.itype == MNEMONIC_TO_ITYPE["jmpni"]:
        return f"jmp(ts, mv, {generate_operands_string(ops, [], False)});"
    else:
        cond = ""
        if insn.itype == MNEMONIC_TO_ITYPE["jo"]:
            cond = "ts->eflags.overflow"
        elif insn.itype == MNEMONIC_TO_ITYPE["jno"]:
            cond = "!ts->eflags.overflow"
        elif insn.itype == MNEMONIC_TO_ITYPE["js"]:
            cond = "ts->eflags.sign"
        elif insn.itype == MNEMONIC_TO_ITYPE["jns"]:
            cond = "!ts->eflags.sign"
        elif (
            insn.itype == MNEMONIC_TO_ITYPE["je"]
            or insn.itype == MNEMONIC_TO_ITYPE["jz"]
        ):
            cond = "ts->eflags.zero"
        elif (
            insn.itype == MNEMONIC_TO_ITYPE["jne"]
            or insn.itype == MNEMONIC_TO_ITYPE["jnz"]
        ):
            cond = "!ts->eflags.zero"
        elif (
            insn.itype == MNEMONIC_TO_ITYPE["jb"]
            or insn.itype == MNEMONIC_TO_ITYPE["jnae"]
            or insn.itype == MNEMONIC_TO_ITYPE["jc"]
        ):
            cond = "ts->eflags.carry"
        elif (
            insn.itype == MNEMONIC_TO_ITYPE["jnb"]
            or insn.itype == MNEMONIC_TO_ITYPE["jae"]
            or insn.itype == MNEMONIC_TO_ITYPE["jnc"]
        ):
            cond = "!ts->eflags.carry"
        elif (
            insn.itype == MNEMONIC_TO_ITYPE["jbe"]
            or insn.itype == MNEMONIC_TO_ITYPE["jna"]
        ):
            cond = "ts->eflags.carry || ts->eflags.zero"
        elif (
            insn.itype == MNEMONIC_TO_ITYPE["ja"]
            or insn.itype == MNEMONIC_TO_ITYPE["jnbe"]
        ):
            cond = "!ts->eflags.carry && !ts->eflags.zero"
        elif (
            insn.itype == MNEMONIC_TO_ITYPE["jl"]
            or insn.itype == MNEMONIC_TO_ITYPE["jnge"]
        ):
            cond = "ts->eflags.sign != ts->eflags.overflow"
        elif (
            insn.itype == MNEMONIC_TO_ITYPE["jge"]
            or insn.itype == MNEMONIC_TO_ITYPE["jnl"]
        ):
            cond = "ts->eflags.sign == ts->eflags.overflow"
        elif (
            insn.itype == MNEMONIC_TO_ITYPE["jle"]
            or insn.itype == MNEMONIC_TO_ITYPE["jng"]
        ):
            cond = "ts->eflags.zero || (ts->eflags.sign != ts->eflags.overflow)"
        elif (
            insn.itype == MNEMONIC_TO_ITYPE["jg"]
            or insn.itype == MNEMONIC_TO_ITYPE["jnle"]
        ):
            cond = "ts->eflags.zero && (ts->eflags.sign == ts->eflags.overflow)"
        elif (
            insn.itype == MNEMONIC_TO_ITYPE["jp"]
            or insn.itype == MNEMONIC_TO_ITYPE["jpe"]
        ):
            cond = "ts->eflags.parity"
        elif (
            insn.itype == MNEMONIC_TO_ITYPE["jnp"]
            or insn.itype == MNEMONIC_TO_ITYPE["jpo"]
        ):
            cond = "!ts->eflags.parity"
        elif insn.itype == MNEMONIC_TO_ITYPE["jcxz"]:
            cond = "ts->cx == 0"
        elif insn.itype == MNEMONIC_TO_ITYPE["jecxz"]:
            cond = "ts->ecx == 0"
        else:
            raise NotImplementedError(
                "unexpected instruction", insn.itype, ITYPE_TO_MNEMONIC[insn.itype]
            )

        return f"if ({cond}) {{\n        goto {label_from_ea(ops[0].addr)};\n    }}"


def generate_instruction(ea):
    insn = idaapi.insn_t()
    idaapi.decode_insn(insn, ea)

    ops = [op for op in insn.ops if op.type != ida_ua.o_void]
    category = ITYPE_TO_CATEGORY[insn.itype]

    if category in (
        InstructionCategory.STANDARD,
        InstructionCategory.COMPARISON,
        InstructionCategory.COMPARISON_EXTRACT,
        InstructionCategory.STACK,
        InstructionCategory.FLOATING_POINT,
    ):
        cmd = itype_to_cpp(insn.itype)
        extra_ops = []
        insert_mv = False

        if any(
            (op.type in (ida_ua.o_mem, ida_ua.o_phrase, ida_ua.o_displ) for op in ops)
        ):
            insert_mv = True

        if category == InstructionCategory.COMPARISON:
            extra_ops.insert(0, "&ts->eflags")
        if category == InstructionCategory.COMPARISON_EXTRACT:
            extra_ops.insert(0, "ts->eflags")
        elif category == InstructionCategory.STACK:
            extra_ops.insert(0, "&ts->esp")
            insert_mv = True
        elif category == InstructionCategory.FLOATING_POINT:
            extra_ops.insert(0, "&ts->fp")

        if insert_mv:
            extra_ops.insert(0, "mv")

        args = generate_operands_string(
            ops,
            extra_ops,
            category in MUTATE_DESTINATION_CATEGORIES,
        )
        return f"{cmd}({args});"
    elif category == InstructionCategory.CONTROL_FLOW:
        return generate_control_flow(insn, ops)
    elif category == InstructionCategory.CALL:
        function_name = get_func_name(ops[0].addr)
        if function_name:
            return f"app::{function_name}(ts, mv);"
        else:
            return f"call(ts, mv, {generate_operands_string(ops, [], False)});"
    else:
        raise NotImplementedError


def process_function(f, fva):
    function = idaapi.get_func(fva)
    flowchart = idaapi.FlowChart(function)

    f.write(
        f"void {get_func_name(fva)}(x86::thread_state* ts, x86::memory_view* mv) {{\n"
    )
    first = True
    for bb in flowchart:
        func = idaapi.get_func(bb.start_ea)

        generated_label = False
        label_name = label_from_ea(bb.start_ea)
        if label_name != None:
            if not first and not (bb.start_ea in (func.start_ea, func.end_ea)):
                f.write("\n")
                f.write(f"{label_name}:\n")
                generated_label = True

        generated_code = False
        for ea in idautils.Heads(bb.start_ea, bb.end_ea):
            f.write(f"\t{generate_instruction(ea)}\n")
            generated_code = True

        if generated_label and not generated_code:
            f.write("\tUNEXPECTED_EXECUTION();\n")

        first = False
    f.write("}\n")


def generate_application_code():
    chunk_interval = 0x50_000

    functions = list(idautils.Functions())

    with open(
        os.path.join(BASE_DIRECTORY, "include", "app", "functions.hpp"), "w"
    ) as f:
        function_decls = "\n".join(
            (
                f"void {get_func_name(ea)}(x86::thread_state*, x86::memory_view*);"
                for ea in functions
            )
        )
        function_entries = "\n".join(
            (f"    {{0x{ea:X}, &{get_func_name(ea)}}}," for ea in functions)
        )

        template = f"""\
        // clang-format off
        #pragma once

        #include "x86/memory_view.hpp"
        #include "x86/thread_state.hpp"

        namespace app {{

        $function_decls

        struct function_entry {{
            x86::ptr entrypoint;
            x86::function* function;
        }};

        function_entry functions[{len(functions)}] = {{
        $function_entries
        }};

        }} // namespace app
        """

        # using textual replacement because dedent craps out if not all lines
        # share the same indent
        f.write(
            textwrap.dedent(template)
            .replace("$function_decls", function_decls)
            .replace("$function_entries", function_entries)
        )

    max_function = max(functions)
    for chunk_start in range(min(functions), max_function, chunk_interval):
        chunk_end = min(chunk_start + chunk_interval, max_function)
        with open(
            os.path.join(FUNCTIONS_DIRECTORY, f"{chunk_start:X}_{chunk_end:X}.cpp"), "w"
        ) as f:
            template = """\
            // clang-format off
            // Disable unused labels warning
            #pragma warning(disable: 4102)

            #include "x86/insn.hpp"
            #include "x86/thread_state.hpp"
            #include "app/stubs.hpp"
            #include "app/functions.hpp"

            namespace app {

            using namespace x86::insn;

            """
            f.write(textwrap.dedent(template))
            for function in idautils.Functions(chunk_start, chunk_end):
                process_function(f, function)
                f.write("\n")
            f.write("} // namespace app \n")


def generate_stub(mod_name, mod_imports):
    with open(os.path.join(STUBS_DIRECTORY, f"{mod_name}.hpp"), "w") as f:
        body = "\n".join((f"APP_UNIMPLEMENTED_STUB({name});" for name in mod_imports))

        template = """\
        // clang-format off
        #pragma once

        #include "util.hpp"
        #include "x86/memory_view.hpp"
        #include "x86/thread_state.hpp"

        namespace app {

        {body}

        } // namespace app
        """

        # using textual replacement because dedent craps out if not all lines
        # share the same indent
        f.write(textwrap.dedent(template).replace("{body}", body))


def generate_stubs():
    module_qty = ida_nalt.get_import_module_qty()
    for i in range(0, module_qty):
        mod_name = ida_nalt.get_import_module_name(i)
        mod_imports = []

        def import_enumerator(_, name, __):
            mod_imports.append(name)
            return True

        ida_nalt.enum_import_names(i, import_enumerator)
        generate_stub(mod_name, mod_imports)


def generate_segments():
    import ida_segment

    segment_names = []
    segment_qty = ida_segment.get_segm_qty()
    for i in range(0, segment_qty):
        segment = ida_segment.getnseg(i)
        segment_name = ida_segment.get_segm_name(segment)

        if not segment_name.startswith("."):
            segment_name = f"seg{i}"
        else:
            segment_name = segment_name.removeprefix(".")

        # exclude as encoded within our program
        if segment_name in ("idata",):
            continue

        size = segment.end_ea - segment.start_ea
        segment_names.append(segment_name)

        with open(
            os.path.join(SEGMENTS_INCLUDE_DIRECTORY, f"{segment_name}.hpp"), "w"
        ) as f:
            template = f"""\
            // clang-format off
            #pragma once

            #include <array>
            #include "x86/defs.hpp"

            namespace app::segments::{segment_name} {{

            extern x86::ptr base_address;
            extern std::array<uint8_t, 0x{size:X}> data;

            }} // namespace app
            """

            f.write(textwrap.dedent(template))

        with open(
            os.path.join(SEGMENTS_SRC_DIRECTORY, f"{segment_name}.cpp"), "w"
        ) as f:
            bytes = idaapi.get_bytes(segment.start_ea, size)
            template = f"""\
            // clang-format off
            #pragma once

            #include <array>
            #include "x86/defs.hpp"

            namespace app::segments::{segment_name} {{

            x86::ptr base_address = 0x{segment.start_ea:X};
            std::array<uint8_t, 0x{size:X}> data = {{{', '.join((f'0x{b:X}' for b in bytes))}}};

            }} // namespace app
            """

            f.write(textwrap.dedent(template))

    # update segment_qty to the actual count before writing our summary files
    segment_qty = len(segment_names)
    with open(os.path.join(APP_INCLUDE_DIRECTORY, "segments.hpp"), "w") as f:
        template = f"""\
        // clang-format off
        #pragma once

        #include <string>
        #include <span>

        #include "x86/defs.hpp"

        namespace app::segments {{

        struct segment_entry {{
            std::string name;
            x86::ptr base_address;
            std::span<uint8_t> data;

            segment_entry(std::string name, x86::ptr base_address, std::span<uint8_t> data) : name(name), base_address(base_address), data(data) {{}}
        }};

        extern std::array<segment_entry, {segment_qty}> segments;

        }} // namespace app::segments
        """

        f.write(textwrap.dedent(template))

    with open(os.path.join(APP_SOURCE_DIRECTORY, "segments.cpp"), "w") as f:
        template = f"""\
        // clang-format off
        #include "app/segments.hpp"
        """
        f.write(textwrap.dedent(template))

        for segment_name in segment_names:
            f.write(f'#include "app/segments/{segment_name}.hpp"\n')

        template = f"""\

        namespace app::segments {{

        extern std::array<segment_entry, {segment_qty}> segments = {{
        """
        f.write(textwrap.dedent(template))

        lines = [
            f'    segment_entry("{name}", {name}::base_address, {name}::data),'
            for name in segment_names
        ]
        f.write("\n".join(lines))

        template = f"""\

        }};

        }} // namespace app::segments
        """
        f.write(textwrap.dedent(template))


def generate_type_string(ops, extra_ops, mutates_dst):
    def operand_to_type(op):
        if isinstance(op, str):
            return op

        size = operand_size(op) * 8

        if op.type == ida_ua.o_void:
            pass
        elif op.type == ida_ua.o_reg:
            return f"x86::reg{size}"
        elif op.type == ida_ua.o_mem:
            return f"x86::mem"
        elif op.type == ida_ua.o_phrase:
            return f"x86::mem"
        elif op.type == ida_ua.o_displ:
            return f"x86::mem"
        elif op.type == ida_ua.o_imm:
            return f"x86::reg{size}"
        elif op.type == ida_ua.o_far:
            return f"x86::reg{size}"
        elif op.type == ida_ua.o_near:
            return f"x86::reg{size}"
        elif op.type == ida_ua.o_idpspec3:
            return f"x86::fp_index"
        else:
            raise NotImplementedError("invalid operand type:", op.type)

    # hack: treat first operand as destination
    op_strs = [operand_to_type(op) for op in ops]
    if mutates_dst:
        if len(ops) > 0 and not isinstance(ops[0], str) and ops[0].type == ida_ua.o_reg:
            op_strs[0] += "*"
    op_strs = [op + f" _{idx}" for (idx, op) in enumerate(op_strs)]

    return [operand_to_type(op) for op in extra_ops] + op_strs


def make_instruction_representation(ea):
    insn = idaapi.insn_t()
    idaapi.decode_insn(insn, ea)

    ops = [op for op in insn.ops if op.type != ida_ua.o_void]
    category = ITYPE_TO_CATEGORY[insn.itype]

    if category in (
        InstructionCategory.STANDARD,
        InstructionCategory.COMPARISON,
        InstructionCategory.COMPARISON_EXTRACT,
        InstructionCategory.STACK,
        InstructionCategory.FLOATING_POINT,
    ):
        cmd = itype_to_cpp(insn.itype)
        extra_ops = []
        insert_mv = False

        if any(
            (op.type in (ida_ua.o_mem, ida_ua.o_phrase, ida_ua.o_displ) for op in ops)
        ):
            insert_mv = True

        if category == InstructionCategory.COMPARISON:
            extra_ops.insert(0, "x86::eflags_reg* eflags")
        if category == InstructionCategory.COMPARISON_EXTRACT:
            extra_ops.insert(0, "x86::eflags_reg eflags")
        elif category == InstructionCategory.STACK:
            extra_ops.insert(0, "x86::reg32* esp")
            insert_mv = True
        elif category == InstructionCategory.FLOATING_POINT:
            extra_ops.insert(0, "x86::thread_state::fp_state* fp")

        if insert_mv:
            extra_ops.insert(0, "x86::memory_view* mv")

        return (
            cmd,
            generate_type_string(
                ops, extra_ops, category in MUTATE_DESTINATION_CATEGORIES
            ),
        )
    elif category == InstructionCategory.CONTROL_FLOW:
        return None
    elif category == InstructionCategory.CALL:
        return None
    else:
        raise NotImplementedError


def generate_instruction_fakes():
    import ida_funcs

    with open(
        os.path.join(BASE_DIRECTORY, "include", "x86", "insn", "all.hpp"), "w"
    ) as f:
        raw_reps = [
            ("call", ["x86::thread_state* ts", "x86::memory_view* mv", "x86::mem _0"]),
            (
                "call",
                ["x86::thread_state* ts", "x86::memory_view* mv", "x86::reg32 _0"],
            ),
            ("jmp", ["x86::thread_state* ts", "x86::memory_view* mv", "x86::mem _0"]),
        ]
        for function in idautils.Functions():
            func = ida_funcs.get_func(function)
            for ea in idautils.Heads(func.start_ea, func.end_ea):
                rep = make_instruction_representation(ea)
                if rep != None:
                    raw_reps.append(rep)

        reps = set()
        for rep in raw_reps:
            reps.add(
                f"inline void {rep[0]}({', '.join(rep[1])}) {{\n    INSN_UNIMPLEMENTED();\n}}"
            )

        reps = list(reps)
        reps.sort()

        template = f"""\
        // clang-format off
        #pragma once

        #include "util.hpp"
        #include "x86/defs.hpp"
        #include "x86/thread_state.hpp"
        #include "x86/memory_view.hpp"

        namespace x86::insn {{

        """
        f.write(textwrap.dedent(template))
        for rep in reps:
            f.write(rep + "\n")
        f.write("\n\n} // namespace x86::insn\n")


if GENERATE_APPLICATION_CODE:
    generate_application_code()
if GENERATE_STUBS:
    generate_stubs()
if GENERATE_SEGMENTS:
    generate_segments()
if GENERATE_INSTRUCTION_FAKES:
    generate_instruction_fakes()
