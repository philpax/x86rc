// clang-format off
// Disable unused labels warning
#pragma warning(disable: 4102)

#include "x86/insn.hpp"
#include "x86/thread_state.hpp"
#include "game/stubs.hpp"

namespace game {

using namespace x86::insn;

void start(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x18);
	push(mv, &ts->esp, 0x7D3998);
	game::__SEH_prolog(ts, mv);
	mov(&ts->edi, 0x94);
	mov(&ts->eax, ts->edi);
	game::__alloca_probe(ts, mv);
	mov(mv, x86::mem(ts->ebp - 0x18, 4), ts->esp);
	mov(&ts->esi, ts->esp);
	mov(mv, x86::mem(ts->esi, 4), ts->edi);
	push(mv, &ts->esp, ts->esi);
	game::GetVersionExA(ts, mv);
	mov(mv, &ts->ecx, x86::mem(ts->esi + 0x10, 4));
	mov(mv, x86::mem(0x8B8430, 4), ts->ecx);
	mov(mv, &ts->eax, x86::mem(ts->esi + 0x4, 4));
	mov(mv, x86::mem(0x8B843C, 4), ts->eax);
	mov(mv, &ts->edx, x86::mem(ts->esi + 0x8, 4));
	mov(mv, x86::mem(0x8B8440, 4), ts->edx);
	mov(mv, &ts->esi, x86::mem(ts->esi + 0xC, 4));
	and_(&ts->esi, 0x7FFF);
	mov(mv, x86::mem(0x8B8434, 4), ts->esi);
	cmp(&ts->eflags, ts->ecx, 0x2);
	if (ts->eflags.zero) {
        goto loc_75BD27;
    }
	or_(&ts->esi, 0x8000);
	mov(mv, x86::mem(0x8B8434, 4), ts->esi);

loc_75BD27:
	shl(&ts->eax, 0x8);
	add(&ts->eax, ts->edx);
	mov(mv, x86::mem(0x8B8438, 4), ts->eax);
	xor_(&ts->edi, ts->edi);
	push(mv, &ts->esp, ts->edi);
	game::GetModuleHandleA(ts, mv);
	cmp(mv, &ts->eflags, x86::mem(ts->eax, 2), 0x5A4D);
	if (!ts->eflags.zero) {
        goto loc_75BD60;
    }
	mov(mv, &ts->ecx, x86::mem(ts->eax + 0x3C, 4));
	add(&ts->ecx, ts->eax);
	cmp(mv, &ts->eflags, x86::mem(ts->ecx, 4), 0x4550);
	if (!ts->eflags.zero) {
        goto loc_75BD60;
    }
	movzx(mv, &ts->eax, x86::mem(ts->ecx + 0x18, 2));
	cmp(&ts->eflags, ts->eax, 0x10B);
	if (ts->eflags.zero) {
        goto loc_75BD78;
    }
	cmp(&ts->eflags, ts->eax, 0x20B);
	if (ts->eflags.zero) {
        goto loc_75BD65;
    }

loc_75BD60:
	mov(mv, x86::mem(ts->ebp - 0x1C, 4), ts->edi);
	goto loc_75BD8C;

loc_75BD65:
	cmp(mv, &ts->eflags, x86::mem(ts->ecx + 0x84, 4), 0xE);
	if (ts->eflags.carry || ts->eflags.zero) {
        goto loc_75BD60;
    }
	xor_(&ts->eax, ts->eax);
	cmp(mv, &ts->eflags, x86::mem(ts->ecx + 0xF8, 4), ts->edi);
	goto loc_75BD86;

loc_75BD78:
	cmp(mv, &ts->eflags, x86::mem(ts->ecx + 0x74, 4), 0xE);
	if (ts->eflags.carry || ts->eflags.zero) {
        goto loc_75BD60;
    }
	xor_(&ts->eax, ts->eax);
	cmp(mv, &ts->eflags, x86::mem(ts->ecx + 0xE8, 4), ts->edi);

loc_75BD86:
	setnz(ts->eflags, &ts->al);
	mov(mv, x86::mem(ts->ebp - 0x1C, 4), ts->eax);

loc_75BD8C:
	push(mv, &ts->esp, 0x1);
	game::__heap_init(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	test(&ts->eflags, ts->eax, ts->eax);
	if (!ts->eflags.zero) {
        goto loc_75BDA0;
    }
	push(mv, &ts->esp, 0x1C);
	game::_fast_error_exit(ts, mv);

loc_75BDA0:
	game::sub_762018(ts, mv);
	test(&ts->eflags, ts->eax, ts->eax);
	if (!ts->eflags.zero) {
        goto loc_75BDB1;
    }
	push(mv, &ts->esp, 0x10);
	game::_fast_error_exit(ts, mv);

loc_75BDB1:
	game::sub_761D83(ts, mv);
	mov(mv, x86::mem(ts->ebp - 0x4, 4), ts->edi);
	game::__ioinit(ts, mv);
	test(&ts->eflags, ts->eax, ts->eax);
	if (ts->eflags.sign == ts->eflags.overflow) {
        goto loc_75BDCA;
    }
	push(mv, &ts->esp, 0x1B);
	game::__amsg_exit(ts, mv);

loc_75BDCA:
	game::GetCommandLineA(ts, mv);
	mov(mv, x86::mem(0x8BB5F4, 4), ts->eax);
	game::___crtGetEnvironmentStringsA(ts, mv);
	mov(mv, x86::mem(0x8B8418, 4), ts->eax);
	game::sub_7619C1(ts, mv);
	test(&ts->eflags, ts->eax, ts->eax);
	if (ts->eflags.sign == ts->eflags.overflow) {
        goto loc_75BDF0;
    }
	push(mv, &ts->esp, 0x8);
	game::__amsg_exit(ts, mv);

loc_75BDF0:
	game::__setenvp(ts, mv);
	test(&ts->eflags, ts->eax, ts->eax);
	if (ts->eflags.sign == ts->eflags.overflow) {
        goto loc_75BE01;
    }
	push(mv, &ts->esp, 0x9);
	game::__amsg_exit(ts, mv);

loc_75BE01:
	game::sub_75D45B(ts, mv);
	mov(mv, x86::mem(ts->ebp - 0x20, 4), ts->eax);
	cmp(&ts->eflags, ts->eax, ts->edi);
	if (ts->eflags.zero) {
        goto loc_75BE14;
    }
	push(mv, &ts->esp, ts->eax);
	game::__amsg_exit(ts, mv);

loc_75BE14:
	mov(mv, &ts->eax, x86::mem(0x8B8450, 4));
	mov(mv, x86::mem(0x8B8454, 4), ts->eax);
	push(mv, &ts->esp, ts->eax);
	push(mv, &ts->esp, x86::mem(0x8B8448, 4));
	push(mv, &ts->esp, x86::mem(0x8B8444, 4));
	game::sub_580E00(ts, mv);
	add(&ts->esp, 0xC);
	mov(&ts->esi, ts->eax);
	mov(mv, x86::mem(ts->ebp - 0x24, 4), ts->esi);
	cmp(mv, &ts->eflags, x86::mem(ts->ebp - 0x1C, 4), ts->edi);
	if (!ts->eflags.zero) {
        goto loc_75BE43;
    }
	push(mv, &ts->esp, ts->esi);
	game::_exit(ts, mv);

loc_75BE43:
	game::__cexit(ts, mv);
	goto loc_75BE75;

loc_75BE4A:
	mov(mv, &ts->eax, x86::mem(ts->ebp - 0x14, 4));
	mov(mv, &ts->ecx, x86::mem(ts->eax, 4));
	mov(mv, &ts->ecx, x86::mem(ts->ecx, 4));
	mov(mv, x86::mem(ts->ebp - 0x28, 4), ts->ecx);
	push(mv, &ts->esp, ts->eax);
	push(mv, &ts->esp, ts->ecx);
	game::__XcptFilter(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);

loc_75BE5E:
	mov(mv, &ts->esp, x86::mem(ts->ebp - 0x18, 4));
	mov(mv, &ts->esi, x86::mem(ts->ebp - 0x28, 4));
	cmp(mv, &ts->eflags, x86::mem(ts->ebp - 0x1C, 4), 0x0);
	if (!ts->eflags.zero) {
        goto loc_75BE70;
    }
	push(mv, &ts->esp, ts->esi);
	game::__exit(ts, mv);

loc_75BE70:
	game::__c_exit(ts, mv);

loc_75BE75:
	or_(mv, x86::mem(ts->ebp - 0x4, 4), 0xFFFFFFFF);
	mov(&ts->eax, ts->esi);
	lea(mv, &ts->esp, x86::mem(ts->ebp - 0x34, 4));
	game::__SEH_epilog(ts, mv);
	retn(mv, &ts->esp);
}

} // namespace game 
