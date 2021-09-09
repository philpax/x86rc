#pragma once

#include <array>

#include "x86/defs.hpp"

namespace x86 {

struct thread_state {
    union {
        union {
            struct {
                reg8 al;
                reg8 ah;
            };
            reg16 ax;
        };
        reg32 eax;
    };
    union {
        union {
            struct {
                reg8 bl;
                reg8 bh;
            };
            reg16 bx;
        };
        reg32 ebx;
    };
    union {
        union {
            struct {
                reg8 cl;
                reg8 ch;
            };
            reg16 cx;
        };
        reg32 ecx;
    };
    union {
        union {
            struct {
                reg8 dl;
                reg8 dh;
            };
            reg16 dx;
        };
        reg32 edx;
    };
    reg32 esi;
    reg32 edi;
    reg32 ebp;
    reg32 esp;

    eflags_reg eflags;

    reg16 cs;
    reg16 ds;
    reg16 es;
    reg16 fs;
    reg16 gs;
    reg16 ss;

    std::array<mm_reg, 8> mm;
    std::array<xmm_reg, 8> xmm;

    struct {
        // note: consider supporting the higher precision modes here
        std::array<f32, 8> regs;
        x86::x87_control_word control;
        x86::x87_status_reg status;
        x86::x87_tag_word tag;
    } fp;

    thread_state();
    UTIL_DISABLE_COPY(thread_state);
};

}  // namespace x86