#pragma once

#include "util.hpp"
#include "x86/defs.hpp"
#include "x86/memory_view.hpp"

namespace x86::insn {

inline void mov(reg32* dst, usize imm) {
    *dst = imm;
}

inline void mov(memory_view* mv, reg32* dst, mem src) {
    INSN_UNIMPLEMENTED();
}

inline void mov(memory_view* mv, mem dst, usize src) {
    INSN_UNIMPLEMENTED();
}

inline void movzx(memory_view* mv, reg32* dst, mem src) {
    INSN_UNIMPLEMENTED();
}

inline void push(memory_view* mv, reg32* esp, usize imm) {
    INSN_UNIMPLEMENTED();
}

inline void push(memory_view* mv, reg32* esp, mem val) {
    INSN_UNIMPLEMENTED();
}

inline void pop(memory_view* mv, reg32* esp, usize imm) {
    INSN_UNIMPLEMENTED();
}

inline void pop(memory_view* mv, reg32* esp, mem val) {
    INSN_UNIMPLEMENTED();
}

}