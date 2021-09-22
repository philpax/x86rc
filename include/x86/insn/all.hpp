// clang-format off
#pragma once

#include "util.hpp"
#include "x86/defs.hpp"
#include "x86/thread_state.hpp"
#include "x86/memory_view.hpp"

namespace x86::insn {

inline void adc(x86::memory_view* mv, x86::mem _0, x86::reg32 _1) {
    INSN_UNIMPLEMENTED();
}
inline void adc(x86::memory_view* mv, x86::mem _0, x86::reg8 _1) {
    INSN_UNIMPLEMENTED();
}
inline void adc(x86::memory_view* mv, x86::reg32* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void adc(x86::reg32* _0, x86::reg32 _1) {
    INSN_UNIMPLEMENTED();
}
inline void add(x86::memory_view* mv, x86::mem _0, x86::reg16 _1) {
    INSN_UNIMPLEMENTED();
}
inline void add(x86::memory_view* mv, x86::mem _0, x86::reg32 _1) {
    INSN_UNIMPLEMENTED();
}
inline void add(x86::memory_view* mv, x86::mem _0, x86::reg8 _1) {
    INSN_UNIMPLEMENTED();
}
inline void add(x86::memory_view* mv, x86::reg16* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void add(x86::memory_view* mv, x86::reg32* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void add(x86::memory_view* mv, x86::reg8* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void add(x86::reg16* _0, x86::reg16 _1) {
    INSN_UNIMPLEMENTED();
}
inline void add(x86::reg32* _0, x86::reg32 _1) {
    INSN_UNIMPLEMENTED();
}
inline void add(x86::reg8* _0, x86::reg8 _1) {
    INSN_UNIMPLEMENTED();
}
inline void addpd(x86::memory_view* mv, x86::reg128* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void addpd(x86::reg128* _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void addps(x86::memory_view* mv, x86::reg128* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void addps(x86::reg128* _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void addsd(x86::memory_view* mv, x86::reg128* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void addsd(x86::reg128* _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void addss(x86::memory_view* mv, x86::reg128* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void addss(x86::reg128* _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void and_(x86::memory_view* mv, x86::mem _0, x86::reg16 _1) {
    INSN_UNIMPLEMENTED();
}
inline void and_(x86::memory_view* mv, x86::mem _0, x86::reg32 _1) {
    INSN_UNIMPLEMENTED();
}
inline void and_(x86::memory_view* mv, x86::mem _0, x86::reg8 _1) {
    INSN_UNIMPLEMENTED();
}
inline void and_(x86::memory_view* mv, x86::reg32* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void and_(x86::memory_view* mv, x86::reg8* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void and_(x86::reg16* _0, x86::reg16 _1) {
    INSN_UNIMPLEMENTED();
}
inline void and_(x86::reg32* _0, x86::reg32 _1) {
    INSN_UNIMPLEMENTED();
}
inline void and_(x86::reg8* _0, x86::reg8 _1) {
    INSN_UNIMPLEMENTED();
}
inline void andnps(x86::reg128* _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void andpd(x86::memory_view* mv, x86::reg128* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void andpd(x86::reg128* _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void andps(x86::memory_view* mv, x86::reg128* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void andps(x86::reg128* _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void bt(x86::memory_view* mv, x86::mem _0, x86::reg32 _1) {
    INSN_UNIMPLEMENTED();
}
inline void bts(x86::memory_view* mv, x86::mem _0, x86::reg32 _1) {
    INSN_UNIMPLEMENTED();
}
inline void call(x86::thread_state* ts, x86::memory_view* mv, x86::mem _0) {
    INSN_UNIMPLEMENTED();
}
inline void call(x86::thread_state* ts, x86::memory_view* mv, x86::reg32 _0) {
    INSN_UNIMPLEMENTED();
}
inline void cdq(x86::reg32* _0, x86::reg32 _1) {
    INSN_UNIMPLEMENTED();
}
inline void cld() {
    INSN_UNIMPLEMENTED();
}
inline void cmp(x86::eflags_reg* eflags, x86::reg16 _0, x86::reg16 _1) {
    INSN_UNIMPLEMENTED();
}
inline void cmp(x86::eflags_reg* eflags, x86::reg32 _0, x86::reg32 _1) {
    INSN_UNIMPLEMENTED();
}
inline void cmp(x86::eflags_reg* eflags, x86::reg8 _0, x86::reg8 _1) {
    INSN_UNIMPLEMENTED();
}
inline void cmp(x86::memory_view* mv, x86::eflags_reg* eflags, x86::mem _0, x86::reg16 _1) {
    INSN_UNIMPLEMENTED();
}
inline void cmp(x86::memory_view* mv, x86::eflags_reg* eflags, x86::mem _0, x86::reg32 _1) {
    INSN_UNIMPLEMENTED();
}
inline void cmp(x86::memory_view* mv, x86::eflags_reg* eflags, x86::mem _0, x86::reg8 _1) {
    INSN_UNIMPLEMENTED();
}
inline void cmp(x86::memory_view* mv, x86::eflags_reg* eflags, x86::reg16 _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void cmp(x86::memory_view* mv, x86::eflags_reg* eflags, x86::reg32 _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void cmp(x86::memory_view* mv, x86::eflags_reg* eflags, x86::reg8 _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void cmpltpd(x86::memory_view* mv, x86::reg128* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void cmpltpd(x86::reg128* _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void cmpneqps(x86::reg128* _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void cmpnlepd(x86::memory_view* mv, x86::reg128* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void cmpnlepd(x86::reg128* _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void cmps(x86::memory_view* mv, x86::mem _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void comiss(x86::memory_view* mv, x86::reg128* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void comiss(x86::reg128* _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void cpuid() {
    INSN_UNIMPLEMENTED();
}
inline void cvtdq2pd(x86::reg128* _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void cvtdq2ps(x86::reg128* _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void cvtpi2ps(x86::memory_view* mv, x86::reg128* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void cvtpi2ps(x86::reg128* _0, x86::reg64 _1) {
    INSN_UNIMPLEMENTED();
}
inline void cvtsd2si(x86::reg32* _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void cvtsi2ss(x86::reg128* _0, x86::reg32 _1) {
    INSN_UNIMPLEMENTED();
}
inline void dec(x86::memory_view* mv, x86::mem _0) {
    INSN_UNIMPLEMENTED();
}
inline void dec(x86::reg16* _0) {
    INSN_UNIMPLEMENTED();
}
inline void dec(x86::reg32* _0) {
    INSN_UNIMPLEMENTED();
}
inline void dec(x86::reg8* _0) {
    INSN_UNIMPLEMENTED();
}
inline void div(x86::memory_view* mv, x86::reg32* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void div(x86::reg32* _0, x86::reg32 _1) {
    INSN_UNIMPLEMENTED();
}
inline void div(x86::reg8* _0, x86::reg8 _1) {
    INSN_UNIMPLEMENTED();
}
inline void divsd(x86::reg128* _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void emms() {
    INSN_UNIMPLEMENTED();
}
inline void enter(x86::reg32 _0, x86::reg8 _1) {
    INSN_UNIMPLEMENTED();
}
inline void f2xm1(x86::thread_state::fp_state* fp, x86::fp_index _0) {
    INSN_UNIMPLEMENTED();
}
inline void fabs(x86::thread_state::fp_state* fp, x86::fp_index _0) {
    INSN_UNIMPLEMENTED();
}
inline void fadd(x86::memory_view* mv, x86::thread_state::fp_state* fp, x86::fp_index _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void fadd(x86::thread_state::fp_state* fp, x86::fp_index _0, x86::fp_index _1) {
    INSN_UNIMPLEMENTED();
}
inline void faddp(x86::thread_state::fp_state* fp, x86::fp_index _0, x86::fp_index _1) {
    INSN_UNIMPLEMENTED();
}
inline void fchs(x86::thread_state::fp_state* fp, x86::fp_index _0) {
    INSN_UNIMPLEMENTED();
}
inline void fcom(x86::memory_view* mv, x86::thread_state::fp_state* fp, x86::fp_index _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void fcom(x86::thread_state::fp_state* fp, x86::fp_index _0, x86::fp_index _1) {
    INSN_UNIMPLEMENTED();
}
inline void fcomp(x86::memory_view* mv, x86::thread_state::fp_state* fp, x86::fp_index _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void fcomp(x86::thread_state::fp_state* fp, x86::fp_index _0, x86::fp_index _1) {
    INSN_UNIMPLEMENTED();
}
inline void fcompp(x86::thread_state::fp_state* fp, x86::fp_index _0, x86::fp_index _1) {
    INSN_UNIMPLEMENTED();
}
inline void fcos(x86::thread_state::fp_state* fp, x86::fp_index _0) {
    INSN_UNIMPLEMENTED();
}
inline void fdiv(x86::memory_view* mv, x86::thread_state::fp_state* fp, x86::fp_index _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void fdiv(x86::thread_state::fp_state* fp, x86::fp_index _0, x86::fp_index _1) {
    INSN_UNIMPLEMENTED();
}
inline void fdivp(x86::thread_state::fp_state* fp, x86::fp_index _0, x86::fp_index _1) {
    INSN_UNIMPLEMENTED();
}
inline void fdivr(x86::memory_view* mv, x86::thread_state::fp_state* fp, x86::fp_index _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void fdivr(x86::thread_state::fp_state* fp, x86::fp_index _0, x86::fp_index _1) {
    INSN_UNIMPLEMENTED();
}
inline void fdivrp(x86::thread_state::fp_state* fp, x86::fp_index _0, x86::fp_index _1) {
    INSN_UNIMPLEMENTED();
}
inline void femms() {
    INSN_UNIMPLEMENTED();
}
inline void ffree(x86::thread_state::fp_state* fp, x86::fp_index _0) {
    INSN_UNIMPLEMENTED();
}
inline void fiadd(x86::memory_view* mv, x86::thread_state::fp_state* fp, x86::fp_index _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void fidiv(x86::memory_view* mv, x86::thread_state::fp_state* fp, x86::fp_index _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void fidivr(x86::memory_view* mv, x86::thread_state::fp_state* fp, x86::fp_index _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void fild(x86::memory_view* mv, x86::thread_state::fp_state* fp, x86::fp_index _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void fimul(x86::memory_view* mv, x86::thread_state::fp_state* fp, x86::fp_index _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void fist(x86::memory_view* mv, x86::thread_state::fp_state* fp, x86::fp_index _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void fistp(x86::memory_view* mv, x86::thread_state::fp_state* fp, x86::fp_index _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void fisub(x86::memory_view* mv, x86::thread_state::fp_state* fp, x86::fp_index _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void fisubr(x86::memory_view* mv, x86::thread_state::fp_state* fp, x86::fp_index _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void fld(x86::memory_view* mv, x86::thread_state::fp_state* fp, x86::fp_index _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void fld(x86::thread_state::fp_state* fp, x86::fp_index _0, x86::fp_index _1) {
    INSN_UNIMPLEMENTED();
}
inline void fld1(x86::thread_state::fp_state* fp, x86::fp_index _0) {
    INSN_UNIMPLEMENTED();
}
inline void fldcw(x86::memory_view* mv, x86::thread_state::fp_state* fp, x86::mem _0) {
    INSN_UNIMPLEMENTED();
}
inline void fldenv(x86::memory_view* mv, x86::thread_state::fp_state* fp, x86::mem _0) {
    INSN_UNIMPLEMENTED();
}
inline void fldl2e(x86::thread_state::fp_state* fp, x86::fp_index _0) {
    INSN_UNIMPLEMENTED();
}
inline void fldlg2(x86::thread_state::fp_state* fp, x86::fp_index _0) {
    INSN_UNIMPLEMENTED();
}
inline void fldln2(x86::thread_state::fp_state* fp, x86::fp_index _0) {
    INSN_UNIMPLEMENTED();
}
inline void fldpi(x86::thread_state::fp_state* fp, x86::fp_index _0) {
    INSN_UNIMPLEMENTED();
}
inline void fldz(x86::thread_state::fp_state* fp, x86::fp_index _0) {
    INSN_UNIMPLEMENTED();
}
inline void fmul(x86::memory_view* mv, x86::thread_state::fp_state* fp, x86::fp_index _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void fmul(x86::thread_state::fp_state* fp, x86::fp_index _0, x86::fp_index _1) {
    INSN_UNIMPLEMENTED();
}
inline void fmulp(x86::thread_state::fp_state* fp, x86::fp_index _0, x86::fp_index _1) {
    INSN_UNIMPLEMENTED();
}
inline void fnclex(x86::thread_state::fp_state* fp) {
    INSN_UNIMPLEMENTED();
}
inline void fnstcw(x86::memory_view* mv, x86::thread_state::fp_state* fp, x86::mem _0) {
    INSN_UNIMPLEMENTED();
}
inline void fnstenv(x86::memory_view* mv, x86::thread_state::fp_state* fp, x86::mem _0) {
    INSN_UNIMPLEMENTED();
}
inline void fnstsw(x86::memory_view* mv, x86::thread_state::fp_state* fp, x86::mem _0) {
    INSN_UNIMPLEMENTED();
}
inline void fnstsw(x86::thread_state::fp_state* fp, x86::reg16 _0) {
    INSN_UNIMPLEMENTED();
}
inline void fpatan(x86::thread_state::fp_state* fp, x86::fp_index _0) {
    INSN_UNIMPLEMENTED();
}
inline void fprem(x86::thread_state::fp_state* fp, x86::fp_index _0) {
    INSN_UNIMPLEMENTED();
}
inline void fprem1(x86::thread_state::fp_state* fp, x86::fp_index _0) {
    INSN_UNIMPLEMENTED();
}
inline void fptan(x86::thread_state::fp_state* fp, x86::fp_index _0) {
    INSN_UNIMPLEMENTED();
}
inline void frndint(x86::thread_state::fp_state* fp, x86::fp_index _0) {
    INSN_UNIMPLEMENTED();
}
inline void frstor(x86::memory_view* mv, x86::thread_state::fp_state* fp, x86::mem _0) {
    INSN_UNIMPLEMENTED();
}
inline void fsave(x86::memory_view* mv, x86::thread_state::fp_state* fp, x86::mem _0) {
    INSN_UNIMPLEMENTED();
}
inline void fscale(x86::thread_state::fp_state* fp, x86::fp_index _0) {
    INSN_UNIMPLEMENTED();
}
inline void fsin(x86::thread_state::fp_state* fp, x86::fp_index _0) {
    INSN_UNIMPLEMENTED();
}
inline void fsincos(x86::thread_state::fp_state* fp, x86::fp_index _0) {
    INSN_UNIMPLEMENTED();
}
inline void fsqrt(x86::thread_state::fp_state* fp, x86::fp_index _0) {
    INSN_UNIMPLEMENTED();
}
inline void fst(x86::memory_view* mv, x86::thread_state::fp_state* fp, x86::fp_index _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void fstcw(x86::memory_view* mv, x86::thread_state::fp_state* fp, x86::mem _0) {
    INSN_UNIMPLEMENTED();
}
inline void fstp(x86::memory_view* mv, x86::thread_state::fp_state* fp, x86::fp_index _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void fstp(x86::thread_state::fp_state* fp, x86::fp_index _0, x86::fp_index _1) {
    INSN_UNIMPLEMENTED();
}
inline void fstsw(x86::memory_view* mv, x86::thread_state::fp_state* fp, x86::mem _0) {
    INSN_UNIMPLEMENTED();
}
inline void fstsw(x86::thread_state::fp_state* fp, x86::reg16 _0) {
    INSN_UNIMPLEMENTED();
}
inline void fsub(x86::memory_view* mv, x86::thread_state::fp_state* fp, x86::fp_index _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void fsub(x86::thread_state::fp_state* fp, x86::fp_index _0, x86::fp_index _1) {
    INSN_UNIMPLEMENTED();
}
inline void fsubp(x86::thread_state::fp_state* fp, x86::fp_index _0, x86::fp_index _1) {
    INSN_UNIMPLEMENTED();
}
inline void fsubr(x86::memory_view* mv, x86::thread_state::fp_state* fp, x86::fp_index _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void fsubr(x86::thread_state::fp_state* fp, x86::fp_index _0, x86::fp_index _1) {
    INSN_UNIMPLEMENTED();
}
inline void fsubrp(x86::thread_state::fp_state* fp, x86::fp_index _0, x86::fp_index _1) {
    INSN_UNIMPLEMENTED();
}
inline void ftst(x86::thread_state::fp_state* fp, x86::fp_index _0) {
    INSN_UNIMPLEMENTED();
}
inline void fucompp(x86::thread_state::fp_state* fp, x86::fp_index _0, x86::fp_index _1) {
    INSN_UNIMPLEMENTED();
}
inline void fxam(x86::thread_state::fp_state* fp, x86::fp_index _0) {
    INSN_UNIMPLEMENTED();
}
inline void fxch(x86::thread_state::fp_state* fp, x86::fp_index _0, x86::fp_index _1) {
    INSN_UNIMPLEMENTED();
}
inline void fyl2x(x86::thread_state::fp_state* fp, x86::fp_index _0) {
    INSN_UNIMPLEMENTED();
}
inline void idiv(x86::memory_view* mv, x86::reg32* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void idiv(x86::reg32* _0, x86::reg32 _1) {
    INSN_UNIMPLEMENTED();
}
inline void imul(x86::memory_view* mv, x86::reg16* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void imul(x86::memory_view* mv, x86::reg32* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void imul(x86::memory_view* mv, x86::reg8* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void imul(x86::reg32* _0, x86::reg32 _1) {
    INSN_UNIMPLEMENTED();
}
inline void imul(x86::reg32* _0, x86::reg32 _1, x86::reg32 _2) {
    INSN_UNIMPLEMENTED();
}
inline void imul(x86::reg32* _0, x86::reg32 _1, x86::reg8 _2) {
    INSN_UNIMPLEMENTED();
}
inline void imul(x86::reg8* _0, x86::reg8 _1) {
    INSN_UNIMPLEMENTED();
}
inline void in(x86::reg8* _0, x86::reg16 _1) {
    INSN_UNIMPLEMENTED();
}
inline void inc(x86::memory_view* mv, x86::mem _0) {
    INSN_UNIMPLEMENTED();
}
inline void inc(x86::reg16* _0) {
    INSN_UNIMPLEMENTED();
}
inline void inc(x86::reg32* _0) {
    INSN_UNIMPLEMENTED();
}
inline void inc(x86::reg8* _0) {
    INSN_UNIMPLEMENTED();
}
inline void ins(x86::memory_view* mv, x86::mem _0, x86::reg16 _1) {
    INSN_UNIMPLEMENTED();
}
inline void int3(x86::reg8 _0) {
    INSN_UNIMPLEMENTED();
}
inline void int_(x86::reg8 _0) {
    INSN_UNIMPLEMENTED();
}
inline void iret() {
    INSN_UNIMPLEMENTED();
}
inline void jmp(x86::thread_state* ts, x86::memory_view* mv, x86::mem _0) {
    INSN_UNIMPLEMENTED();
}
inline void lahf(x86::reg8* _0) {
    INSN_UNIMPLEMENTED();
}
inline void lea(x86::memory_view* mv, x86::reg32* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void leave() {
    INSN_UNIMPLEMENTED();
}
inline void lods(x86::memory_view* mv, x86::reg8* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void mov(x86::memory_view* mv, x86::mem _0, x86::reg16 _1) {
    INSN_UNIMPLEMENTED();
}
inline void mov(x86::memory_view* mv, x86::mem _0, x86::reg32 _1) {
    INSN_UNIMPLEMENTED();
}
inline void mov(x86::memory_view* mv, x86::mem _0, x86::reg8 _1) {
    INSN_UNIMPLEMENTED();
}
inline void mov(x86::memory_view* mv, x86::reg16* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void mov(x86::memory_view* mv, x86::reg32* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void mov(x86::memory_view* mv, x86::reg8* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void mov(x86::reg16* _0, x86::reg16 _1) {
    INSN_UNIMPLEMENTED();
}
inline void mov(x86::reg32* _0, x86::reg16 _1) {
    INSN_UNIMPLEMENTED();
}
inline void mov(x86::reg32* _0, x86::reg32 _1) {
    INSN_UNIMPLEMENTED();
}
inline void mov(x86::reg8* _0, x86::reg8 _1) {
    INSN_UNIMPLEMENTED();
}
inline void movapd(x86::memory_view* mv, x86::reg128* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void movapd(x86::reg128* _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void movaps(x86::memory_view* mv, x86::mem _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void movaps(x86::memory_view* mv, x86::reg128* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void movaps(x86::reg128* _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void movd(x86::memory_view* mv, x86::mem _0, x86::reg64 _1) {
    INSN_UNIMPLEMENTED();
}
inline void movd(x86::memory_view* mv, x86::reg64* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void movd(x86::reg128* _0, x86::reg32 _1) {
    INSN_UNIMPLEMENTED();
}
inline void movd(x86::reg32* _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void movd(x86::reg32* _0, x86::reg64 _1) {
    INSN_UNIMPLEMENTED();
}
inline void movd(x86::reg64* _0, x86::reg32 _1) {
    INSN_UNIMPLEMENTED();
}
inline void movdq2q(x86::reg64* _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void movdqa(x86::memory_view* mv, x86::mem _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void movdqa(x86::memory_view* mv, x86::reg128* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void movdqa(x86::reg128* _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void movdqu(x86::memory_view* mv, x86::mem _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void movdqu(x86::memory_view* mv, x86::reg128* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void movdqu(x86::reg128* _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void movhlps(x86::reg128* _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void movhps(x86::memory_view* mv, x86::mem _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void movhps(x86::memory_view* mv, x86::reg128* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void movlhps(x86::reg128* _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void movlpd(x86::memory_view* mv, x86::mem _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void movlpd(x86::memory_view* mv, x86::reg128* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void movlps(x86::memory_view* mv, x86::mem _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void movlps(x86::memory_view* mv, x86::reg128* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void movntps(x86::memory_view* mv, x86::mem _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void movntq(x86::memory_view* mv, x86::mem _0, x86::reg64 _1) {
    INSN_UNIMPLEMENTED();
}
inline void movq(x86::memory_view* mv, x86::mem _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void movq(x86::memory_view* mv, x86::mem _0, x86::reg64 _1) {
    INSN_UNIMPLEMENTED();
}
inline void movq(x86::memory_view* mv, x86::reg128* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void movq(x86::memory_view* mv, x86::reg64* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void movq(x86::reg64* _0, x86::reg64 _1) {
    INSN_UNIMPLEMENTED();
}
inline void movq2dq(x86::reg128* _0, x86::reg64 _1) {
    INSN_UNIMPLEMENTED();
}
inline void movs(x86::memory_view* mv, x86::mem _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void movsd(x86::reg128* _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void movss(x86::memory_view* mv, x86::mem _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void movss(x86::memory_view* mv, x86::reg128* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void movss(x86::reg128* _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void movsx(x86::memory_view* mv, x86::reg16* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void movsx(x86::memory_view* mv, x86::reg32* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void movsx(x86::reg16* _0, x86::reg8 _1) {
    INSN_UNIMPLEMENTED();
}
inline void movsx(x86::reg32* _0, x86::reg16 _1) {
    INSN_UNIMPLEMENTED();
}
inline void movsx(x86::reg32* _0, x86::reg8 _1) {
    INSN_UNIMPLEMENTED();
}
inline void movups(x86::memory_view* mv, x86::mem _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void movups(x86::memory_view* mv, x86::reg128* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void movzx(x86::memory_view* mv, x86::reg16* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void movzx(x86::memory_view* mv, x86::reg32* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void movzx(x86::reg16* _0, x86::reg8 _1) {
    INSN_UNIMPLEMENTED();
}
inline void movzx(x86::reg32* _0, x86::reg16 _1) {
    INSN_UNIMPLEMENTED();
}
inline void movzx(x86::reg32* _0, x86::reg8 _1) {
    INSN_UNIMPLEMENTED();
}
inline void mul(x86::memory_view* mv, x86::reg32* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void mul(x86::reg32* _0, x86::reg32 _1) {
    INSN_UNIMPLEMENTED();
}
inline void mulpd(x86::reg128* _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void mulps(x86::memory_view* mv, x86::reg128* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void mulps(x86::reg128* _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void mulsd(x86::memory_view* mv, x86::reg128* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void mulsd(x86::reg128* _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void mulss(x86::memory_view* mv, x86::reg128* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void mulss(x86::reg128* _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void neg(x86::memory_view* mv, x86::mem _0) {
    INSN_UNIMPLEMENTED();
}
inline void neg(x86::reg16* _0) {
    INSN_UNIMPLEMENTED();
}
inline void neg(x86::reg32* _0) {
    INSN_UNIMPLEMENTED();
}
inline void neg(x86::reg8* _0) {
    INSN_UNIMPLEMENTED();
}
inline void nop() {
    INSN_UNIMPLEMENTED();
}
inline void not_(x86::reg32* _0) {
    INSN_UNIMPLEMENTED();
}
inline void not_(x86::reg8* _0) {
    INSN_UNIMPLEMENTED();
}
inline void or_(x86::memory_view* mv, x86::mem _0, x86::reg16 _1) {
    INSN_UNIMPLEMENTED();
}
inline void or_(x86::memory_view* mv, x86::mem _0, x86::reg32 _1) {
    INSN_UNIMPLEMENTED();
}
inline void or_(x86::memory_view* mv, x86::mem _0, x86::reg8 _1) {
    INSN_UNIMPLEMENTED();
}
inline void or_(x86::memory_view* mv, x86::reg32* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void or_(x86::memory_view* mv, x86::reg8* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void or_(x86::reg16* _0, x86::reg16 _1) {
    INSN_UNIMPLEMENTED();
}
inline void or_(x86::reg32* _0, x86::reg32 _1) {
    INSN_UNIMPLEMENTED();
}
inline void or_(x86::reg8* _0, x86::reg8 _1) {
    INSN_UNIMPLEMENTED();
}
inline void orpd(x86::memory_view* mv, x86::reg128* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void orpd(x86::reg128* _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void orps(x86::reg128* _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void packssdw(x86::reg64* _0, x86::reg64 _1) {
    INSN_UNIMPLEMENTED();
}
inline void packsswb(x86::memory_view* mv, x86::reg64* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void packsswb(x86::reg128* _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void packsswb(x86::reg64* _0, x86::reg64 _1) {
    INSN_UNIMPLEMENTED();
}
inline void packuswb(x86::memory_view* mv, x86::reg64* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void packuswb(x86::reg128* _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void packuswb(x86::reg64* _0, x86::reg64 _1) {
    INSN_UNIMPLEMENTED();
}
inline void paddb(x86::memory_view* mv, x86::reg64* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void paddb(x86::reg128* _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void paddb(x86::reg64* _0, x86::reg64 _1) {
    INSN_UNIMPLEMENTED();
}
inline void paddd(x86::reg128* _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void paddd(x86::reg64* _0, x86::reg64 _1) {
    INSN_UNIMPLEMENTED();
}
inline void paddq(x86::reg128* _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void paddsb(x86::reg64* _0, x86::reg64 _1) {
    INSN_UNIMPLEMENTED();
}
inline void paddsw(x86::memory_view* mv, x86::reg128* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void paddsw(x86::memory_view* mv, x86::reg64* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void paddsw(x86::reg128* _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void paddsw(x86::reg64* _0, x86::reg64 _1) {
    INSN_UNIMPLEMENTED();
}
inline void paddusb(x86::memory_view* mv, x86::reg128* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void paddusb(x86::memory_view* mv, x86::reg64* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void paddusb(x86::reg64* _0, x86::reg64 _1) {
    INSN_UNIMPLEMENTED();
}
inline void paddw(x86::memory_view* mv, x86::reg128* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void paddw(x86::memory_view* mv, x86::reg64* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void paddw(x86::reg128* _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void paddw(x86::reg64* _0, x86::reg64 _1) {
    INSN_UNIMPLEMENTED();
}
inline void pand(x86::memory_view* mv, x86::reg128* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void pand(x86::memory_view* mv, x86::reg64* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void pand(x86::reg128* _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void pand(x86::reg64* _0, x86::reg64 _1) {
    INSN_UNIMPLEMENTED();
}
inline void pandn(x86::memory_view* mv, x86::reg128* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void pandn(x86::memory_view* mv, x86::reg64* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void pandn(x86::reg128* _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void pandn(x86::reg64* _0, x86::reg64 _1) {
    INSN_UNIMPLEMENTED();
}
inline void pcmpeqd(x86::reg128* _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void pcmpeqd(x86::reg64* _0, x86::reg64 _1) {
    INSN_UNIMPLEMENTED();
}
inline void pcmpeqw(x86::reg128* _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void pcmpeqw(x86::reg64* _0, x86::reg64 _1) {
    INSN_UNIMPLEMENTED();
}
inline void pcmpgtb(x86::reg64* _0, x86::reg64 _1) {
    INSN_UNIMPLEMENTED();
}
inline void pcmpgtd(x86::reg64* _0, x86::reg64 _1) {
    INSN_UNIMPLEMENTED();
}
inline void pextrw(x86::reg32* _0, x86::reg128 _1, x86::reg8 _2) {
    INSN_UNIMPLEMENTED();
}
inline void pf2id(x86::reg64* _0, x86::reg64 _1) {
    INSN_UNIMPLEMENTED();
}
inline void pfacc(x86::reg64* _0, x86::reg64 _1) {
    INSN_UNIMPLEMENTED();
}
inline void pfadd(x86::memory_view* mv, x86::reg64* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void pfadd(x86::reg64* _0, x86::reg64 _1) {
    INSN_UNIMPLEMENTED();
}
inline void pfcmpeq(x86::reg64* _0, x86::reg64 _1) {
    INSN_UNIMPLEMENTED();
}
inline void pfcmpge(x86::memory_view* mv, x86::reg64* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void pfcmpge(x86::reg64* _0, x86::reg64 _1) {
    INSN_UNIMPLEMENTED();
}
inline void pfcmpgt(x86::memory_view* mv, x86::reg64* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void pfcmpgt(x86::reg64* _0, x86::reg64 _1) {
    INSN_UNIMPLEMENTED();
}
inline void pfmax(x86::reg64* _0, x86::reg64 _1) {
    INSN_UNIMPLEMENTED();
}
inline void pfmin(x86::reg64* _0, x86::reg64 _1) {
    INSN_UNIMPLEMENTED();
}
inline void pfmul(x86::memory_view* mv, x86::reg64* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void pfmul(x86::reg64* _0, x86::reg64 _1) {
    INSN_UNIMPLEMENTED();
}
inline void pfnacc(x86::reg64* _0, x86::reg64 _1) {
    INSN_UNIMPLEMENTED();
}
inline void pfpnacc(x86::reg64* _0, x86::reg64 _1) {
    INSN_UNIMPLEMENTED();
}
inline void pfrcp(x86::reg64* _0, x86::reg64 _1) {
    INSN_UNIMPLEMENTED();
}
inline void pfrcpit1(x86::reg64* _0, x86::reg64 _1) {
    INSN_UNIMPLEMENTED();
}
inline void pfrcpit2(x86::reg64* _0, x86::reg64 _1) {
    INSN_UNIMPLEMENTED();
}
inline void pfrsqit1(x86::reg64* _0, x86::reg64 _1) {
    INSN_UNIMPLEMENTED();
}
inline void pfrsqrt(x86::reg64* _0, x86::reg64 _1) {
    INSN_UNIMPLEMENTED();
}
inline void pfsub(x86::memory_view* mv, x86::reg64* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void pfsub(x86::reg64* _0, x86::reg64 _1) {
    INSN_UNIMPLEMENTED();
}
inline void pfsubr(x86::memory_view* mv, x86::reg64* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void pfsubr(x86::reg64* _0, x86::reg64 _1) {
    INSN_UNIMPLEMENTED();
}
inline void pi2fd(x86::reg64* _0, x86::reg64 _1) {
    INSN_UNIMPLEMENTED();
}
inline void pinsrw(x86::reg128* _0, x86::reg32 _1, x86::reg8 _2) {
    INSN_UNIMPLEMENTED();
}
inline void pmaddwd(x86::memory_view* mv, x86::reg64* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void pmaddwd(x86::reg64* _0, x86::reg64 _1) {
    INSN_UNIMPLEMENTED();
}
inline void pmaxsw(x86::memory_view* mv, x86::reg128* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void pmaxsw(x86::memory_view* mv, x86::reg64* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void pmaxsw(x86::reg128* _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void pmovmskb(x86::reg32* _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void pmovmskb(x86::reg32* _0, x86::reg64 _1) {
    INSN_UNIMPLEMENTED();
}
inline void pmulhuw(x86::reg128* _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void pmulhuw(x86::reg64* _0, x86::reg64 _1) {
    INSN_UNIMPLEMENTED();
}
inline void pmulhw(x86::memory_view* mv, x86::reg128* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void pmulhw(x86::memory_view* mv, x86::reg64* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void pmulhw(x86::reg128* _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void pmulhw(x86::reg64* _0, x86::reg64 _1) {
    INSN_UNIMPLEMENTED();
}
inline void pmullw(x86::memory_view* mv, x86::reg128* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void pmullw(x86::memory_view* mv, x86::reg64* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void pmullw(x86::reg128* _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void pmullw(x86::reg64* _0, x86::reg64 _1) {
    INSN_UNIMPLEMENTED();
}
inline void pop(x86::memory_view* mv, x86::reg32* esp, x86::mem _0) {
    INSN_UNIMPLEMENTED();
}
inline void pop(x86::memory_view* mv, x86::reg32* esp, x86::reg32 _0) {
    INSN_UNIMPLEMENTED();
}
inline void popa() {
    INSN_UNIMPLEMENTED();
}
inline void popf() {
    INSN_UNIMPLEMENTED();
}
inline void por(x86::memory_view* mv, x86::reg128* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void por(x86::memory_view* mv, x86::reg64* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void por(x86::reg128* _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void por(x86::reg64* _0, x86::reg64 _1) {
    INSN_UNIMPLEMENTED();
}
inline void pshufd(x86::reg128* _0, x86::reg128 _1, x86::reg8 _2) {
    INSN_UNIMPLEMENTED();
}
inline void pslld(x86::reg128* _0, x86::reg8 _1) {
    INSN_UNIMPLEMENTED();
}
inline void pslld(x86::reg64* _0, x86::reg8 _1) {
    INSN_UNIMPLEMENTED();
}
inline void psllq(x86::reg128* _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void psllq(x86::reg128* _0, x86::reg8 _1) {
    INSN_UNIMPLEMENTED();
}
inline void psllq(x86::reg64* _0, x86::reg8 _1) {
    INSN_UNIMPLEMENTED();
}
inline void psllw(x86::reg128* _0, x86::reg8 _1) {
    INSN_UNIMPLEMENTED();
}
inline void psllw(x86::reg64* _0, x86::reg8 _1) {
    INSN_UNIMPLEMENTED();
}
inline void psrad(x86::reg64* _0, x86::reg8 _1) {
    INSN_UNIMPLEMENTED();
}
inline void psraw(x86::reg128* _0, x86::reg8 _1) {
    INSN_UNIMPLEMENTED();
}
inline void psraw(x86::reg64* _0, x86::reg8 _1) {
    INSN_UNIMPLEMENTED();
}
inline void psrld(x86::reg64* _0, x86::reg8 _1) {
    INSN_UNIMPLEMENTED();
}
inline void psrldq(x86::reg128* _0, x86::reg8 _1) {
    INSN_UNIMPLEMENTED();
}
inline void psrlq(x86::reg128* _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void psrlq(x86::reg128* _0, x86::reg8 _1) {
    INSN_UNIMPLEMENTED();
}
inline void psrlq(x86::reg64* _0, x86::reg8 _1) {
    INSN_UNIMPLEMENTED();
}
inline void psrlw(x86::reg128* _0, x86::reg8 _1) {
    INSN_UNIMPLEMENTED();
}
inline void psrlw(x86::reg64* _0, x86::reg8 _1) {
    INSN_UNIMPLEMENTED();
}
inline void psubb(x86::memory_view* mv, x86::reg64* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void psubb(x86::reg64* _0, x86::reg64 _1) {
    INSN_UNIMPLEMENTED();
}
inline void psubd(x86::reg128* _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void psubd(x86::reg64* _0, x86::reg64 _1) {
    INSN_UNIMPLEMENTED();
}
inline void psubq(x86::reg128* _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void psubsb(x86::reg64* _0, x86::reg64 _1) {
    INSN_UNIMPLEMENTED();
}
inline void psubsw(x86::reg128* _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void psubsw(x86::reg64* _0, x86::reg64 _1) {
    INSN_UNIMPLEMENTED();
}
inline void psubusb(x86::memory_view* mv, x86::reg128* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void psubusb(x86::memory_view* mv, x86::reg64* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void psubusb(x86::reg64* _0, x86::reg64 _1) {
    INSN_UNIMPLEMENTED();
}
inline void psubusw(x86::reg128* _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void psubusw(x86::reg64* _0, x86::reg64 _1) {
    INSN_UNIMPLEMENTED();
}
inline void psubw(x86::memory_view* mv, x86::reg128* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void psubw(x86::memory_view* mv, x86::reg64* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void psubw(x86::reg128* _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void psubw(x86::reg64* _0, x86::reg64 _1) {
    INSN_UNIMPLEMENTED();
}
inline void pswapd(x86::reg64* _0, x86::reg64 _1) {
    INSN_UNIMPLEMENTED();
}
inline void punpckhbw(x86::memory_view* mv, x86::reg64* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void punpckhbw(x86::reg64* _0, x86::reg64 _1) {
    INSN_UNIMPLEMENTED();
}
inline void punpckhdq(x86::memory_view* mv, x86::reg64* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void punpckhdq(x86::reg128* _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void punpckhdq(x86::reg64* _0, x86::reg64 _1) {
    INSN_UNIMPLEMENTED();
}
inline void punpckhqdq(x86::reg128* _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void punpckhwd(x86::reg128* _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void punpckhwd(x86::reg64* _0, x86::reg64 _1) {
    INSN_UNIMPLEMENTED();
}
inline void punpcklbw(x86::memory_view* mv, x86::reg64* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void punpcklbw(x86::reg128* _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void punpcklbw(x86::reg64* _0, x86::reg64 _1) {
    INSN_UNIMPLEMENTED();
}
inline void punpckldq(x86::memory_view* mv, x86::reg64* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void punpckldq(x86::reg128* _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void punpckldq(x86::reg64* _0, x86::reg64 _1) {
    INSN_UNIMPLEMENTED();
}
inline void punpcklqdq(x86::reg128* _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void punpcklwd(x86::reg128* _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void punpcklwd(x86::reg64* _0, x86::reg64 _1) {
    INSN_UNIMPLEMENTED();
}
inline void push(x86::memory_view* mv, x86::reg32* esp, x86::mem _0) {
    INSN_UNIMPLEMENTED();
}
inline void push(x86::memory_view* mv, x86::reg32* esp, x86::reg16 _0) {
    INSN_UNIMPLEMENTED();
}
inline void push(x86::memory_view* mv, x86::reg32* esp, x86::reg32 _0) {
    INSN_UNIMPLEMENTED();
}
inline void pusha() {
    INSN_UNIMPLEMENTED();
}
inline void pushf() {
    INSN_UNIMPLEMENTED();
}
inline void pxor(x86::memory_view* mv, x86::reg64* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void pxor(x86::reg128* _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void pxor(x86::reg64* _0, x86::reg64 _1) {
    INSN_UNIMPLEMENTED();
}
inline void rcpps(x86::reg128* _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void rcpss(x86::reg128* _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void rcr(x86::reg32* _0, x86::reg8 _1) {
    INSN_UNIMPLEMENTED();
}
inline void rdtsc() {
    INSN_UNIMPLEMENTED();
}
inline void retn(x86::memory_view* mv, x86::reg32* esp) {
    INSN_UNIMPLEMENTED();
}
inline void retn(x86::memory_view* mv, x86::reg32* esp, x86::reg16 _0) {
    INSN_UNIMPLEMENTED();
}
inline void rol(x86::reg32* _0, x86::reg8 _1) {
    INSN_UNIMPLEMENTED();
}
inline void rol(x86::reg8* _0, x86::reg8 _1) {
    INSN_UNIMPLEMENTED();
}
inline void rsqrtss(x86::reg128* _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void sahf(x86::reg8* _0) {
    INSN_UNIMPLEMENTED();
}
inline void sal(x86::memory_view* mv, x86::mem _0, x86::reg8 _1) {
    INSN_UNIMPLEMENTED();
}
inline void sar(x86::memory_view* mv, x86::mem _0, x86::reg8 _1) {
    INSN_UNIMPLEMENTED();
}
inline void sar(x86::reg32* _0, x86::reg8 _1) {
    INSN_UNIMPLEMENTED();
}
inline void sar(x86::reg8* _0, x86::reg8 _1) {
    INSN_UNIMPLEMENTED();
}
inline void sbb(x86::memory_view* mv, x86::mem _0, x86::reg32 _1) {
    INSN_UNIMPLEMENTED();
}
inline void sbb(x86::memory_view* mv, x86::reg32* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void sbb(x86::reg32* _0, x86::reg32 _1) {
    INSN_UNIMPLEMENTED();
}
inline void sbb(x86::reg8* _0, x86::reg8 _1) {
    INSN_UNIMPLEMENTED();
}
inline void scas(x86::memory_view* mv, x86::mem _0, x86::reg32 _1) {
    INSN_UNIMPLEMENTED();
}
inline void scas(x86::memory_view* mv, x86::mem _0, x86::reg8 _1) {
    INSN_UNIMPLEMENTED();
}
inline void setb(x86::eflags_reg eflags, x86::reg8* _0) {
    INSN_UNIMPLEMENTED();
}
inline void setl(x86::eflags_reg eflags, x86::reg8* _0) {
    INSN_UNIMPLEMENTED();
}
inline void setle(x86::eflags_reg eflags, x86::reg8* _0) {
    INSN_UNIMPLEMENTED();
}
inline void setnbe(x86::eflags_reg eflags, x86::reg8* _0) {
    INSN_UNIMPLEMENTED();
}
inline void setnl(x86::eflags_reg eflags, x86::reg8* _0) {
    INSN_UNIMPLEMENTED();
}
inline void setnle(x86::eflags_reg eflags, x86::reg8* _0) {
    INSN_UNIMPLEMENTED();
}
inline void setnle(x86::memory_view* mv, x86::eflags_reg eflags, x86::mem _0) {
    INSN_UNIMPLEMENTED();
}
inline void setns(x86::eflags_reg eflags, x86::reg8* _0) {
    INSN_UNIMPLEMENTED();
}
inline void setnz(x86::eflags_reg eflags, x86::reg8* _0) {
    INSN_UNIMPLEMENTED();
}
inline void setnz(x86::memory_view* mv, x86::eflags_reg eflags, x86::mem _0) {
    INSN_UNIMPLEMENTED();
}
inline void sets(x86::eflags_reg eflags, x86::reg8* _0) {
    INSN_UNIMPLEMENTED();
}
inline void setz(x86::eflags_reg eflags, x86::reg8* _0) {
    INSN_UNIMPLEMENTED();
}
inline void setz(x86::memory_view* mv, x86::eflags_reg eflags, x86::mem _0) {
    INSN_UNIMPLEMENTED();
}
inline void shl(x86::memory_view* mv, x86::mem _0, x86::reg8 _1) {
    INSN_UNIMPLEMENTED();
}
inline void shl(x86::reg16* _0, x86::reg8 _1) {
    INSN_UNIMPLEMENTED();
}
inline void shl(x86::reg32* _0, x86::reg8 _1) {
    INSN_UNIMPLEMENTED();
}
inline void shl(x86::reg8* _0, x86::reg8 _1) {
    INSN_UNIMPLEMENTED();
}
inline void shld(x86::reg32* _0, x86::reg32 _1, x86::reg8 _2) {
    INSN_UNIMPLEMENTED();
}
inline void shr(x86::memory_view* mv, x86::mem _0, x86::reg8 _1) {
    INSN_UNIMPLEMENTED();
}
inline void shr(x86::reg16* _0, x86::reg8 _1) {
    INSN_UNIMPLEMENTED();
}
inline void shr(x86::reg32* _0, x86::reg8 _1) {
    INSN_UNIMPLEMENTED();
}
inline void shr(x86::reg8* _0, x86::reg8 _1) {
    INSN_UNIMPLEMENTED();
}
inline void shrd(x86::reg32* _0, x86::reg32 _1, x86::reg8 _2) {
    INSN_UNIMPLEMENTED();
}
inline void shufps(x86::memory_view* mv, x86::reg128* _0, x86::mem _1, x86::reg8 _2) {
    INSN_UNIMPLEMENTED();
}
inline void shufps(x86::reg128* _0, x86::reg128 _1, x86::reg8 _2) {
    INSN_UNIMPLEMENTED();
}
inline void std() {
    INSN_UNIMPLEMENTED();
}
inline void stmxcsr(x86::memory_view* mv, x86::mem _0) {
    INSN_UNIMPLEMENTED();
}
inline void stos(x86::memory_view* mv, x86::mem _0, x86::reg16 _1) {
    INSN_UNIMPLEMENTED();
}
inline void stos(x86::memory_view* mv, x86::mem _0, x86::reg32 _1) {
    INSN_UNIMPLEMENTED();
}
inline void stos(x86::memory_view* mv, x86::mem _0, x86::reg8 _1) {
    INSN_UNIMPLEMENTED();
}
inline void sub(x86::memory_view* mv, x86::mem _0, x86::reg16 _1) {
    INSN_UNIMPLEMENTED();
}
inline void sub(x86::memory_view* mv, x86::mem _0, x86::reg32 _1) {
    INSN_UNIMPLEMENTED();
}
inline void sub(x86::memory_view* mv, x86::mem _0, x86::reg8 _1) {
    INSN_UNIMPLEMENTED();
}
inline void sub(x86::memory_view* mv, x86::reg16* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void sub(x86::memory_view* mv, x86::reg32* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void sub(x86::memory_view* mv, x86::reg8* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void sub(x86::reg16* _0, x86::reg16 _1) {
    INSN_UNIMPLEMENTED();
}
inline void sub(x86::reg32* _0, x86::reg32 _1) {
    INSN_UNIMPLEMENTED();
}
inline void sub(x86::reg8* _0, x86::reg8 _1) {
    INSN_UNIMPLEMENTED();
}
inline void subpd(x86::reg128* _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void subps(x86::memory_view* mv, x86::reg128* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void subps(x86::reg128* _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void subsd(x86::memory_view* mv, x86::reg128* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void subsd(x86::reg128* _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void subss(x86::reg128* _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void test(x86::eflags_reg* eflags, x86::reg16 _0, x86::reg16 _1) {
    INSN_UNIMPLEMENTED();
}
inline void test(x86::eflags_reg* eflags, x86::reg32 _0, x86::reg32 _1) {
    INSN_UNIMPLEMENTED();
}
inline void test(x86::eflags_reg* eflags, x86::reg8 _0, x86::reg8 _1) {
    INSN_UNIMPLEMENTED();
}
inline void test(x86::memory_view* mv, x86::eflags_reg* eflags, x86::mem _0, x86::reg16 _1) {
    INSN_UNIMPLEMENTED();
}
inline void test(x86::memory_view* mv, x86::eflags_reg* eflags, x86::mem _0, x86::reg32 _1) {
    INSN_UNIMPLEMENTED();
}
inline void test(x86::memory_view* mv, x86::eflags_reg* eflags, x86::mem _0, x86::reg8 _1) {
    INSN_UNIMPLEMENTED();
}
inline void ucomisd(x86::reg128* _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void unpckhpd(x86::reg128* _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void unpckhps(x86::memory_view* mv, x86::reg128* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void unpckhps(x86::reg128* _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void unpcklpd(x86::reg128* _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void unpcklps(x86::memory_view* mv, x86::reg128* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void unpcklps(x86::reg128* _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void wait() {
    INSN_UNIMPLEMENTED();
}
inline void xchg(x86::memory_view* mv, x86::reg32* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void xchg(x86::reg16* _0, x86::reg16 _1) {
    INSN_UNIMPLEMENTED();
}
inline void xchg(x86::reg32* _0, x86::reg32 _1) {
    INSN_UNIMPLEMENTED();
}
inline void xchg(x86::reg8* _0, x86::reg8 _1) {
    INSN_UNIMPLEMENTED();
}
inline void xlat(x86::memory_view* mv, x86::reg8* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void xor_(x86::memory_view* mv, x86::mem _0, x86::reg16 _1) {
    INSN_UNIMPLEMENTED();
}
inline void xor_(x86::memory_view* mv, x86::mem _0, x86::reg32 _1) {
    INSN_UNIMPLEMENTED();
}
inline void xor_(x86::memory_view* mv, x86::mem _0, x86::reg8 _1) {
    INSN_UNIMPLEMENTED();
}
inline void xor_(x86::memory_view* mv, x86::reg16* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void xor_(x86::memory_view* mv, x86::reg32* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void xor_(x86::memory_view* mv, x86::reg8* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void xor_(x86::reg16* _0, x86::reg16 _1) {
    INSN_UNIMPLEMENTED();
}
inline void xor_(x86::reg32* _0, x86::reg32 _1) {
    INSN_UNIMPLEMENTED();
}
inline void xor_(x86::reg8* _0, x86::reg8 _1) {
    INSN_UNIMPLEMENTED();
}
inline void xorpd(x86::reg128* _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}
inline void xorps(x86::memory_view* mv, x86::reg128* _0, x86::mem _1) {
    INSN_UNIMPLEMENTED();
}
inline void xorps(x86::reg128* _0, x86::reg128 _1) {
    INSN_UNIMPLEMENTED();
}


} // namespace x86::insn
