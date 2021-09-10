#pragma once

#include <cstdint>

#include "util.hpp"

namespace x86 {

using f32 = float;
using f64 = double;

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
    f32 _32f[4];
    f64 _64f[2];
};
static_assert(sizeof(xmm_reg) == 16);

using ptr = uint32_t;
using usize = uint32_t;
using isize = int32_t;

using reg8 = uint8_t;
using reg16 = uint16_t;
using reg32 = usize;
using reg64 = uint64_t;
using reg128 = xmm_reg;

struct thread_state;
class memory_view;

using function = void(x86::thread_state*, x86::memory_view*);


union eflags_reg {
    struct {
        bool carry : 1;
        bool : 1;
        bool parity : 1;
        bool : 1;
        bool adjust : 1;
        bool : 1;
        bool zero : 1;
        bool sign : 1;

        bool trap : 1;
        bool interrupt_enable : 1;
        bool direction : 1;
        bool overflow : 1;
        uint8_t privilege_level : 2;
        bool nested_task : 1;
        bool : 1;

        bool resume : 1;
        bool virtual_8086 : 1;
        bool alignment_check : 1;
        bool virtual_interrupt : 1;
        bool virtual_interrupt_pending : 1;
        bool cpuid_available : 1;
        bool : 2;

        bool : 8;
    };

    reg32 raw;
};
static_assert(sizeof(eflags_reg) == 4);

union x87_status_reg {
    struct {
        bool busy : 1;
        uint8_t condition_3 : 1;
        uint8_t top_of_stack : 3;
        uint8_t condition_2_1_0 : 3;
        bool error_summary_status : 1;
        bool stack_fault : 1;
        bool precision : 1;
        bool underflow : 1;
        bool overflow : 1;
        bool zero_divide : 1;
        bool denormalized_operand : 1;
        bool invalid_operation : 1;
    };

    reg16 raw;
};
static_assert(sizeof(x87_status_reg) == 2);

union x87_control_word {
    struct {
        uint8_t : 3;
        bool infinity_control : 1;
        uint8_t rounding_control : 2;
        uint8_t precision_control : 2;
        uint8_t : 2;
        bool precision : 1;
        bool underflow : 1;
        bool overflow : 1;
        bool zero_divide : 1;
        bool denormal_operand : 1;
        bool invalid_operation : 1;
    };

    reg16 raw;
};
static_assert(sizeof(x87_control_word) == 2);

union x87_tag_word {
    struct {
        uint8_t tag7 : 2;
        uint8_t tag6 : 2;
        uint8_t tag5 : 2;
        uint8_t tag4 : 2;
        uint8_t tag3 : 2;
        uint8_t tag2 : 2;
        uint8_t tag1 : 2;
        uint8_t tag0 : 2;
    };
    reg16 raw;
};
static_assert(sizeof(x87_control_word) == 2);

struct mem {
    explicit mem(ptr p, usize sz) : p(p), sz(sz) {}

    ptr p;
    usize sz;
};

struct fp_index {
    explicit fp_index(uint8_t index) : index(index) {}

    uint8_t index;
};
}  // namespace x86