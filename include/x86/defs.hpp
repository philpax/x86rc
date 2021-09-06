#pragma once

#include <cstdint>

#include "util.hpp"

namespace x86 {

using ptr = uint32_t;
using usize = uint32_t;
using isize = int32_t;

using reg8 = uint8_t;
using reg16 = uint16_t;
using reg32 = usize;

union mm_reg {
    uint8_t _8[8];
    uint16_t _16[4];
    uint32_t _32[2];
    uint64_t _64;
};
static_assert(sizeof(mm_reg) == 8);

union xmm_reg {
    uint8_t _8[16];
    uint16_t _16[8];
    uint32_t _32i[4];
    uint64_t _64i[2];
    float _32f[4];
    double _64f[2];
};
static_assert(sizeof(xmm_reg) == 16);

union eflags_reg {
#define RESERVED(n) uint8_t PPCAT(_reserved_, __LINE__) : n;
    struct {
        bool carry : 1;
        RESERVED(1)
        bool parity : 1;
        RESERVED(1)
        bool adjust : 1;
        RESERVED(1)
        bool zero : 1;
        bool sign : 1;
        bool trap : 1;
        bool interrupt_enable : 1;
        bool direction : 1;
        bool overflow : 1;
        uint8_t privilege_level : 2;
        bool nested_task : 1;
        RESERVED(1)
        bool resume : 1;
        bool virtual_8086 : 1;
        bool alignment_check : 1;
        bool virtual_interrupt : 1;
        bool virtual_interrupt_pending : 1;
        bool cpuid_available : 1;
        RESERVED(8)  // todo: check this, this doesn't seem right
    };
#undef RESERVED

    reg32 raw;
};
static_assert(sizeof(eflags_reg) == 4);

struct mem {
    explicit mem(ptr p, usize sz) : p(p), sz(sz) {}

    ptr p;
    usize sz;
};
}  // namespace x86