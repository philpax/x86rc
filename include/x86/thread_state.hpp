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
    union {
        reg16 si;
        reg32 esi;
    };
    union {
        reg16 di;
        reg32 edi;
    };
    union {
        reg16 bp;
        reg32 ebp;
    };
    union {
        reg16 sp;
        reg32 esp;
    };

    eflags_reg eflags;

    reg16 cs;
    reg16 ds;
    reg16 es;
    reg16 fs;
    reg16 gs;
    reg16 ss;

    union {
        struct {
            mm_reg mm0;
            mm_reg mm1;
            mm_reg mm2;
            mm_reg mm3;
            mm_reg mm4;
            mm_reg mm5;
            mm_reg mm6;
            mm_reg mm7;
        };
        std::array<mm_reg, 8> mm;
    };
    union {
        struct {
            xmm_reg xmm0;
            xmm_reg xmm1;
            xmm_reg xmm2;
            xmm_reg xmm3;
            xmm_reg xmm4;
            xmm_reg xmm5;
            xmm_reg xmm6;
            xmm_reg xmm7;
        };
        std::array<xmm_reg, 8> xmm;
    };

    struct fp_state {
        // note: consider supporting the higher precision modes here
        std::array<f32, 8> regs;
        x86::x87_control_word control;
        x86::x87_status_reg status;
        x86::x87_tag_word tag;
    };

    fp_state fp;

    thread_state();
    UTIL_DISABLE_COPY(thread_state);
};

}  // namespace x86