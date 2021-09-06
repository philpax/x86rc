#pragma once

#include <cassert>

#define PPCAT_NX(A, B) A##B
#define PPCAT(A, B) PPCAT_NX(A, B)

#define INSN_UNIMPLEMENTED() assert(false && "instruction unimplemented")
#define STUB_UNIMPLEMENTED() assert(false && "stub unimplemented")
#define GAME_UNIMPLEMENTED_STUB(name) \
    inline void name(x86::thread_state*, x86::memory_view*) { \
        STUB_UNIMPLEMENTED(); \
    }

#define UTIL_DISABLE_COPY(type) \
    type(type const&) = delete; \
    type& operator=(type const&) = delete;