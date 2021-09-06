#pragma once

#include "util.hpp"
#include "x86/defs.hpp"
#include "x86/memory_view.hpp"

namespace x86::insn {

inline void lea(memory_view* mv, reg32* dst, mem src) {
    INSN_UNIMPLEMENTED();
}

}