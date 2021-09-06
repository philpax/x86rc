#pragma once

#include "util.hpp"
#include "x86/defs.hpp"
#include "x86/memory_view.hpp"

namespace x86::insn {

inline void retn(memory_view* mv, reg32* esp) {
    INSN_UNIMPLEMENTED();
}

}  // namespace x86::insn