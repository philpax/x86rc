#pragma once

#include "util.hpp"
#include "x86/defs.hpp"
#include "x86/memory_view.hpp"

namespace x86::insn {

inline void test(eflags_reg* eflags, usize comparee, usize comparand) {
    INSN_UNIMPLEMENTED();
}

inline void setnz(eflags_reg const eflags, reg8* dst) {
    INSN_UNIMPLEMENTED();
}

}