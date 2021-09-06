#pragma once

#include "util.hpp"
#include "x86/defs.hpp"
#include "x86/memory_view.hpp"

namespace x86::insn {

inline void add(reg32* dst, usize src) {
    INSN_UNIMPLEMENTED();
}

inline void cmp(eflags_reg* eflags, usize o1, usize o2) {
    INSN_UNIMPLEMENTED();
}

inline void cmp(memory_view* mv, eflags_reg* eflags, mem o1, usize o2) {
    INSN_UNIMPLEMENTED();
}

}  // namespace x86::insn
