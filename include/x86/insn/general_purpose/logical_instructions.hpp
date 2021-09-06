#pragma once

#include "util.hpp"
#include "x86/defs.hpp"
#include "x86/memory_view.hpp"

namespace x86::insn {

inline void and_(reg32* dst, usize src) {
    INSN_UNIMPLEMENTED();
}

inline void or_(reg32* dst, usize src) {
    INSN_UNIMPLEMENTED();
}

inline void or_(memory_view* mv, mem dst, usize src) {
    INSN_UNIMPLEMENTED();
}

inline void xor_(reg32* dst, usize src) {
    *dst = *dst ^ src;
}

}