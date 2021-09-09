// clang-format off
// Disable unused labels warning
#pragma warning(disable: 4102)

#include "x86/insn.hpp"
#include "x86/thread_state.hpp"
#include "game/stubs.hpp"
#include "game/functions.hpp"

namespace game {

using namespace x86::insn;

void sub_770FED(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, ts->ebp);
	mov(&ts->ebp, ts->esp);
	cmp(mv, &ts->eflags, x86::mem(ts->ebp + 0x8, 4), 0x0);
	push(mv, &ts->esp, ts->esi);
	mov(&ts->esi, 0x8B88B0);
	if (ts->eflags.zero) {
        goto loc_771013;
    }
	lea(mv, &ts->eax, x86::mem(ts->ebp + 0xC, 4));
	push(mv, &ts->esp, ts->eax);
	push(mv, &ts->esp, x86::mem(ts->ebp + 0x8, 4));
	push(mv, &ts->esp, 0x800);
	push(mv, &ts->esp, ts->esi);
	game::__vsnprintf(ts, mv);
	add(&ts->esp, 0x10);
	goto loc_77101A;

loc_771013:
	mov(mv, x86::mem(0x8B88B0, 1), 0x0);

loc_77101A:
	push(mv, &ts->esp, ts->esi);
	push(mv, &ts->esp, 0x786E70);
	call(ts, mv, x86::mem(0x81CAFC, 4));
	pop(mv, &ts->esp, ts->ecx);
	pop(mv, &ts->esp, ts->ecx);
	pop(mv, &ts->esp, ts->esi);
	pop(mv, &ts->esp, ts->ebp);
	retn(mv, &ts->esp);
}

void sub_77102B(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, ts->ebp);
	mov(&ts->ebp, ts->esp);
	cmp(mv, &ts->eflags, x86::mem(ts->ebp + 0x8, 4), 0x0);
	push(mv, &ts->esp, ts->esi);
	mov(&ts->esi, 0x8B90B0);
	if (ts->eflags.zero) {
        goto loc_771051;
    }
	lea(mv, &ts->eax, x86::mem(ts->ebp + 0xC, 4));
	push(mv, &ts->esp, ts->eax);
	push(mv, &ts->esp, x86::mem(ts->ebp + 0x8, 4));
	push(mv, &ts->esp, 0x800);
	push(mv, &ts->esp, ts->esi);
	game::__vsnprintf(ts, mv);
	add(&ts->esp, 0x10);
	goto loc_771058;

loc_771051:
	mov(mv, x86::mem(0x8B90B0, 1), 0x0);

loc_771058:
	push(mv, &ts->esp, ts->esi);
	push(mv, &ts->esp, 0x7DD638);
	push(mv, &ts->esp, 0x2);
	game::sub_771082(ts, mv);
	add(&ts->esp, 0xC);
	pop(mv, &ts->esp, ts->esi);
	pop(mv, &ts->esp, ts->ebp);
	goto sub_770FDB;
}

void sub_77106F(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, ts->ebp);
	mov(&ts->ebp, ts->esp);
	mov(mv, &ts->ecx, x86::mem(ts->ebp + 0x8, 4));
	mov(mv, &ts->eax, x86::mem(0x81CAFC, 4));
	mov(mv, x86::mem(0x81CAFC, 4), ts->ecx);
	pop(mv, &ts->esp, ts->ebp);
	retn(mv, &ts->esp);
}

void sub_771082(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, ts->ebp);
	mov(&ts->ebp, ts->esp);
	lea(mv, &ts->eax, x86::mem(ts->ebp + 0x10, 4));
	push(mv, &ts->esp, ts->eax);
	push(mv, &ts->esp, x86::mem(ts->ebp + 0xC, 4));
	push(mv, &ts->esp, x86::mem(ts->ebp + 0x8, 4));
	game::sub_6FBC1D(ts, mv);
	add(&ts->esp, 0xC);
	pop(mv, &ts->esp, ts->ebp);
	retn(mv, &ts->esp);
}

void sub_771099(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, ts->ebp);
	mov(&ts->ebp, ts->esp);
	lea(mv, &ts->eax, x86::mem(ts->ebp + 0xC, 4));
	push(mv, &ts->esp, ts->eax);
	push(mv, &ts->esp, x86::mem(ts->ebp + 0x8, 4));
	push(mv, &ts->esp, 0x2);
	game::sub_6FBC1D(ts, mv);
	add(&ts->esp, 0xC);
	pop(mv, &ts->esp, ts->ebp);
	retn(mv, &ts->esp);
}

void sub_7710AF(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, ts->ebp);
	mov(&ts->ebp, ts->esp);
	lea(mv, &ts->eax, x86::mem(ts->ebp + 0x10, 4));
	push(mv, &ts->esp, ts->eax);
	push(mv, &ts->esp, x86::mem(ts->ebp + 0xC, 4));
	push(mv, &ts->esp, x86::mem(ts->ebp + 0x8, 4));
	game::sub_6FBC7B(ts, mv);
	add(&ts->esp, 0xC);
	pop(mv, &ts->esp, ts->ebp);
	retn(mv, &ts->esp);
}

void sub_7710C6(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, ts->ebp);
	mov(&ts->ebp, ts->esp);
	lea(mv, &ts->eax, x86::mem(ts->ebp + 0xC, 4));
	push(mv, &ts->esp, ts->eax);
	push(mv, &ts->esp, x86::mem(ts->ebp + 0x8, 4));
	push(mv, &ts->esp, 0x2);
	game::sub_6FBC7B(ts, mv);
	add(&ts->esp, 0xC);
	pop(mv, &ts->esp, ts->ebp);
	retn(mv, &ts->esp);
}

void _longjmp(x86::thread_state* ts, x86::memory_view* mv) {
	mov(mv, &ts->ebx, x86::mem(ts->esp + 0x4, 4));
	mov(mv, &ts->ebp, x86::mem(ts->ebx, 4));
	mov(mv, &ts->esi, x86::mem(ts->ebx + 0x18, 4));
	cmp(mv, &ts->eflags, ts->esi, x86::mem(0x0, 4));
	if (ts->eflags.zero) {
        goto _lj_local_unwind;
    }
	push(mv, &ts->esp, ts->esi);
	game::__global_unwind2(ts, mv);
	add(&ts->esp, 0x4);

_lj_local_unwind:
	cmp(&ts->eflags, ts->esi, 0x0);
	if (ts->eflags.zero) {
        goto _lj_no_unwind;
    }
	lea(mv, &ts->eax, x86::mem(ts->ebx + 0x20, 4));
	push(mv, &ts->esp, ts->eax);
	game::_rt_probe_read4_x_(ts, mv);
	or_(&ts->eax, ts->eax);
	if (ts->eflags.zero) {
        goto _lj_old_unwind;
    }
	mov(mv, &ts->eax, x86::mem(ts->ebx + 0x20, 4));
	cmp(&ts->eflags, ts->eax, 0x56433230);
	if (!ts->eflags.zero) {
        goto _lj_old_unwind;
    }
	mov(mv, &ts->eax, x86::mem(ts->ebx + 0x24, 4));
	or_(&ts->eax, ts->eax);
	if (ts->eflags.zero) {
        goto _lj_no_unwind;
    }
	push(mv, &ts->esp, ts->ebx);
	call(ts, mv, ts->eax);
	goto _lj_no_unwind;

_lj_old_unwind:
	mov(mv, &ts->eax, x86::mem(ts->ebx + 0x1C, 4));
	push(mv, &ts->esp, ts->eax);
	push(mv, &ts->esp, ts->esi);
	game::__local_unwind2(ts, mv);
	add(&ts->esp, 0x8);

_lj_no_unwind:
	push(mv, &ts->esp, 0x0);
	mov(mv, &ts->eax, x86::mem(ts->ebx + 0x14, 4));
	game::__NLG_Notify(ts, mv);
	mov(&ts->edx, ts->ebx);
	mov(mv, &ts->ebx, x86::mem(ts->edx + 0x4, 4));
	mov(mv, &ts->edi, x86::mem(ts->edx + 0x8, 4));
	mov(mv, &ts->esi, x86::mem(ts->edx + 0xC, 4));
	mov(mv, &ts->eax, x86::mem(ts->esp + 0x8, 4));
	cmp(&ts->eflags, ts->eax, 0x1);
	adc(&ts->eax, 0x0);
	mov(mv, &ts->esp, x86::mem(ts->edx + 0x10, 4));
	add(&ts->esp, 0x4);
	jmp(x86::mem(ts->edx + 0x14, 4));
}

void nullsub_82(x86::thread_state* ts, x86::memory_view* mv) {
	retn(mv, &ts->esp);
}

void __setjmp3(x86::thread_state* ts, x86::memory_view* mv) {
	mov(mv, &ts->edx, x86::mem(ts->esp + 0x4, 4));
	mov(mv, x86::mem(ts->edx, 4), ts->ebp);
	mov(mv, x86::mem(ts->edx + 0x4, 4), ts->ebx);
	mov(mv, x86::mem(ts->edx + 0x8, 4), ts->edi);
	mov(mv, x86::mem(ts->edx + 0xC, 4), ts->esi);
	mov(mv, x86::mem(ts->edx + 0x10, 4), ts->esp);
	mov(mv, &ts->eax, x86::mem(ts->esp, 4));
	mov(mv, x86::mem(ts->edx + 0x14, 4), ts->eax);
	mov(mv, x86::mem(ts->edx + 0x20, 4), 0x56433230);
	mov(mv, x86::mem(ts->edx + 0x24, 4), 0x0);
	mov(mv, &ts->eax, x86::mem(0x0, 4));
	mov(mv, x86::mem(ts->edx + 0x18, 4), ts->eax);
	cmp(&ts->eflags, ts->eax, 0xFFFFFFFF);
	if (!ts->eflags.zero) {
        goto _s3_get_count;
    }
	mov(mv, x86::mem(ts->edx + 0x1C, 4), 0xFFFFFFFF);
	goto _s3_done;

_s3_get_count:
	mov(mv, &ts->ecx, x86::mem(ts->esp + 0x8, 4));
	or_(&ts->ecx, ts->ecx);
	if (ts->eflags.zero) {
        goto _s3_default_trylevel;
    }
	mov(mv, &ts->eax, x86::mem(ts->esp + 0xC, 4));
	mov(mv, x86::mem(ts->edx + 0x24, 4), ts->eax);
	dec(&ts->ecx);
	if (!ts->eflags.zero) {
        goto _s3_save_trylevel;
    }

_s3_default_trylevel:
	mov(mv, &ts->eax, x86::mem(ts->eax + 0xC, 4));
	mov(mv, x86::mem(ts->edx + 0x1C, 4), ts->eax);
	goto _s3_done;

_s3_save_trylevel:
	mov(mv, &ts->eax, x86::mem(ts->esp + 0x10, 4));
	mov(mv, x86::mem(ts->edx + 0x1C, 4), ts->eax);
	dec(&ts->ecx);
	if (ts->eflags.zero) {
        goto _s3_done;
    }
	push(mv, &ts->esp, ts->esi);
	push(mv, &ts->esp, ts->edi);
	lea(mv, &ts->esi, x86::mem(ts->esp + 0x1C, 4));
	lea(mv, &ts->edi, x86::mem(ts->edx + 0x28, 4));
	cmp(&ts->eflags, ts->ecx, 0x6);
	if (ts->eflags.carry || ts->eflags.zero) {
        goto _s3_save_data;
    }
	mov(&ts->ecx, 0x6);

_s3_save_data:
	movs(mv, x86::mem(ts->edi, 4), x86::mem(ts->esi, 4));
	pop(mv, &ts->esp, ts->edi);
	pop(mv, &ts->esp, ts->esi);

_s3_done:
	sub(&ts->eax, ts->eax);
	retn(mv, &ts->esp);
}

void __aullshr(x86::thread_state* ts, x86::memory_view* mv) {
	cmp(&ts->eflags, ts->cl, 0x40);
	if (!ts->eflags.carry) {
        goto RETZERO_0;
    }
	cmp(&ts->eflags, ts->cl, 0x20);
	if (!ts->eflags.carry) {
        goto MORE32_1;
    }
	shrd(&ts->eax, ts->edx, ts->cl);
	shr(&ts->edx, ts->cl);
	retn(mv, &ts->esp);

MORE32_1:
	mov(&ts->eax, ts->edx);
	xor_(&ts->edx, ts->edx);
	and_(&ts->cl, 0x1F);
	shr(&ts->eax, ts->cl);
	retn(mv, &ts->esp);

RETZERO_0:
	xor_(&ts->eax, ts->eax);
	xor_(&ts->edx, ts->edx);
	retn(mv, &ts->esp);
}

void _rt_probe_read4_x_(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0xC);
	push(mv, &ts->esp, 0x7DD648);
	game::__SEH_prolog(ts, mv);
	and_(mv, x86::mem(ts->ebp - 0x4, 4), 0x0);
	mov(mv, &ts->eax, x86::mem(ts->ebp + 0x8, 4));
	mov(mv, &ts->eax, x86::mem(ts->eax, 4));
	xor_(&ts->eax, ts->eax);
	inc(&ts->eax);
	mov(mv, x86::mem(ts->ebp - 0x1C, 4), ts->eax);
	goto loc_771235;

loc_77121C:
	mov(mv, &ts->eax, x86::mem(ts->ebp - 0x14, 4));
	mov(mv, &ts->eax, x86::mem(ts->eax, 4));
	mov(mv, &ts->eax, x86::mem(ts->eax, 4));
	xor_(&ts->ecx, ts->ecx);
	cmp(&ts->eflags, ts->eax, 0xC0000005);
	setz(ts->eflags, &ts->cl);
	mov(&ts->eax, ts->ecx);
	retn(mv, &ts->esp);

loc_771230:
	mov(mv, &ts->esp, x86::mem(ts->ebp - 0x18, 4));
	xor_(&ts->eax, ts->eax);

loc_771235:
	or_(mv, x86::mem(ts->ebp - 0x4, 4), 0xFFFFFFFF);
	game::__SEH_epilog(ts, mv);
	retn(mv, &ts->esp, 0x4);
}

void __rmtmp(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x10);
	push(mv, &ts->esp, 0x7DD658);
	game::__SEH_prolog(ts, mv);
	xor_(&ts->esi, ts->esi);
	mov(mv, x86::mem(ts->ebp - 0x1C, 4), ts->esi);
	push(mv, &ts->esp, 0x1);
	game::__lock(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	mov(mv, x86::mem(ts->ebp - 0x4, 4), ts->esi);

loc_77125D:
	mov(mv, x86::mem(ts->ebp - 0x20, 4), ts->esi);
	cmp(mv, &ts->eflags, ts->esi, x86::mem(0x8BB5E0, 4));
	if (ts->eflags.sign == ts->eflags.overflow) {
        goto loc_7712C8;
    }
	mov(mv, &ts->eax, x86::mem(0x8BA5C0, 4));
	mov(mv, &ts->eax, x86::mem(ts->eax + (ts->esi*4), 4));
	test(&ts->eflags, ts->eax, ts->eax);
	if (ts->eflags.zero) {
        goto loc_7712B1;
    }
	test(mv, &ts->eflags, x86::mem(ts->eax + 0xC, 1), 0x83);
	if (ts->eflags.zero) {
        goto loc_7712B1;
    }
	push(mv, &ts->esp, ts->eax);
	push(mv, &ts->esp, ts->esi);
	game::__lock_file2(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	pop(mv, &ts->esp, ts->ecx);
	mov(mv, x86::mem(ts->ebp - 0x4, 4), 0x1);
	mov(mv, &ts->eax, x86::mem(0x8BA5C0, 4));
	mov(mv, &ts->eax, x86::mem(ts->eax + (ts->esi*4), 4));
	test(mv, &ts->eflags, x86::mem(ts->eax + 0xC, 1), 0x83);
	if (ts->eflags.zero) {
        goto loc_7712A8;
    }
	cmp(mv, &ts->eflags, x86::mem(ts->eax + 0x1C, 4), 0x0);
	if (ts->eflags.zero) {
        goto loc_7712A8;
    }
	push(mv, &ts->esp, ts->eax);
	game::__fclose_lk(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	inc(mv, x86::mem(ts->ebp - 0x1C, 4));

loc_7712A8:
	and_(mv, x86::mem(ts->ebp - 0x4, 4), 0x0);
	game::__rmtmp(ts, mv);

loc_7712B1:
	inc(&ts->esi);
	goto loc_77125D;

loc_7712B4:
	mov(mv, &ts->esi, x86::mem(ts->ebp - 0x20, 4));

loc_7712B7:
	mov(mv, &ts->eax, x86::mem(0x8BA5C0, 4));
	push(mv, &ts->esp, x86::mem(ts->eax + (ts->esi*4), 4));
	push(mv, &ts->esp, ts->esi);
	game::__unlock_file2(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);

loc_7712C8:
	or_(mv, x86::mem(ts->ebp - 0x4, 4), 0xFFFFFFFF);
	game::__rmtmp(ts, mv);

loc_7712D1:
	mov(mv, &ts->eax, x86::mem(ts->ebp - 0x1C, 4));
	game::__SEH_epilog(ts, mv);
	retn(mv, &ts->esp);

loc_7712DA:
	push(mv, &ts->esp, 0x1);
	game::__unlock(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_776572(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x7980F0);
	mov(mv, &ts->eax, x86::mem(ts->ebp - 0x10, 4));
	push(mv, &ts->esp, ts->eax);
	game::sub_6D7120(ts, mv);
	add(&ts->esp, 0xC);
	retn(mv, &ts->esp);
}

void sub_77A620(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784250, 4));
	fdiv(mv, &ts->fp, x86::fp_index(0), x86::mem(0x783490, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x81E7FC, 4));
	retn(mv, &ts->esp);
}

void sub_77A640(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x5);
	push(mv, &ts->esp, 0x7E9BC8);
	mov(&ts->ecx, 0x81E378);
	game::sub_576770(ts, mv);
	retn(mv, &ts->esp);
}

void sub_77A660(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x2);
	push(mv, &ts->esp, 0x7E9BF0);
	mov(&ts->ecx, 0x81E7DC);
	game::sub_576770(ts, mv);
	retn(mv, &ts->esp);
}

void sub_77A680(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x2);
	push(mv, &ts->esp, 0x7E9C00);
	mov(&ts->ecx, 0x827A10);
	game::sub_576770(ts, mv);
	retn(mv, &ts->esp);
}

void sub_77A6A0(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x81E5B8);
	game::sub_414CF0(ts, mv);
	push(mv, &ts->esp, 0x781980);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77A6C0(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x81E388);
	game::sub_414CF0(ts, mv);
	push(mv, &ts->esp, 0x781990);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77A6E0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x781940);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77A6F0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x81CB84, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x81CB84, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x827A20, 4));
	retn(mv, &ts->esp);
}

void sub_77A710(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0xB);
	push(mv, &ts->esp, 0x7E9C10);
	mov(&ts->ecx, 0x81E380);
	game::sub_576770(ts, mv);
	retn(mv, &ts->esp);
}

void sub_77A730(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x2);
	push(mv, &ts->esp, 0x7E9C68);
	mov(&ts->ecx, 0x81E370);
	game::sub_576770(ts, mv);
	retn(mv, &ts->esp);
}

void sub_77A750(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0xA);
	push(mv, &ts->esp, 0x7E9C78);
	mov(&ts->ecx, 0x827A18);
	game::sub_576770(ts, mv);
	retn(mv, &ts->esp);
}

void sub_77A770(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x9);
	push(mv, &ts->esp, 0x7E9CC8);
	mov(&ts->ecx, 0x81E7F4);
	game::sub_576770(ts, mv);
	retn(mv, &ts->esp);
}

void sub_77A790(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x2);
	push(mv, &ts->esp, 0x7E9D24);
	mov(&ts->ecx, 0x81E800);
	game::sub_576770(ts, mv);
	retn(mv, &ts->esp);
}

void sub_77A7B0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x2);
	push(mv, &ts->esp, 0x7E9D34);
	mov(&ts->ecx, 0x81E7E4);
	game::sub_576770(ts, mv);
	retn(mv, &ts->esp);
}

void sub_77A7D0(x86::thread_state* ts, x86::memory_view* mv) {
	mov(mv, x86::mem(0x81E5AC, 4), 0x3DD67750);
	retn(mv, &ts->esp);
}

void sub_77A7E0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x4);
	push(mv, &ts->esp, 0x7E9F58);
	mov(&ts->ecx, 0x81E5B0);
	game::sub_576770(ts, mv);
	retn(mv, &ts->esp);
}

void sub_77A800(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x81E7EC);
	game::sub_598750(ts, mv);
	push(mv, &ts->esp, 0x781960);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77A820(x86::thread_state* ts, x86::memory_view* mv) {
	mov(mv, &ts->eax, x86::mem(0x783C30, 4));
	mov(mv, &ts->edx, x86::mem(0x783C28, 4));
	mov(&ts->ecx, ts->eax);
	mov(mv, x86::mem(0x7EA088, 4), ts->eax);
	mov(mv, x86::mem(0x7EA08C, 4), ts->ecx);
	mov(mv, &ts->ecx, x86::mem(0x783C2C, 4));
	mov(&ts->eax, ts->edx);
	mov(mv, x86::mem(0x7EA0C0, 4), ts->edx);
	mov(&ts->edx, ts->ecx);
	mov(mv, x86::mem(0x7EA0C4, 4), ts->eax);
	mov(mv, x86::mem(0x7EA0C8, 4), ts->ecx);
	mov(&ts->cl, 0x80);
	mov(&ts->al, 0x25);
	mov(mv, x86::mem(0x7EA0E8, 1), ts->al);
	mov(mv, x86::mem(0x7EA0E9, 1), ts->al);
	xor_(&ts->eax, ts->eax);
	mov(mv, x86::mem(0x7EA0EE, 1), ts->cl);
	mov(mv, x86::mem(0x7EA0EF, 1), ts->cl);
	mov(mv, x86::mem(0x7EA0F0, 1), ts->cl);
	mov(mv, x86::mem(0x7EA0F1, 1), ts->cl);
	mov(mv, x86::mem(0x7EA0F2, 1), ts->cl);
	mov(mv, x86::mem(0x7EA0F3, 1), ts->cl);
	mov(&ts->cl, 0x32);
	mov(mv, x86::mem(0x7EA090, 4), 0x0);
	mov(mv, x86::mem(0x7EA094, 4), 0x41200000);
	mov(mv, x86::mem(0x7EA098, 4), 0x40000000);
	mov(mv, x86::mem(0x7EA09C, 4), 0x0);
	mov(mv, x86::mem(0x7EA0A0, 4), 0x41200000);
	mov(mv, x86::mem(0x7EA0A4, 4), 0x40000000);
	mov(mv, x86::mem(0x7EA0A8, 4), 0x0);
	mov(mv, x86::mem(0x7EA0AC, 4), 0x0);
	mov(mv, x86::mem(0x7EA0B0, 4), 0x0);
	mov(mv, x86::mem(0x7EA0B4, 4), 0x0);
	mov(mv, x86::mem(0x7EA0B8, 4), 0x0);
	mov(mv, x86::mem(0x7EA0BC, 4), 0x0);
	mov(mv, x86::mem(0x7EA0CC, 4), ts->edx);
	mov(mv, x86::mem(0x7EA0D0, 4), 0x0);
	mov(mv, x86::mem(0x7EA0D4, 4), 0x0);
	mov(mv, x86::mem(0x7EA0D8, 4), 0x0);
	mov(mv, x86::mem(0x7EA0DC, 4), 0x0);
	mov(mv, x86::mem(0x7EA0E0, 4), 0x0);
	mov(mv, x86::mem(0x7EA0E4, 4), 0x0);
	mov(mv, x86::mem(0x7EA0EA, 1), ts->al);
	mov(mv, x86::mem(0x7EA0EB, 1), ts->al);
	mov(mv, x86::mem(0x7EA0EC, 1), ts->al);
	mov(mv, x86::mem(0x7EA0ED, 1), ts->al);
	mov(mv, x86::mem(0x7EA0F4, 1), ts->al);
	mov(mv, x86::mem(0x7EA0F5, 1), ts->cl);
	mov(mv, x86::mem(0x7EA0F6, 1), ts->al);
	mov(mv, x86::mem(0x7EA0F7, 1), ts->cl);
	mov(mv, x86::mem(0x7EA0F8, 1), ts->al);
	mov(mv, x86::mem(0x7EA0F9, 1), ts->al);
	mov(mv, x86::mem(0x7EA0FC, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77A980(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x781950);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77A990(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x81E810);
	game::sub_41AA60(ts, mv);
	push(mv, &ts->esp, 0x7819A0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77A9B0(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x81CBC0);
	game::sub_4130A0(ts, mv);
	push(mv, &ts->esp, 0x781970);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77A9D0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x785BC8, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x827CC4, 4));
	retn(mv, &ts->esp);
}

void sub_77A9E0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x785BC8, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784260, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x827CC0, 4));
	retn(mv, &ts->esp);
}

void sub_77AA00(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x785BD0, 8));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x827CB8, 8));
	retn(mv, &ts->esp);
}

void sub_77AA10(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x785BD0, 8));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7864E0, 8));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x827CB0, 8));
	retn(mv, &ts->esp);
}

void sub_77AA30(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784250, 4));
	fdiv(mv, &ts->fp, x86::fp_index(0), x86::mem(0x785BE4, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x827DA0, 4));
	retn(mv, &ts->esp);
}

void sub_77AA50(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x781A30);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77AA60(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x7864E8);
	game::sub_43DB50(ts, mv);
	add(&ts->esp, 0x4);
	mov(mv, x86::mem(0x827D34, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77AA80(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x7864FC);
	game::sub_43DB50(ts, mv);
	add(&ts->esp, 0x4);
	mov(mv, x86::mem(0x827C5C, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77AAA0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x786510);
	game::sub_43DB50(ts, mv);
	add(&ts->esp, 0x4);
	mov(mv, x86::mem(0x827C68, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77AAC0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x786520);
	game::sub_43DB50(ts, mv);
	add(&ts->esp, 0x4);
	mov(mv, x86::mem(0x827C98, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77AAE0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x786530);
	game::sub_43DB50(ts, mv);
	add(&ts->esp, 0x4);
	mov(mv, x86::mem(0x827DAC, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77AB00(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x786548);
	game::sub_43DB50(ts, mv);
	add(&ts->esp, 0x4);
	mov(mv, x86::mem(0x827C7C, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77AB20(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x786560);
	game::sub_43DB50(ts, mv);
	add(&ts->esp, 0x4);
	mov(mv, x86::mem(0x827F40, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77AB40(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x78657C);
	game::sub_43DB50(ts, mv);
	add(&ts->esp, 0x4);
	mov(mv, x86::mem(0x827C8C, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77AB60(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x786598);
	game::sub_43DB50(ts, mv);
	add(&ts->esp, 0x4);
	mov(mv, x86::mem(0x827DB0, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77AB80(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x827E88);
	game::sub_4301D0(ts, mv);
	push(mv, &ts->esp, 0x781A40);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77ABA0(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x827C3C);
	game::sub_57BCD0(ts, mv);
	push(mv, &ts->esp, 0x781B10);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77ABC0(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x827D98);
	game::sub_598750(ts, mv);
	push(mv, &ts->esp, 0x781B30);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77ABE0(x86::thread_state* ts, x86::memory_view* mv) {
	mov(mv, &ts->eax, x86::mem(0x7FAAA8, 4));
	test(&ts->eflags, ts->eax, ts->eax);
	setnz(ts->eflags, &ts->al);
	mov(mv, x86::mem(0x827C38, 1), ts->al);
	retn(mv, &ts->esp);
}

void sub_77ABF0(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x827B88);
	game::sub_435B80(ts, mv);
	push(mv, &ts->esp, 0x781B60);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77AC10(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x827C60);
	game::sub_598750(ts, mv);
	push(mv, &ts->esp, 0x781B20);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77AC30(x86::thread_state* ts, x86::memory_view* mv) {
	mov(mv, &ts->eax, x86::mem(0x785BF0, 4));
	mov(mv, &ts->edx, x86::mem(0x785BE8, 4));
	mov(&ts->ecx, ts->eax);
	mov(mv, x86::mem(0x7EA4F0, 4), ts->eax);
	mov(mv, x86::mem(0x7EA4F4, 4), ts->ecx);
	mov(mv, &ts->ecx, x86::mem(0x785BEC, 4));
	mov(&ts->eax, ts->edx);
	mov(mv, x86::mem(0x7EA528, 4), ts->edx);
	mov(&ts->edx, ts->ecx);
	mov(mv, x86::mem(0x7EA52C, 4), ts->eax);
	mov(mv, x86::mem(0x7EA530, 4), ts->ecx);
	mov(&ts->cl, 0x80);
	mov(&ts->al, 0x25);
	mov(mv, x86::mem(0x7EA550, 1), ts->al);
	mov(mv, x86::mem(0x7EA551, 1), ts->al);
	xor_(&ts->eax, ts->eax);
	mov(mv, x86::mem(0x7EA556, 1), ts->cl);
	mov(mv, x86::mem(0x7EA557, 1), ts->cl);
	mov(mv, x86::mem(0x7EA558, 1), ts->cl);
	mov(mv, x86::mem(0x7EA559, 1), ts->cl);
	mov(mv, x86::mem(0x7EA55A, 1), ts->cl);
	mov(mv, x86::mem(0x7EA55B, 1), ts->cl);
	mov(&ts->cl, 0x32);
	mov(mv, x86::mem(0x7EA4F8, 4), 0x0);
	mov(mv, x86::mem(0x7EA4FC, 4), 0x41200000);
	mov(mv, x86::mem(0x7EA500, 4), 0x40000000);
	mov(mv, x86::mem(0x7EA504, 4), 0x0);
	mov(mv, x86::mem(0x7EA508, 4), 0x41200000);
	mov(mv, x86::mem(0x7EA50C, 4), 0x40000000);
	mov(mv, x86::mem(0x7EA510, 4), 0x0);
	mov(mv, x86::mem(0x7EA514, 4), 0x0);
	mov(mv, x86::mem(0x7EA518, 4), 0x0);
	mov(mv, x86::mem(0x7EA51C, 4), 0x0);
	mov(mv, x86::mem(0x7EA520, 4), 0x0);
	mov(mv, x86::mem(0x7EA524, 4), 0x0);
	mov(mv, x86::mem(0x7EA534, 4), ts->edx);
	mov(mv, x86::mem(0x7EA538, 4), 0x0);
	mov(mv, x86::mem(0x7EA53C, 4), 0x0);
	mov(mv, x86::mem(0x7EA540, 4), 0x0);
	mov(mv, x86::mem(0x7EA544, 4), 0x0);
	mov(mv, x86::mem(0x7EA548, 4), 0x0);
	mov(mv, x86::mem(0x7EA54C, 4), 0x0);
	mov(mv, x86::mem(0x7EA552, 1), ts->al);
	mov(mv, x86::mem(0x7EA553, 1), ts->al);
	mov(mv, x86::mem(0x7EA554, 1), ts->al);
	mov(mv, x86::mem(0x7EA555, 1), ts->al);
	mov(mv, x86::mem(0x7EA55C, 1), ts->al);
	mov(mv, x86::mem(0x7EA55D, 1), ts->cl);
	mov(mv, x86::mem(0x7EA55E, 1), ts->al);
	mov(mv, x86::mem(0x7EA55F, 1), ts->cl);
	mov(mv, x86::mem(0x7EA560, 1), ts->al);
	mov(mv, x86::mem(0x7EA561, 1), ts->al);
	mov(mv, x86::mem(0x7EA564, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77AD90(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x786458);
	game::sub_43DB50(ts, mv);
	add(&ts->esp, 0x4);
	mov(mv, x86::mem(0x827F60, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77ADB0(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x827B80);
	game::sub_598750(ts, mv);
	push(mv, &ts->esp, 0x781AD0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77ADD0(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->eax, 0x827BA0);
	mov(&ts->edx, 0x8);
	xor_(&ts->ecx, ts->ecx);
	lea(mv, &ts->esp, x86::mem(ts->esp, 4));

loc_77ADE0:
	mov(mv, x86::mem(ts->eax - 0x8, 4), ts->ecx);
	mov(mv, x86::mem(ts->eax - 0x4, 4), ts->ecx);
	mov(mv, x86::mem(ts->eax, 4), ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x4, 4), ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x8, 4), 0xFFFFFFFF);
	add(&ts->eax, 0x14);
	dec(&ts->edx);
	if (!ts->eflags.zero) {
        goto loc_77ADE0;
    }
	retn(mv, &ts->esp);
}

void sub_77AE00(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x78660C);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x786600);
	mov(mv, x86::mem(0x827FA4, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7865F4);
	mov(mv, x86::mem(0x827FA8, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7865E8);
	mov(mv, x86::mem(0x827FAC, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7865DC);
	mov(mv, x86::mem(0x827FB0, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7865D0);
	mov(mv, x86::mem(0x827FB4, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7865C4);
	mov(mv, x86::mem(0x827FB8, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7865B8);
	mov(mv, x86::mem(0x827FBC, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	add(&ts->esp, 0x20);
	mov(mv, x86::mem(0x827FC0, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77AE80(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x78666C);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x786660);
	mov(mv, x86::mem(0x827F64, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x786654);
	mov(mv, x86::mem(0x827F68, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x786648);
	mov(mv, x86::mem(0x827F6C, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x78663C);
	mov(mv, x86::mem(0x827F70, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x786630);
	mov(mv, x86::mem(0x827F74, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x786624);
	mov(mv, x86::mem(0x827F78, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x786618);
	mov(mv, x86::mem(0x827F7C, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	add(&ts->esp, 0x20);
	mov(mv, x86::mem(0x827F80, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77AF00(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x7866CC);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7866C0);
	mov(mv, x86::mem(0x827FC4, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7866B4);
	mov(mv, x86::mem(0x827FC8, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7866A8);
	mov(mv, x86::mem(0x827FCC, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x78669C);
	mov(mv, x86::mem(0x827FD0, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x786690);
	mov(mv, x86::mem(0x827FD4, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x786684);
	mov(mv, x86::mem(0x827FD8, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x786678);
	mov(mv, x86::mem(0x827FDC, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	add(&ts->esp, 0x20);
	mov(mv, x86::mem(0x827FE0, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77AF80(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x78672C);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x786720);
	mov(mv, x86::mem(0x827F84, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x786714);
	mov(mv, x86::mem(0x827F88, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x786708);
	mov(mv, x86::mem(0x827F8C, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7866FC);
	mov(mv, x86::mem(0x827F90, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7866F0);
	mov(mv, x86::mem(0x827F94, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7866E4);
	mov(mv, x86::mem(0x827F98, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7866D8);
	mov(mv, x86::mem(0x827F9C, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	add(&ts->esp, 0x20);
	mov(mv, x86::mem(0x827FA0, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77B000(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x4022C0);
	push(mv, &ts->esp, 0x4FE910);
	push(mv, &ts->esp, 0x8);
	push(mv, &ts->esp, 0xC);
	push(mv, &ts->esp, 0x827D38);
	game::sub_75C461(ts, mv);
	push(mv, &ts->esp, 0x7819B0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77B030(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x4022C0);
	push(mv, &ts->esp, 0x4FE910);
	push(mv, &ts->esp, 0x8);
	push(mv, &ts->esp, 0xC);
	push(mv, &ts->esp, 0x827DB8);
	game::sub_75C461(ts, mv);
	push(mv, &ts->esp, 0x7819D0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77B060(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x4022C0);
	push(mv, &ts->esp, 0x4FE910);
	push(mv, &ts->esp, 0x8);
	push(mv, &ts->esp, 0xC);
	push(mv, &ts->esp, 0x827E28);
	game::sub_75C461(ts, mv);
	push(mv, &ts->esp, 0x7819F0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77B090(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x4022C0);
	push(mv, &ts->esp, 0x4FE910);
	push(mv, &ts->esp, 0x8);
	push(mv, &ts->esp, 0xC);
	push(mv, &ts->esp, 0x827CD0);
	game::sub_75C461(ts, mv);
	push(mv, &ts->esp, 0x781A10);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77B0C0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x781A50);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77B0D0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x781A70);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77B0E0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x781A90);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77B0F0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x781AB0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77B100(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x827C9C);
	game::sub_598750(ts, mv);
	push(mv, &ts->esp, 0x781AE0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77B120(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x827CA4);
	game::sub_57BCD0(ts, mv);
	push(mv, &ts->esp, 0x781B40);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77B140(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x785C3C);
	game::sub_43DB50(ts, mv);
	add(&ts->esp, 0x4);
	mov(mv, x86::mem(0x827C84, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77B160(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x786738);
	game::sub_43DB50(ts, mv);
	add(&ts->esp, 0x4);
	mov(mv, x86::mem(0x827F54, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77B180(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x786748);
	game::sub_43DB50(ts, mv);
	add(&ts->esp, 0x4);
	mov(mv, x86::mem(0x827C6C, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77B1A0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x786760);
	game::sub_43DB50(ts, mv);
	add(&ts->esp, 0x4);
	mov(mv, x86::mem(0x827F48, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77B1C0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x786774);
	game::sub_43DB50(ts, mv);
	add(&ts->esp, 0x4);
	mov(mv, x86::mem(0x827F4C, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77B1E0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x78678C);
	game::sub_43DB50(ts, mv);
	add(&ts->esp, 0x4);
	mov(mv, x86::mem(0x827CC8, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77B200(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x7867A0);
	game::sub_43DB50(ts, mv);
	add(&ts->esp, 0x4);
	mov(mv, x86::mem(0x827F44, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77B220(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x7867B4);
	game::sub_43DB50(ts, mv);
	add(&ts->esp, 0x4);
	mov(mv, x86::mem(0x827F5C, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77B240(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x7867CC);
	game::sub_43DB50(ts, mv);
	add(&ts->esp, 0x4);
	mov(mv, x86::mem(0x827F58, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77B260(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x7867E4);
	game::sub_43DB50(ts, mv);
	add(&ts->esp, 0x4);
	mov(mv, x86::mem(0x827F50, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77B280(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x7867F8);
	game::sub_43DB50(ts, mv);
	add(&ts->esp, 0x4);
	mov(mv, x86::mem(0x827C44, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77B2A0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x786810);
	game::sub_43DB50(ts, mv);
	add(&ts->esp, 0x4);
	mov(mv, x86::mem(0x827C58, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77B2C0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x786828);
	game::sub_43DB50(ts, mv);
	add(&ts->esp, 0x4);
	mov(mv, x86::mem(0x827C94, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77B2E0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x786838);
	game::sub_43DB50(ts, mv);
	add(&ts->esp, 0x4);
	mov(mv, x86::mem(0x827C90, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77B300(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x78684C);
	game::sub_43DB50(ts, mv);
	add(&ts->esp, 0x4);
	mov(mv, x86::mem(0x827C70, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77B320(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x786860);
	game::sub_43DB50(ts, mv);
	add(&ts->esp, 0x4);
	mov(mv, x86::mem(0x827C54, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77B340(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x786874);
	game::sub_43DB50(ts, mv);
	add(&ts->esp, 0x4);
	mov(mv, x86::mem(0x827C80, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77B360(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x786888);
	game::sub_43DB50(ts, mv);
	add(&ts->esp, 0x4);
	mov(mv, x86::mem(0x827DB4, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77B380(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x7868A0);
	game::sub_43DB50(ts, mv);
	add(&ts->esp, 0x4);
	mov(mv, x86::mem(0x827D30, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77B3A0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x7868B8);
	game::sub_43DB50(ts, mv);
	add(&ts->esp, 0x4);
	mov(mv, x86::mem(0x827C88, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77B3C0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x7868D0);
	game::sub_43DB50(ts, mv);
	add(&ts->esp, 0x4);
	mov(mv, x86::mem(0x827E18, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77B3E0(x86::thread_state* ts, x86::memory_view* mv) {
	mov(mv, &ts->eax, x86::mem(0x827C84, 4));
	mov(mv, &ts->ecx, x86::mem(0x827F54, 4));
	mov(mv, &ts->edx, x86::mem(0x827C6C, 4));
	mov(mv, x86::mem(0x7EA56C, 4), ts->eax);
	mov(mv, &ts->eax, x86::mem(0x827F48, 4));
	mov(mv, x86::mem(0x7EA574, 4), ts->ecx);
	mov(mv, &ts->ecx, x86::mem(0x827F4C, 4));
	mov(mv, x86::mem(0x7EA57C, 4), ts->edx);
	mov(mv, &ts->edx, x86::mem(0x827CC8, 4));
	mov(mv, x86::mem(0x7EA584, 4), ts->eax);
	mov(mv, &ts->eax, x86::mem(0x827F44, 4));
	mov(mv, x86::mem(0x7EA58C, 4), ts->ecx);
	mov(mv, &ts->ecx, x86::mem(0x827F5C, 4));
	mov(mv, x86::mem(0x7EA594, 4), ts->edx);
	mov(mv, &ts->edx, x86::mem(0x827F58, 4));
	mov(mv, x86::mem(0x7EA59C, 4), ts->eax);
	mov(mv, &ts->eax, x86::mem(0x827F50, 4));
	mov(mv, x86::mem(0x7EA5A4, 4), ts->ecx);
	mov(mv, &ts->ecx, x86::mem(0x827C44, 4));
	mov(mv, x86::mem(0x7EA5AC, 4), ts->edx);
	mov(mv, &ts->edx, x86::mem(0x827C58, 4));
	mov(mv, x86::mem(0x7EA5B4, 4), ts->eax);
	mov(mv, &ts->eax, x86::mem(0x827C94, 4));
	mov(mv, x86::mem(0x7EA5BC, 4), ts->ecx);
	mov(mv, &ts->ecx, x86::mem(0x827C90, 4));
	mov(mv, x86::mem(0x7EA5C4, 4), ts->edx);
	mov(mv, &ts->edx, x86::mem(0x827C70, 4));
	mov(mv, x86::mem(0x7EA5CC, 4), ts->eax);
	mov(mv, &ts->eax, x86::mem(0x827C54, 4));
	mov(mv, x86::mem(0x7EA5D4, 4), ts->ecx);
	mov(mv, &ts->ecx, x86::mem(0x827C80, 4));
	mov(mv, x86::mem(0x7EA5DC, 4), ts->edx);
	mov(mv, &ts->edx, x86::mem(0x827DB4, 4));
	mov(mv, x86::mem(0x7EA5E4, 4), ts->eax);
	mov(mv, &ts->eax, x86::mem(0x827D30, 4));
	mov(mv, x86::mem(0x7EA5EC, 4), ts->ecx);
	mov(mv, &ts->ecx, x86::mem(0x827C88, 4));
	mov(mv, x86::mem(0x7EA5F4, 4), ts->edx);
	mov(mv, &ts->edx, x86::mem(0x827E18, 4));
	mov(mv, x86::mem(0x7EA570, 4), 0x786738);
	mov(mv, x86::mem(0x7EA578, 4), 0x786748);
	mov(mv, x86::mem(0x7EA580, 4), 0x786760);
	mov(mv, x86::mem(0x7EA588, 4), 0x786774);
	mov(mv, x86::mem(0x7EA590, 4), 0x78678C);
	mov(mv, x86::mem(0x7EA598, 4), 0x7867A0);
	mov(mv, x86::mem(0x7EA5A0, 4), 0x7867B4);
	mov(mv, x86::mem(0x7EA5A8, 4), 0x7867CC);
	mov(mv, x86::mem(0x7EA5B0, 4), 0x7867E4);
	mov(mv, x86::mem(0x7EA5B8, 4), 0x7867F8);
	mov(mv, x86::mem(0x7EA5C0, 4), 0x786810);
	mov(mv, x86::mem(0x7EA5C8, 4), 0x786828);
	mov(mv, x86::mem(0x7EA5D0, 4), 0x786838);
	mov(mv, x86::mem(0x7EA5D8, 4), 0x78684C);
	mov(mv, x86::mem(0x7EA5E0, 4), 0x786860);
	mov(mv, x86::mem(0x7EA5E8, 4), 0x786874);
	mov(mv, x86::mem(0x7EA5F0, 4), 0x786888);
	mov(mv, x86::mem(0x7EA5F8, 4), 0x7868A0);
	mov(mv, x86::mem(0x7EA5FC, 4), ts->eax);
	mov(mv, x86::mem(0x7EA600, 4), 0x7868B8);
	mov(mv, x86::mem(0x7EA604, 4), ts->ecx);
	mov(mv, x86::mem(0x7EA608, 4), 0x7868D0);
	mov(mv, x86::mem(0x7EA60C, 4), ts->edx);
	retn(mv, &ts->esp);
}

void sub_77B5A0(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x827DA4);
	game::sub_598750(ts, mv);
	push(mv, &ts->esp, 0x781AF0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77B5C0(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x827C74);
	game::sub_598750(ts, mv);
	push(mv, &ts->esp, 0x781B00);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77B5E0(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x827EF0);
	game::sub_439EA0(ts, mv);
	push(mv, &ts->esp, 0x781B50);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77B600(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x828520);
	game::sub_57BCD0(ts, mv);
	push(mv, &ts->esp, 0x781B80);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77B620(x86::thread_state* ts, x86::memory_view* mv) {
	mov(mv, &ts->eax, x86::mem(0x828050, 4));
	mov(mv, x86::mem(0x7EB3F4, 4), ts->eax);
	mov(mv, &ts->al, x86::mem(0x827FE8, 1));
	inc(&ts->al);
	mov(mv, x86::mem(0x828050, 4), 0x7EB3F4);
	mov(mv, x86::mem(0x827FE8, 1), ts->al);
	retn(mv, &ts->esp);
}

void sub_77B650(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x828528);
	game::sub_43E820(ts, mv);
	push(mv, &ts->esp, 0x781B70);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77B670(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x828530);
	game::sub_4407B0(ts, mv);
	push(mv, &ts->esp, 0x781B90);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77B690(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784250, 4));
	fdiv(mv, &ts->fp, x86::fp_index(0), x86::mem(0x786F78, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x828734, 4));
	retn(mv, &ts->esp);
}

void sub_77B6B0(x86::thread_state* ts, x86::memory_view* mv) {
	mov(mv, &ts->eax, x86::mem(0x786F8C, 4));
	mov(mv, &ts->edx, x86::mem(0x786F84, 4));
	mov(&ts->ecx, ts->eax);
	mov(mv, x86::mem(0x7EC7C4, 4), ts->ecx);
	mov(mv, &ts->ecx, x86::mem(0x786F88, 4));
	mov(mv, x86::mem(0x7EC7C0, 4), ts->eax);
	mov(&ts->eax, ts->edx);
	mov(mv, x86::mem(0x7EC7F8, 4), ts->edx);
	mov(&ts->edx, ts->ecx);
	mov(mv, x86::mem(0x7EC7FC, 4), ts->eax);
	mov(mv, x86::mem(0x7EC800, 4), ts->ecx);
	mov(mv, x86::mem(0x7EC804, 4), ts->edx);
	retn(mv, &ts->esp);
}

void sub_77B6F0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x7881E4);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7881E0);
	mov(mv, x86::mem(0x7EC1F8, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7881D4);
	mov(mv, x86::mem(0x7EC1FC, 4), ts->eax);
	mov(mv, x86::mem(0x7EC214, 4), 0x7881CC);
	mov(mv, x86::mem(0x7EC218, 4), 0x441B40);
	mov(mv, x86::mem(0x7EC21C, 4), 0x404800);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7881CC);
	mov(mv, x86::mem(0x7EC20C, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7881BC);
	mov(mv, x86::mem(0x7EC210, 4), ts->eax);
	mov(mv, x86::mem(0x7EC228, 4), 0x7881B4);
	mov(mv, x86::mem(0x7EC22C, 4), 0x441BF0);
	mov(mv, x86::mem(0x7EC230, 4), 0x404800);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7881B4);
	mov(mv, x86::mem(0x7EC220, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7881A4);
	mov(mv, x86::mem(0x7EC224, 4), ts->eax);
	mov(mv, x86::mem(0x7EC23C, 4), 0x78819C);
	mov(mv, x86::mem(0x7EC240, 4), 0x441C80);
	mov(mv, x86::mem(0x7EC244, 4), 0x441D00);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x78819C);
	mov(mv, x86::mem(0x7EC234, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x78818C);
	mov(mv, x86::mem(0x7EC238, 4), ts->eax);
	mov(mv, x86::mem(0x7EC250, 4), 0x788184);
	mov(mv, x86::mem(0x7EC254, 4), 0x441D30);
	mov(mv, x86::mem(0x7EC258, 4), 0x404800);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x788184);
	mov(mv, x86::mem(0x7EC248, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x788174);
	mov(mv, x86::mem(0x7EC24C, 4), ts->eax);
	mov(mv, x86::mem(0x7EC264, 4), 0x788168);
	mov(mv, x86::mem(0x7EC268, 4), 0x441E90);
	mov(mv, x86::mem(0x7EC26C, 4), 0x441F40);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x788168);
	mov(mv, x86::mem(0x7EC25C, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	add(&ts->esp, 0x30);
	mov(mv, x86::mem(0x7EC260, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77B840(x86::thread_state* ts, x86::memory_view* mv) {
	mov(mv, &ts->eax, x86::mem(0x786FBC, 4));
	mov(mv, x86::mem(0x8286E0, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77B850(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x786FB4, 4));
	fsub(mv, &ts->fp, x86::fp_index(0), x86::mem(0x786FBC, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x82A458, 4));
	retn(mv, &ts->esp);
}

void sub_77B870(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x786FB8, 4));
	fsub(mv, &ts->fp, x86::fp_index(0), x86::mem(0x786FBC, 4));
	fsub(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7881F0, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x82871C, 4));
	retn(mv, &ts->esp);
}

void sub_77B890(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x786FB8, 4));
	fsub(mv, &ts->fp, x86::fp_index(0), x86::mem(0x786FBC, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x828730, 4));
	retn(mv, &ts->esp);
}

void sub_77B8B0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x786FB8, 4));
	fsub(mv, &ts->fp, x86::fp_index(0), x86::mem(0x786FBC, 4));
	fadd(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7881F4, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8286F4, 4));
	retn(mv, &ts->esp);
}

void sub_77B8D0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x786FB8, 4));
	fsub(mv, &ts->fp, x86::fp_index(0), x86::mem(0x786FBC, 4));
	fadd(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7881F8, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x828710, 4));
	retn(mv, &ts->esp);
}

void sub_77B8F0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x82A458, 4));
	fsub(mv, &ts->fp, x86::fp_index(0), x86::mem(0x786FF0, 4));
	fsub(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784560, 4));
	fsub(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7844C0, 4));
	fsub(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7844C0, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x82A4E8, 4));
	retn(mv, &ts->esp);
}

void sub_77B920(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x82871C, 4));
	fsub(mv, &ts->fp, x86::fp_index(0), x86::mem(0x786FC4, 4));
	fsub(mv, &ts->fp, x86::fp_index(0), x86::mem(0x786FF0, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x82874C, 4));
	retn(mv, &ts->esp);
}

void sub_77B940(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x786FF0, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x828750, 4));
	retn(mv, &ts->esp);
}

void sub_77B950(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x82A4E8, 4));
	fsub(mv, &ts->fp, x86::fp_index(0), x86::mem(0x786FF0, 4));
	fsub(mv, &ts->fp, x86::fp_index(0), x86::mem(0x786FF4, 4));
	fsub(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7844C0, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x82A468, 4));
	retn(mv, &ts->esp);
}

void sub_77B970(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x786FF4, 4));
	fadd(mv, &ts->fp, x86::fp_index(0), x86::mem(0x786FF0, 4));
	fadd(mv, &ts->fp, x86::fp_index(0), x86::mem(0x82A4E8, 4));
	fadd(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7844C0, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x82875C, 4));
	retn(mv, &ts->esp);
}

void sub_77B990(x86::thread_state* ts, x86::memory_view* mv) {
	mov(mv, &ts->eax, x86::mem(0x82874C, 4));
	mov(mv, x86::mem(0x828724, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77B9A0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x786FF0, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x82A464, 4));
	retn(mv, &ts->esp);
}

void sub_77B9B0(x86::thread_state* ts, x86::memory_view* mv) {
	mov(mv, &ts->eax, x86::mem(0x82A4E8, 4));
	mov(mv, x86::mem(0x82A4EC, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77B9C0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x82874C, 4));
	fsub(mv, &ts->fp, x86::fp_index(0), x86::mem(0x786FF0, 4));
	fsub(mv, &ts->fp, x86::fp_index(0), x86::mem(0x786FF8, 4));
	fsub(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7844C0, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x82876C, 4));
	retn(mv, &ts->esp);
}

void sub_77B9E0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x786FC4, 4));
	game::__ftol2(ts, mv);
	mov(mv, x86::mem(0x82A47C, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77BA00(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x82871C, 4));
	fsub(mv, &ts->fp, x86::fp_index(0), x86::mem(0x786FC4, 4));
	fsub(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7881F4, 4));
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x786FB8, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784260, 4));
	fsubp(&ts->fp, x86::fp_index(1), x86::fp_index(0));
	game::__ftol2(ts, mv);
	mov(mv, x86::mem(0x82873C, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77BA30(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8286E0, 4));
	fsub(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7844C0, 4));
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x786FB4, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784260, 4));
	fsubp(&ts->fp, x86::fp_index(1), x86::fp_index(0));
	game::__ftol2(ts, mv);
	mov(mv, x86::mem(0x828718, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77BA60(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x786FB4, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784260, 4));
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x786FC0, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7881FC, 4));
	fsubr(&ts->fp, x86::fp_index(0), x86::fp_index(1));
	fsub(&ts->fp, x86::fp_index(0), x86::fp_index(1));
	game::__ftol2(ts, mv);
	fstp(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	mov(mv, x86::mem(0x82A44C, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77BA90(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x786FB4, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784260, 4));
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x786FC0, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x787ADC, 4));
	fsubr(&ts->fp, x86::fp_index(0), x86::fp_index(1));
	fsub(&ts->fp, x86::fp_index(0), x86::fp_index(1));
	game::__ftol2(ts, mv);
	fstp(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	mov(mv, x86::mem(0x8286F0, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77BAC0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x786FC0, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7881FC, 4));
	fsubr(mv, &ts->fp, x86::fp_index(0), x86::mem(0x82A458, 4));
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x786FB4, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784260, 4));
	fsubp(&ts->fp, x86::fp_index(1), x86::fp_index(0));
	game::__ftol2(ts, mv);
	mov(mv, x86::mem(0x82A4D8, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77BAF0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x786FC0, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7881F8, 4));
	fsubr(mv, &ts->fp, x86::fp_index(0), x86::mem(0x82A458, 4));
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x786FB4, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784260, 4));
	fsubp(&ts->fp, x86::fp_index(1), x86::fp_index(0));
	game::__ftol2(ts, mv);
	mov(mv, x86::mem(0x82A474, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77BB20(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x786FC4, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x788200, 4));
	game::__ftol2(ts, mv);
	mov(mv, x86::mem(0x828738, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77BB40(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x786FC0, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x788204, 4));
	game::__ftol2(ts, mv);
	mov(mv, x86::mem(0x828728, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77BB60(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x786FC0, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7D7D3C, 4));
	game::__ftol2(ts, mv);
	mov(mv, x86::mem(0x828758, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77BB80(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x786FC0, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7881F8, 4));
	game::__ftol2(ts, mv);
	mov(mv, x86::mem(0x828748, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77BBA0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x786FC4, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x788208, 4));
	game::__ftol2(ts, mv);
	mov(mv, x86::mem(0x828754, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77BBC0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x786FC0, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x78820C, 4));
	game::__ftol2(ts, mv);
	mov(mv, x86::mem(0x82A470, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77BBE0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x786FC0, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7843E8, 4));
	game::__ftol2(ts, mv);
	mov(mv, x86::mem(0x82A460, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77BC00(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x786FC0, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x788210, 4));
	game::__ftol2(ts, mv);
	mov(mv, x86::mem(0x82872C, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77BC20(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x786FC0, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7881F8, 4));
	game::__ftol2(ts, mv);
	mov(mv, x86::mem(0x82A46C, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77BC40(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x786FC4, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x787ADC, 4));
	game::__ftol2(ts, mv);
	mov(mv, x86::mem(0x82A45C, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77BC60(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x786FC0, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7881F4, 4));
	game::__ftol2(ts, mv);
	mov(mv, x86::mem(0x8286F8, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77BC80(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x786FC4, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7D7D3C, 4));
	game::__ftol2(ts, mv);
	mov(mv, x86::mem(0x8286E4, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77BCA0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x786FC0, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x788214, 4));
	game::__ftol2(ts, mv);
	mov(mv, x86::mem(0x828740, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77BCC0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x786FC0, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x788218, 4));
	game::__ftol2(ts, mv);
	mov(mv, x86::mem(0x828714, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77BCE0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x786FC0, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x78821C, 4));
	game::__ftol2(ts, mv);
	mov(mv, x86::mem(0x828720, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77BD00(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x786FC0, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x788220, 4));
	game::__ftol2(ts, mv);
	mov(mv, x86::mem(0x82A4D4, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77BD20(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x786FC0, 4));
	game::__ftol2(ts, mv);
	mov(mv, x86::mem(0x8286EC, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77BD40(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x786FC4, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784D28, 4));
	game::__ftol2(ts, mv);
	mov(mv, x86::mem(0x82A478, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77BD60(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x786FC4, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784D28, 4));
	game::__ftol2(ts, mv);
	mov(mv, x86::mem(0x828744, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77BD80(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x828770);
	game::sub_447C40(ts, mv);
	push(mv, &ts->esp, 0x781BB0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77BDA0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x78706C, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x828768, 4));
	retn(mv, &ts->esp);
}

void sub_77BDB0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x78706C, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784260, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x82A448, 4));
	retn(mv, &ts->esp);
}

void sub_77BDD0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x787070, 8));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x82A450, 8));
	retn(mv, &ts->esp);
}

void sub_77BDE0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x787070, 8));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7864E0, 8));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x828760, 8));
	retn(mv, &ts->esp);
}

void sub_77BE00(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x2);
	push(mv, &ts->esp, 0x7EC420);
	mov(&ts->ecx, 0x82A4E0);
	game::sub_576770(ts, mv);
	retn(mv, &ts->esp);
}

void sub_77BE20(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x786F60, 4));
	push(mv, &ts->esp, 0x3DCCCCCD);
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x787B5C, 4));
	push(mv, &ts->esp, 0x3CF5C28F);
	push(mv, &ts->esp, 0x0);
	push(mv, &ts->esp, ts->ecx);
	mov(&ts->ecx, 0x8286FC);
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(ts->esp, 4));
	game::sub_446690(ts, mv);
	push(mv, &ts->esp, 0x781BA0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77BE60(x86::thread_state* ts, x86::memory_view* mv) {
	mov(mv, x86::mem(0x8286E8, 2), 0x38E);
	retn(mv, &ts->esp);
}

void sub_77BE70(x86::thread_state* ts, x86::memory_view* mv) {
	mov(mv, x86::mem(0x82A4D0, 2), 0xBBB);
	retn(mv, &ts->esp);
}

void sub_77BE80(x86::thread_state* ts, x86::memory_view* mv) {
	mov(mv, x86::mem(0x82A4DC, 2), 0x38E);
	retn(mv, &ts->esp);
}

void sub_77BE90(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x781C90);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77BEA0(x86::thread_state* ts, x86::memory_view* mv) {
	mov(mv, &ts->eax, x86::mem(0x7ED908, 4));
	mov(mv, &ts->ecx, x86::mem(0x7ED91C, 4));
	lea(mv, &ts->edx, x86::mem(ts->ecx + (ts->eax*2), 4));
	mov(mv, &ts->ecx, x86::mem(0x7ED918, 4));
	mov(mv, &ts->eax, x86::mem(0x7ED8F8, 4));
	add(&ts->edx, ts->ecx);
	mov(mv, &ts->ecx, x86::mem(0x7ED914, 4));
	add(&ts->edx, ts->eax);
	mov(mv, &ts->eax, x86::mem(0x7ED8FC, 4));
	add(&ts->edx, ts->ecx);
	mov(mv, &ts->ecx, x86::mem(0x7ED900, 4));
	add(&ts->edx, ts->eax);
	mov(mv, &ts->eax, x86::mem(0x7ED904, 4));
	add(&ts->edx, ts->ecx);
	mov(mv, &ts->ecx, x86::mem(0x7ED90C, 4));
	add(&ts->edx, ts->eax);
	mov(mv, &ts->eax, x86::mem(0x7ED910, 4));
	add(&ts->edx, ts->ecx);
	add(&ts->edx, ts->eax);
	mov(mv, x86::mem(0x82BF30, 4), ts->edx);
	retn(mv, &ts->esp);
}

void sub_77BF00(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784250, 4));
	fdiv(mv, &ts->fp, x86::fp_index(0), x86::mem(0x788480, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x82BF44, 4));
	retn(mv, &ts->esp);
}

void sub_77BF20(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x5);
	mov(&ts->ecx, 0x82C6E8);
	game::sub_579F20(ts, mv);
	push(mv, &ts->esp, 0x781BC0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77BF40(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x786E68, 8));
	fabs(&ts->fp, x86::fp_index(0));
	fcomp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x787594, 4));
	fnstsw(&ts->fp, ts->ax);
	test(&ts->eflags, ts->ah, 0x5);
	if (ts->eflags.parity) {
        goto loc_77BF5F;
    }
	mov(mv, x86::mem(0x7F0008, 4), 0x3F800008);

loc_77BF5F:
	push(mv, &ts->esp, 0x781CA0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77BF70(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x78C240, 8));
	fabs(&ts->fp, x86::fp_index(0));
	fcomp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x787594, 4));
	fnstsw(&ts->fp, ts->ax);
	test(&ts->eflags, ts->ah, 0x5);
	if (ts->eflags.parity) {
        goto loc_77BF8F;
    }
	mov(mv, x86::mem(0x7F0024, 4), 0x42C80000);

loc_77BF8F:
	push(mv, &ts->esp, 0x781CB0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77BFA0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x78848C, 4));
	mov(mv, &ts->eax, x86::mem(0x78848C, 4));
	fdiv(mv, &ts->fp, x86::fp_index(0), x86::mem(0x788490, 4));
	mov(mv, x86::mem(0x7F0038, 4), ts->eax);
	fst(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7F0034, 4));
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x78C248, 8));
	fabs(&ts->fp, x86::fp_index(0));
	fcomp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x787594, 4));
	fnstsw(&ts->fp, ts->ax);
	test(&ts->eflags, ts->ah, 0x5);
	if (ts->eflags.parity) {
        goto loc_77BFDB;
    }
	mov(mv, x86::mem(0x7F0040, 4), 0x42FE0000);

loc_77BFDB:
	push(mv, &ts->esp, 0x781CC0);
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7F0048, 4));
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77BFF0(x86::thread_state* ts, x86::memory_view* mv) {
	mov(mv, &ts->eax, x86::mem(0x788494, 4));
	mov(mv, &ts->edx, x86::mem(0x78849C, 4));
	mov(mv, &ts->ecx, x86::mem(0x788498, 4));
	mov(mv, x86::mem(0x82BCD0, 4), ts->eax);
	mov(mv, &ts->eax, x86::mem(0x7884A0, 4));
	mov(mv, x86::mem(0x82BCDC, 4), ts->eax);
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x82BCDC, 4));
	mov(mv, x86::mem(0x82BCD8, 4), ts->edx);
	fsub(mv, &ts->fp, x86::fp_index(0), x86::mem(0x82BCD8, 4));
	mov(mv, x86::mem(0x82BCD4, 4), ts->ecx);
	fabs(&ts->fp, x86::fp_index(0));
	fcomp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x787594, 4));
	fnstsw(&ts->fp, ts->ax);
	test(&ts->eflags, ts->ah, 0x5);
	if (ts->eflags.parity) {
        goto loc_77C049;
    }
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x82BCDC, 4));
	fadd(mv, &ts->fp, x86::fp_index(0), x86::mem(0x787594, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x82BCDC, 4));

loc_77C049:
	mov(mv, &ts->ecx, x86::mem(0x788494, 4));
	push(mv, &ts->esp, 0x781CD0);
	mov(mv, x86::mem(0x82BCE4, 4), ts->ecx);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77C070(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x781CE0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77C080(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x781CF0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77C090(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x781D00);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77C0A0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x781D10);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77C0B0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x781D20);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77C0C0(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x82C694);
	game::sub_468ED0(ts, mv);
	push(mv, &ts->esp, 0x781BD0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77C0E0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, ts->esi);
	push(mv, &ts->esp, ts->edi);
	mov(&ts->esi, 0x82BF48);
	mov(&ts->edi, 0xD);
	lea(mv, &ts->esp, x86::mem(ts->esp, 4));

loc_77C0F0:
	mov(&ts->ecx, ts->esi);
	game::sub_458F80(ts, mv);
	add(&ts->esi, 0x70);
	dec(&ts->edi);
	if (!ts->eflags.zero) {
        goto loc_77C0F0;
    }
	pop(mv, &ts->esp, ts->edi);
	pop(mv, &ts->esp, ts->esi);
	retn(mv, &ts->esp);
}

void sub_77C100(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x78C250);
	mov(&ts->ecx, 0x82C710);
	game::sub_60B780(ts, mv);
	push(mv, &ts->esp, 0x781BE0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77C120(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x78C25C);
	mov(&ts->ecx, 0x82BEA0);
	game::sub_60B780(ts, mv);
	push(mv, &ts->esp, 0x781BF0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void unknown_libname_94(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x82C570);
	goto loc_734DA0;

loc_734DA0:
	mov(&ts->eax, ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x4, 4), 0xFFFFFFFD);
	retn(mv, &ts->esp);
}

void unknown_libname_95(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x82C578);
	goto loc_734DA0;

loc_734DA0:
	mov(&ts->eax, ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x4, 4), 0xFFFFFFFD);
	retn(mv, &ts->esp);
}

void unknown_libname_96(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x82C528);
	goto loc_734DA0;

loc_734DA0:
	mov(&ts->eax, ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x4, 4), 0xFFFFFFFD);
	retn(mv, &ts->esp);
}

void unknown_libname_97(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x82C518);
	goto loc_734DA0;

loc_734DA0:
	mov(&ts->eax, ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x4, 4), 0xFFFFFFFD);
	retn(mv, &ts->esp);
}

void unknown_libname_98(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x82C6AC);
	goto loc_734DA0;

loc_734DA0:
	mov(&ts->eax, ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x4, 4), 0xFFFFFFFD);
	retn(mv, &ts->esp);
}

void unknown_libname_99(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x82C560);
	goto loc_734DA0;

loc_734DA0:
	mov(&ts->eax, ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x4, 4), 0xFFFFFFFD);
	retn(mv, &ts->esp);
}

void unknown_libname_100(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x82C588);
	goto loc_734DA0;

loc_734DA0:
	mov(&ts->eax, ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x4, 4), 0xFFFFFFFD);
	retn(mv, &ts->esp);
}

void unknown_libname_101(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x82C650);
	goto loc_734DA0;

loc_734DA0:
	mov(&ts->eax, ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x4, 4), 0xFFFFFFFD);
	retn(mv, &ts->esp);
}

void unknown_libname_102(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x82C5B8);
	goto loc_734DA0;

loc_734DA0:
	mov(&ts->eax, ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x4, 4), 0xFFFFFFFD);
	retn(mv, &ts->esp);
}

void unknown_libname_103(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x82C658);
	goto loc_734DA0;

loc_734DA0:
	mov(&ts->eax, ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x4, 4), 0xFFFFFFFD);
	retn(mv, &ts->esp);
}

void unknown_libname_104(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x82C604);
	goto loc_734DA0;

loc_734DA0:
	mov(&ts->eax, ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x4, 4), 0xFFFFFFFD);
	retn(mv, &ts->esp);
}

void unknown_libname_105(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x82C580);
	goto loc_734DA0;

loc_734DA0:
	mov(&ts->eax, ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x4, 4), 0xFFFFFFFD);
	retn(mv, &ts->esp);
}

void unknown_libname_106(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x82C5C0);
	goto loc_734DA0;

loc_734DA0:
	mov(&ts->eax, ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x4, 4), 0xFFFFFFFD);
	retn(mv, &ts->esp);
}

void unknown_libname_107(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x82C640);
	goto loc_734DA0;

loc_734DA0:
	mov(&ts->eax, ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x4, 4), 0xFFFFFFFD);
	retn(mv, &ts->esp);
}

void sub_77C220(x86::thread_state* ts, x86::memory_view* mv) {
	mov(mv, &ts->eax, x86::mem(0x78859C, 4));
	mov(mv, &ts->edx, x86::mem(0x788594, 4));
	mov(&ts->ecx, ts->eax);
	mov(mv, x86::mem(0x7F38A8, 4), ts->eax);
	mov(mv, x86::mem(0x7F38AC, 4), ts->ecx);
	mov(mv, &ts->ecx, x86::mem(0x788598, 4));
	mov(&ts->eax, ts->edx);
	mov(mv, x86::mem(0x7F38E0, 4), ts->edx);
	mov(&ts->edx, ts->ecx);
	mov(mv, x86::mem(0x7F38E4, 4), ts->eax);
	mov(mv, x86::mem(0x7F38E8, 4), ts->ecx);
	mov(&ts->cl, 0x80);
	mov(&ts->al, 0x25);
	mov(mv, x86::mem(0x7F3908, 1), ts->al);
	mov(mv, x86::mem(0x7F3909, 1), ts->al);
	xor_(&ts->eax, ts->eax);
	mov(mv, x86::mem(0x7F390E, 1), ts->cl);
	mov(mv, x86::mem(0x7F390F, 1), ts->cl);
	mov(mv, x86::mem(0x7F3910, 1), ts->cl);
	mov(mv, x86::mem(0x7F3911, 1), ts->cl);
	mov(mv, x86::mem(0x7F3912, 1), ts->cl);
	mov(mv, x86::mem(0x7F3913, 1), ts->cl);
	mov(&ts->cl, 0x32);
	mov(mv, x86::mem(0x7F38B0, 4), 0x0);
	mov(mv, x86::mem(0x7F38B4, 4), 0x41200000);
	mov(mv, x86::mem(0x7F38B8, 4), 0x40000000);
	mov(mv, x86::mem(0x7F38BC, 4), 0x0);
	mov(mv, x86::mem(0x7F38C0, 4), 0x41200000);
	mov(mv, x86::mem(0x7F38C4, 4), 0x40000000);
	mov(mv, x86::mem(0x7F38C8, 4), 0x0);
	mov(mv, x86::mem(0x7F38CC, 4), 0x0);
	mov(mv, x86::mem(0x7F38D0, 4), 0x0);
	mov(mv, x86::mem(0x7F38D4, 4), 0x0);
	mov(mv, x86::mem(0x7F38D8, 4), 0x0);
	mov(mv, x86::mem(0x7F38DC, 4), 0x0);
	mov(mv, x86::mem(0x7F38EC, 4), ts->edx);
	mov(mv, x86::mem(0x7F38F0, 4), 0x0);
	mov(mv, x86::mem(0x7F38F4, 4), 0x0);
	mov(mv, x86::mem(0x7F38F8, 4), 0x0);
	mov(mv, x86::mem(0x7F38FC, 4), 0x0);
	mov(mv, x86::mem(0x7F3900, 4), 0x0);
	mov(mv, x86::mem(0x7F3904, 4), 0x0);
	mov(mv, x86::mem(0x7F390A, 1), ts->al);
	mov(mv, x86::mem(0x7F390B, 1), ts->al);
	mov(mv, x86::mem(0x7F390C, 1), ts->al);
	mov(mv, x86::mem(0x7F390D, 1), ts->al);
	mov(mv, x86::mem(0x7F3914, 1), ts->al);
	mov(mv, x86::mem(0x7F3915, 1), ts->cl);
	mov(mv, x86::mem(0x7F3916, 1), ts->al);
	mov(mv, x86::mem(0x7F3917, 1), ts->cl);
	mov(mv, x86::mem(0x7F3918, 1), ts->al);
	mov(mv, x86::mem(0x7F3919, 1), ts->al);
	mov(mv, x86::mem(0x7F391C, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77C380(x86::thread_state* ts, x86::memory_view* mv) {
	mov(mv, &ts->eax, x86::mem(0x788604, 4));
	mov(mv, x86::mem(0x7F005C, 4), ts->eax);
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7F005C, 4));
	fsub(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784250, 4));
	fabs(&ts->fp, x86::fp_index(0));
	fcomp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x787594, 4));
	fnstsw(&ts->fp, ts->ax);
	test(&ts->eflags, ts->ah, 0x5);
	if (ts->eflags.parity) {
        goto loc_77C3B7;
    }
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7F005C, 4));
	fadd(mv, &ts->fp, x86::fp_index(0), x86::mem(0x787594, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7F005C, 4));

loc_77C3B7:
	push(mv, &ts->esp, 0x781C00);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77C3D0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x78C268, 8));
	fabs(&ts->fp, x86::fp_index(0));
	fcomp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x787594, 4));
	fnstsw(&ts->fp, ts->ax);
	test(&ts->eflags, ts->ah, 0x5);
	if (ts->eflags.parity) {
        goto loc_77C3EF;
    }
	mov(mv, x86::mem(0x7F0968, 4), 0x45DAC000);

loc_77C3EF:
	push(mv, &ts->esp, 0x781C10);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77C400(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x78C270, 8));
	fabs(&ts->fp, x86::fp_index(0));
	fcomp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x787594, 4));
	fnstsw(&ts->fp, ts->ax);
	test(&ts->eflags, ts->ah, 0x5);
	if (ts->eflags.parity) {
        goto loc_77C41F;
    }
	mov(mv, x86::mem(0x7F0984, 4), 0x42700000);

loc_77C41F:
	push(mv, &ts->esp, 0x781C20);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77C430(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x78C270, 8));
	fabs(&ts->fp, x86::fp_index(0));
	fcomp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x787594, 4));
	fnstsw(&ts->fp, ts->ax);
	test(&ts->eflags, ts->ah, 0x5);
	if (ts->eflags.parity) {
        goto loc_77C44F;
    }
	mov(mv, x86::mem(0x7F09A0, 4), 0x42700000);

loc_77C44F:
	push(mv, &ts->esp, 0x781C30);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77C460(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x5);
	push(mv, &ts->esp, 0x7F09B0);
	mov(&ts->ecx, 0x82C69C);
	game::sub_576770(ts, mv);
	retn(mv, &ts->esp);
}

void sub_77C480(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x78C278, 8));
	mov(mv, &ts->eax, x86::mem(0x788818, 4));
	mov(mv, &ts->ecx, x86::mem(0x78881C, 4));
	fabs(&ts->fp, x86::fp_index(0));
	fcomp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x787594, 4));
	mov(mv, x86::mem(0x7F09D8, 4), ts->eax);
	mov(mv, x86::mem(0x7F09DC, 4), ts->ecx);
	fnstsw(&ts->fp, ts->ax);
	test(&ts->eflags, ts->ah, 0x5);
	if (ts->eflags.parity) {
        goto loc_77C4B5;
    }
	mov(mv, x86::mem(0x7F09E4, 4), 0x42C80000);

loc_77C4B5:
	mov(mv, &ts->edx, x86::mem(0x788818, 4));
	push(mv, &ts->esp, 0x781C40);
	mov(mv, x86::mem(0x7F09EC, 4), ts->edx);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77C4D0(x86::thread_state* ts, x86::memory_view* mv) {
	mov(mv, &ts->eax, x86::mem(0x78885C, 4));
	mov(mv, x86::mem(0x7F0A00, 4), ts->eax);
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7F0A00, 4));
	fabs(&ts->fp, x86::fp_index(0));
	fcomp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x787594, 4));
	fnstsw(&ts->fp, ts->ax);
	test(&ts->eflags, ts->ah, 0x5);
	if (ts->eflags.parity) {
        goto loc_77C501;
    }
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7F0A00, 4));
	fadd(mv, &ts->fp, x86::fp_index(0), x86::mem(0x787594, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7F0A00, 4));

loc_77C501:
	push(mv, &ts->esp, 0x781C50);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77C510(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x78C298);
	push(mv, &ts->esp, 0x7F0A1C);
	game::sub_43DBD0(ts, mv);
	push(mv, &ts->esp, 0x78C28C);
	push(mv, &ts->esp, 0x7F0A68);
	mov(mv, x86::mem(0x7F0A5C, 4), 0x42280000);
	mov(mv, x86::mem(0x7F0A60, 4), 0x20);
	mov(mv, x86::mem(0x7F0A64, 4), 0x41B80000);
	game::sub_43DBD0(ts, mv);
	push(mv, &ts->esp, 0x78C280);
	push(mv, &ts->esp, 0x7F0AB4);
	mov(mv, x86::mem(0x7F0AA8, 4), 0x42280000);
	mov(mv, x86::mem(0x7F0AAC, 4), 0x20);
	mov(mv, x86::mem(0x7F0AB0, 4), 0x41B80000);
	game::sub_43DBD0(ts, mv);
	push(mv, &ts->esp, 0x78C280);
	push(mv, &ts->esp, 0x7F0B00);
	mov(mv, x86::mem(0x7F0AF4, 4), 0x42280000);
	mov(mv, x86::mem(0x7F0AF8, 4), 0x20);
	mov(mv, x86::mem(0x7F0AFC, 4), 0x41B80000);
	game::sub_43DBD0(ts, mv);
	add(&ts->esp, 0x20);
	retn(mv, &ts->esp);
}

void sub_77C5B0(x86::thread_state* ts, x86::memory_view* mv) {
	mov(mv, &ts->ecx, x86::mem(0x788864, 4));
	mov(mv, &ts->eax, x86::mem(0x788868, 4));
	mov(mv, x86::mem(0x7F0B4C, 4), ts->ecx);
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7F0B4C, 4));
	mov(mv, x86::mem(0x7F0B48, 4), ts->eax);
	fsub(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7F0B48, 4));
	fabs(&ts->fp, x86::fp_index(0));
	fcomp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x787594, 4));
	fnstsw(&ts->fp, ts->ax);
	test(&ts->eflags, ts->ah, 0x5);
	if (ts->eflags.parity) {
        goto loc_77C5F3;
    }
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7F0B4C, 4));
	fadd(mv, &ts->fp, x86::fp_index(0), x86::mem(0x787594, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7F0B4C, 4));

loc_77C5F3:
	push(mv, &ts->esp, 0x781C60);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77C600(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x78C2A8, 8));
	fabs(&ts->fp, x86::fp_index(0));
	fcomp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x787594, 4));
	fnstsw(&ts->fp, ts->ax);
	test(&ts->eflags, ts->ah, 0x5);
	if (ts->eflags.parity) {
        goto loc_77C61F;
    }
	mov(mv, x86::mem(0x7F0B68, 4), 0x3F800008);

loc_77C61F:
	push(mv, &ts->esp, 0x781C70);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77C630(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x78C2B0);
	mov(&ts->ecx, 0x82C5E8);
	game::sub_60B780(ts, mv);
	push(mv, &ts->esp, 0x781C80);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77C650(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x82C6A4);
	game::sub_57BCD0(ts, mv);
	push(mv, &ts->esp, 0x781D40);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77C670(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x82BEBC);
	game::sub_57BCD0(ts, mv);
	push(mv, &ts->esp, 0x781D30);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77C690(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x82BEC4);
	game::sub_57BCD0(ts, mv);
	push(mv, &ts->esp, 0x781D50);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void unknown_libname_108(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x82C540);
	goto loc_734DA0;

loc_734DA0:
	mov(&ts->eax, ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x4, 4), 0xFFFFFFFD);
	retn(mv, &ts->esp);
}

void unknown_libname_109(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x82C6B4);
	goto loc_734DA0;

loc_734DA0:
	mov(&ts->eax, ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x4, 4), 0xFFFFFFFD);
	retn(mv, &ts->esp);
}

void unknown_libname_110(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x82C510);
	goto loc_734DA0;

loc_734DA0:
	mov(&ts->eax, ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x4, 4), 0xFFFFFFFD);
	retn(mv, &ts->esp);
}

void unknown_libname_111(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x82C548);
	goto loc_734DA0;

loc_734DA0:
	mov(&ts->eax, ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x4, 4), 0xFFFFFFFD);
	retn(mv, &ts->esp);
}

void unknown_libname_112(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x82C530);
	goto loc_734DA0;

loc_734DA0:
	mov(&ts->eax, ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x4, 4), 0xFFFFFFFD);
	retn(mv, &ts->esp);
}

void unknown_libname_113(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x82C4F8);
	goto loc_734DA0;

loc_734DA0:
	mov(&ts->eax, ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x4, 4), 0xFFFFFFFD);
	retn(mv, &ts->esp);
}

void unknown_libname_114(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x82C668);
	goto loc_734DA0;

loc_734DA0:
	mov(&ts->eax, ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x4, 4), 0xFFFFFFFD);
	retn(mv, &ts->esp);
}

void unknown_libname_115(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x82C5A8);
	goto loc_734DA0;

loc_734DA0:
	mov(&ts->eax, ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x4, 4), 0xFFFFFFFD);
	retn(mv, &ts->esp);
}

void unknown_libname_116(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x82C660);
	goto loc_734DA0;

loc_734DA0:
	mov(&ts->eax, ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x4, 4), 0xFFFFFFFD);
	retn(mv, &ts->esp);
}

void unknown_libname_117(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x82C590);
	goto loc_734DA0;

loc_734DA0:
	mov(&ts->eax, ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x4, 4), 0xFFFFFFFD);
	retn(mv, &ts->esp);
}

void unknown_libname_118(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x82C520);
	goto loc_734DA0;

loc_734DA0:
	mov(&ts->eax, ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x4, 4), 0xFFFFFFFD);
	retn(mv, &ts->esp);
}

void unknown_libname_119(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x82C6BC);
	goto loc_734DA0;

loc_734DA0:
	mov(&ts->eax, ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x4, 4), 0xFFFFFFFD);
	retn(mv, &ts->esp);
}

void unknown_libname_120(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x82C5B0);
	goto loc_734DA0;

loc_734DA0:
	mov(&ts->eax, ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x4, 4), 0xFFFFFFFD);
	retn(mv, &ts->esp);
}

void unknown_libname_121(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x82C5A0);
	goto loc_734DA0;

loc_734DA0:
	mov(&ts->eax, ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x4, 4), 0xFFFFFFFD);
	retn(mv, &ts->esp);
}

void unknown_libname_122(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x82C5C8);
	goto loc_734DA0;

loc_734DA0:
	mov(&ts->eax, ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x4, 4), 0xFFFFFFFD);
	retn(mv, &ts->esp);
}

void unknown_libname_123(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x82C500);
	goto loc_734DA0;

loc_734DA0:
	mov(&ts->eax, ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x4, 4), 0xFFFFFFFD);
	retn(mv, &ts->esp);
}

void unknown_libname_124(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x82C558);
	goto loc_734DA0;

loc_734DA0:
	mov(&ts->eax, ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x4, 4), 0xFFFFFFFD);
	retn(mv, &ts->esp);
}

void unknown_libname_125(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x82C550);
	goto loc_734DA0;

loc_734DA0:
	mov(&ts->eax, ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x4, 4), 0xFFFFFFFD);
	retn(mv, &ts->esp);
}

void unknown_libname_126(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x82C508);
	goto loc_734DA0;

loc_734DA0:
	mov(&ts->eax, ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x4, 4), 0xFFFFFFFD);
	retn(mv, &ts->esp);
}

void unknown_libname_127(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x82C72C);
	goto loc_734DA0;

loc_734DA0:
	mov(&ts->eax, ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x4, 4), 0xFFFFFFFD);
	retn(mv, &ts->esp);
}

void unknown_libname_128(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x82C5D8);
	goto loc_734DA0;

loc_734DA0:
	mov(&ts->eax, ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x4, 4), 0xFFFFFFFD);
	retn(mv, &ts->esp);
}

void unknown_libname_129(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x82C5E0);
	goto loc_734DA0;

loc_734DA0:
	mov(&ts->eax, ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x4, 4), 0xFFFFFFFD);
	retn(mv, &ts->esp);
}

void unknown_libname_130(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x82C5D0);
	goto loc_734DA0;

loc_734DA0:
	mov(&ts->eax, ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x4, 4), 0xFFFFFFFD);
	retn(mv, &ts->esp);
}

void unknown_libname_131(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x82C6E0);
	goto loc_734DA0;

loc_734DA0:
	mov(&ts->eax, ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x4, 4), 0xFFFFFFFD);
	retn(mv, &ts->esp);
}

void unknown_libname_132(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x82C598);
	goto loc_734DA0;

loc_734DA0:
	mov(&ts->eax, ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x4, 4), 0xFFFFFFFD);
	retn(mv, &ts->esp);
}

void unknown_libname_133(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x82C538);
	goto loc_734DA0;

loc_734DA0:
	mov(&ts->eax, ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x4, 4), 0xFFFFFFFD);
	retn(mv, &ts->esp);
}

void unknown_libname_134(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x82C680);
	goto loc_734DA0;

loc_734DA0:
	mov(&ts->eax, ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x4, 4), 0xFFFFFFFD);
	retn(mv, &ts->esp);
}

void unknown_libname_135(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x82C568);
	goto loc_734DA0;

loc_734DA0:
	mov(&ts->eax, ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x4, 4), 0xFFFFFFFD);
	retn(mv, &ts->esp);
}

void unknown_libname_136(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x82C648);
	goto loc_734DA0;

loc_734DA0:
	mov(&ts->eax, ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x4, 4), 0xFFFFFFFD);
	retn(mv, &ts->esp);
}

void sub_77C880(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784250, 4));
	fdiv(mv, &ts->fp, x86::fp_index(0), x86::mem(0x78D764, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x830D10, 4));
	retn(mv, &ts->esp);
}

void sub_77C8A0(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x830D08);
	game::sub_598750(ts, mv);
	push(mv, &ts->esp, 0x781DA0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77C8C0(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x835860);
	game::sub_494650(ts, mv);
	push(mv, &ts->esp, 0x781E80);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77C8E0(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8357E0);
	game::sub_494650(ts, mv);
	push(mv, &ts->esp, 0x781E20);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77C900(x86::thread_state* ts, x86::memory_view* mv) {
	mov(mv, &ts->eax, x86::mem(0x78D778, 4));
	mov(mv, &ts->edx, x86::mem(0x78D770, 4));
	mov(&ts->ecx, ts->eax);
	mov(mv, x86::mem(0x7F4240, 4), ts->eax);
	mov(mv, x86::mem(0x7F4244, 4), ts->ecx);
	mov(mv, &ts->ecx, x86::mem(0x78D774, 4));
	mov(&ts->eax, ts->edx);
	mov(mv, x86::mem(0x7F4278, 4), ts->edx);
	mov(&ts->edx, ts->ecx);
	mov(mv, x86::mem(0x7F427C, 4), ts->eax);
	mov(mv, x86::mem(0x7F4280, 4), ts->ecx);
	mov(&ts->cl, 0x80);
	mov(&ts->al, 0x25);
	mov(mv, x86::mem(0x7F42A0, 1), ts->al);
	mov(mv, x86::mem(0x7F42A1, 1), ts->al);
	xor_(&ts->eax, ts->eax);
	mov(mv, x86::mem(0x7F42A6, 1), ts->cl);
	mov(mv, x86::mem(0x7F42A7, 1), ts->cl);
	mov(mv, x86::mem(0x7F42A8, 1), ts->cl);
	mov(mv, x86::mem(0x7F42A9, 1), ts->cl);
	mov(mv, x86::mem(0x7F42AA, 1), ts->cl);
	mov(mv, x86::mem(0x7F42AB, 1), ts->cl);
	mov(&ts->cl, 0x32);
	mov(mv, x86::mem(0x7F4248, 4), 0x0);
	mov(mv, x86::mem(0x7F424C, 4), 0x41200000);
	mov(mv, x86::mem(0x7F4250, 4), 0x40000000);
	mov(mv, x86::mem(0x7F4254, 4), 0x0);
	mov(mv, x86::mem(0x7F4258, 4), 0x41200000);
	mov(mv, x86::mem(0x7F425C, 4), 0x40000000);
	mov(mv, x86::mem(0x7F4260, 4), 0x0);
	mov(mv, x86::mem(0x7F4264, 4), 0x0);
	mov(mv, x86::mem(0x7F4268, 4), 0x0);
	mov(mv, x86::mem(0x7F426C, 4), 0x0);
	mov(mv, x86::mem(0x7F4270, 4), 0x0);
	mov(mv, x86::mem(0x7F4274, 4), 0x0);
	mov(mv, x86::mem(0x7F4284, 4), ts->edx);
	mov(mv, x86::mem(0x7F4288, 4), 0x0);
	mov(mv, x86::mem(0x7F428C, 4), 0x0);
	mov(mv, x86::mem(0x7F4290, 4), 0x0);
	mov(mv, x86::mem(0x7F4294, 4), 0x0);
	mov(mv, x86::mem(0x7F4298, 4), 0x0);
	mov(mv, x86::mem(0x7F429C, 4), 0x0);
	mov(mv, x86::mem(0x7F42A2, 1), ts->al);
	mov(mv, x86::mem(0x7F42A3, 1), ts->al);
	mov(mv, x86::mem(0x7F42A4, 1), ts->al);
	mov(mv, x86::mem(0x7F42A5, 1), ts->al);
	mov(mv, x86::mem(0x7F42AC, 1), ts->al);
	mov(mv, x86::mem(0x7F42AD, 1), ts->cl);
	mov(mv, x86::mem(0x7F42AE, 1), ts->al);
	mov(mv, x86::mem(0x7F42AF, 1), ts->cl);
	mov(mv, x86::mem(0x7F42B0, 1), ts->al);
	mov(mv, x86::mem(0x7F42B1, 1), ts->al);
	mov(mv, x86::mem(0x7F42B4, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77CA60(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x82DBC0);
	game::sub_598750(ts, mv);
	push(mv, &ts->esp, 0x781E30);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77CA80(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x832DA4);
	game::sub_598750(ts, mv);
	push(mv, &ts->esp, 0x781E40);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77CAA0(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x830D1C);
	game::sub_598750(ts, mv);
	push(mv, &ts->esp, 0x781EB0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77CAC0(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x835858);
	game::sub_598750(ts, mv);
	push(mv, &ts->esp, 0x781EC0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77CAE0(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x835794);
	game::sub_598750(ts, mv);
	push(mv, &ts->esp, 0x781ED0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77CB00(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x4940E0);
	push(mv, &ts->esp, 0x494060);
	push(mv, &ts->esp, 0x80134000);
	mov(&ts->ecx, 0x835840);
	game::sub_43C0B0(ts, mv);
	retn(mv, &ts->esp);
}

void sub_77CB20(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x494210);
	push(mv, &ts->esp, 0x48DA00);
	push(mv, &ts->esp, 0x48B410);
	push(mv, &ts->esp, 0x494190);
	push(mv, &ts->esp, 0x494140);
	push(mv, &ts->esp, 0x80);
	mov(&ts->ecx, 0x82DBC8);
	game::sub_493390(ts, mv);
	push(mv, &ts->esp, 0x781DB0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77CB60(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x830C78);
	game::sub_494960(ts, mv);
	push(mv, &ts->esp, 0x781E90);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77CB80(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x781D60);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77CB90(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x830D30);
	game::sub_494230(ts, mv);
	push(mv, &ts->esp, 0x781E50);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77CBB0(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x830AE8);
	game::sub_598750(ts, mv);
	push(mv, &ts->esp, 0x781EA0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77CBD0(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x830D14);
	game::sub_598750(ts, mv);
	push(mv, &ts->esp, 0x781E60);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77CBF0(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8358C0);
	game::sub_598750(ts, mv);
	push(mv, &ts->esp, 0x781DC0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77CC10(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x781D70);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77CC20(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x48E270);
	push(mv, &ts->esp, 0x48E070);
	push(mv, &ts->esp, 0x135200);
	mov(&ts->ecx, 0x835784);
	game::sub_43C0B0(ts, mv);
	retn(mv, &ts->esp);
}

void sub_77CC40(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x48E270);
	push(mv, &ts->esp, 0x48E070);
	push(mv, &ts->esp, 0x80135100);
	mov(&ts->ecx, 0x830AF8);
	game::sub_43C0B0(ts, mv);
	retn(mv, &ts->esp);
}

void sub_77CC60(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x48E270);
	push(mv, &ts->esp, 0x48E070);
	push(mv, &ts->esp, 0x80135000);
	mov(&ts->ecx, 0x82DBB0);
	game::sub_43C0B0(ts, mv);
	retn(mv, &ts->esp);
}

void sub_77CC80(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x835850);
	game::sub_598750(ts, mv);
	push(mv, &ts->esp, 0x781EE0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77CCA0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x4022C0);
	push(mv, &ts->esp, 0x502FD0);
	push(mv, &ts->esp, 0xFA);
	push(mv, &ts->esp, 0x30);
	push(mv, &ts->esp, 0x82DC08);
	game::sub_75C461(ts, mv);
	push(mv, &ts->esp, 0x781D80);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77CCD0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x4919D0);
	push(mv, &ts->esp, 0x491940);
	push(mv, &ts->esp, 0x16);
	push(mv, &ts->esp, 0x70);
	push(mv, &ts->esp, 0x832DE0);
	game::sub_75C461(ts, mv);
	push(mv, &ts->esp, 0x781DD0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77CD00(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x830AF0);
	game::sub_598750(ts, mv);
	push(mv, &ts->esp, 0x781DF0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77CD20(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x82DC00);
	game::sub_598750(ts, mv);
	push(mv, &ts->esp, 0x781E00);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77CD40(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8358C8);
	game::sub_598750(ts, mv);
	push(mv, &ts->esp, 0x781E70);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77CD60(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x495040);
	push(mv, &ts->esp, 0x494EA0);
	push(mv, &ts->esp, 0xB3300000);
	mov(&ts->ecx, 0x82DBA0);
	game::sub_43C0B0(ts, mv);
	retn(mv, &ts->esp);
}

void sub_77CD80(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x495040);
	push(mv, &ts->esp, 0x494EA0);
	push(mv, &ts->esp, 0xB3320000);
	mov(&ts->ecx, 0x8358D0);
	game::sub_43C0B0(ts, mv);
	retn(mv, &ts->esp);
}

void sub_77CDA0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x495040);
	push(mv, &ts->esp, 0x494EA0);
	push(mv, &ts->esp, 0xB0300100);
	mov(&ts->ecx, 0x830B08);
	game::sub_43C0B0(ts, mv);
	retn(mv, &ts->esp);
}

void sub_77CDC0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x4950D0);
	push(mv, &ts->esp, 0x494500);
	push(mv, &ts->esp, 0x48B410);
	push(mv, &ts->esp, 0x494C80);
	push(mv, &ts->esp, 0x494C10);
	push(mv, &ts->esp, 0x80);
	mov(&ts->ecx, 0x83579C);
	game::sub_493390(ts, mv);
	push(mv, &ts->esp, 0x781E10);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77CE00(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784250, 4));
	fdiv(mv, &ts->fp, x86::fp_index(0), x86::mem(0x78DBB4, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x83654C, 4));
	retn(mv, &ts->esp);
}

void sub_77CE20(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x4957A0);
	push(mv, &ts->esp, 0x4FF430);
	push(mv, &ts->esp, 0x7);
	push(mv, &ts->esp, 0x44);
	push(mv, &ts->esp, 0x836568);
	game::sub_75C461(ts, mv);
	push(mv, &ts->esp, 0x781EF0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77CE50(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0xC8CFE9F2);
	mov(&ts->ecx, 0x837188);
	game::sub_5054A0(ts, mv);
	retn(mv, &ts->esp);
}

void sub_77CE60(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0xFFFFFFFF);
	mov(&ts->ecx, 0x837198);
	game::sub_5054A0(ts, mv);
	retn(mv, &ts->esp);
}

void sub_77CE70(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x50549AC0);
	mov(&ts->ecx, 0x836550);
	game::sub_5054A0(ts, mv);
	retn(mv, &ts->esp);
}

void sub_77CE80(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0xFF323232);
	mov(&ts->ecx, 0x837178);
	game::sub_5054A0(ts, mv);
	retn(mv, &ts->esp);
}

void sub_77CE90(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8364F4);
	game::sub_510920(ts, mv);
	push(mv, &ts->esp, 0x781F10);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77CEB0(x86::thread_state* ts, x86::memory_view* mv) {
	mov(mv, &ts->eax, x86::mem(0x78DFFC, 4));
	mov(mv, &ts->edx, x86::mem(0x78DFF4, 4));
	mov(&ts->ecx, ts->eax);
	mov(mv, x86::mem(0x7F6900, 4), ts->eax);
	mov(mv, x86::mem(0x7F6904, 4), ts->ecx);
	mov(mv, &ts->ecx, x86::mem(0x78DFF8, 4));
	mov(&ts->eax, ts->edx);
	mov(mv, x86::mem(0x7F6938, 4), ts->edx);
	mov(&ts->edx, ts->ecx);
	mov(mv, x86::mem(0x7F693C, 4), ts->eax);
	mov(mv, x86::mem(0x7F6940, 4), ts->ecx);
	mov(&ts->cl, 0x80);
	mov(&ts->al, 0x25);
	mov(mv, x86::mem(0x7F6960, 1), ts->al);
	mov(mv, x86::mem(0x7F6961, 1), ts->al);
	xor_(&ts->eax, ts->eax);
	mov(mv, x86::mem(0x7F6966, 1), ts->cl);
	mov(mv, x86::mem(0x7F6967, 1), ts->cl);
	mov(mv, x86::mem(0x7F6968, 1), ts->cl);
	mov(mv, x86::mem(0x7F6969, 1), ts->cl);
	mov(mv, x86::mem(0x7F696A, 1), ts->cl);
	mov(mv, x86::mem(0x7F696B, 1), ts->cl);
	mov(&ts->cl, 0x32);
	mov(mv, x86::mem(0x7F6908, 4), 0x0);
	mov(mv, x86::mem(0x7F690C, 4), 0x41200000);
	mov(mv, x86::mem(0x7F6910, 4), 0x40000000);
	mov(mv, x86::mem(0x7F6914, 4), 0x0);
	mov(mv, x86::mem(0x7F6918, 4), 0x41200000);
	mov(mv, x86::mem(0x7F691C, 4), 0x40000000);
	mov(mv, x86::mem(0x7F6920, 4), 0x0);
	mov(mv, x86::mem(0x7F6924, 4), 0x0);
	mov(mv, x86::mem(0x7F6928, 4), 0x0);
	mov(mv, x86::mem(0x7F692C, 4), 0x0);
	mov(mv, x86::mem(0x7F6930, 4), 0x0);
	mov(mv, x86::mem(0x7F6934, 4), 0x0);
	mov(mv, x86::mem(0x7F6944, 4), ts->edx);
	mov(mv, x86::mem(0x7F6948, 4), 0x0);
	mov(mv, x86::mem(0x7F694C, 4), 0x0);
	mov(mv, x86::mem(0x7F6950, 4), 0x0);
	mov(mv, x86::mem(0x7F6954, 4), 0x0);
	mov(mv, x86::mem(0x7F6958, 4), 0x0);
	mov(mv, x86::mem(0x7F695C, 4), 0x0);
	mov(mv, x86::mem(0x7F6962, 1), ts->al);
	mov(mv, x86::mem(0x7F6963, 1), ts->al);
	mov(mv, x86::mem(0x7F6964, 1), ts->al);
	mov(mv, x86::mem(0x7F6965, 1), ts->al);
	mov(mv, x86::mem(0x7F696C, 1), ts->al);
	mov(mv, x86::mem(0x7F696D, 1), ts->cl);
	mov(mv, x86::mem(0x7F696E, 1), ts->al);
	mov(mv, x86::mem(0x7F696F, 1), ts->cl);
	mov(mv, x86::mem(0x7F6970, 1), ts->al);
	mov(mv, x86::mem(0x7F6971, 1), ts->al);
	mov(mv, x86::mem(0x7F6974, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77D010(x86::thread_state* ts, x86::memory_view* mv) {
	mov(mv, &ts->eax, x86::mem(0x78E024, 4));
	mov(&ts->ecx, 0x1);
	mov(mv, x86::mem(0x7F6BB0, 4), ts->eax);
	xor_(&ts->eax, ts->eax);
	mov(mv, x86::mem(0x7F6BB4, 4), 0x3E800000);
	mov(mv, x86::mem(0x7F6BB8, 4), 0xBDCCCCCD);
	mov(mv, x86::mem(0x7F6BBC, 4), 0x41200000);
	mov(mv, x86::mem(0x7F6BC0, 4), ts->ecx);
	mov(mv, x86::mem(0x7F6BC4, 4), ts->ecx);
	mov(mv, x86::mem(0x7F6BC8, 4), 0x3F000000);
	mov(mv, x86::mem(0x7F6BCC, 4), 0x40100000);
	mov(mv, x86::mem(0x7F6BD0, 4), 0x0);
	mov(mv, x86::mem(0x7F6BD4, 4), 0x3ECCCCCD);
	mov(mv, x86::mem(0x7F6BD8, 4), ts->eax);
	mov(mv, x86::mem(0x7F6BDC, 4), 0x3F800000);
	mov(mv, x86::mem(0x7F6BE0, 4), 0x40533333);
	mov(mv, x86::mem(0x7F6BE4, 4), 0x42200000);
	mov(mv, x86::mem(0x7F6BE8, 4), ts->eax);
	mov(mv, x86::mem(0x7F6BEC, 4), ts->eax);
	mov(mv, x86::mem(0x7F6BF0, 4), 0x3F800000);
	mov(mv, x86::mem(0x7F6BF4, 4), 0x3ECCCCCD);
	mov(mv, x86::mem(0x7F6BF8, 4), ts->eax);
	mov(mv, x86::mem(0x7F6BFC, 4), 0xBF800000);
	mov(mv, x86::mem(0x7F6C00, 4), ts->ecx);
	mov(mv, x86::mem(0x7F6C04, 4), 0x3F000000);
	mov(mv, x86::mem(0x7F6C08, 4), 0x40100000);
	mov(mv, x86::mem(0x7F6C0C, 4), 0x41880000);
	mov(mv, x86::mem(0x7F6C10, 4), 0x3ECCCCCD);
	mov(mv, x86::mem(0x7F6C14, 4), ts->eax);
	mov(mv, x86::mem(0x7F6C18, 4), 0x3F800000);
	mov(mv, x86::mem(0x7F6C1C, 4), 0x40000000);
	mov(mv, x86::mem(0x7F6C20, 4), ts->eax);
	mov(mv, x86::mem(0x7F6C24, 4), ts->eax);
	mov(mv, x86::mem(0x7F6C28, 4), ts->eax);
	mov(mv, x86::mem(0x7F6C2C, 4), 0x3F800000);
	mov(mv, x86::mem(0x7F6C30, 4), 0x3ECCCCCD);
	mov(mv, x86::mem(0x7F6C34, 4), ts->eax);
	mov(mv, x86::mem(0x7F6C38, 4), 0xBF800000);
	mov(mv, x86::mem(0x7F6C3C, 4), ts->eax);
	mov(mv, x86::mem(0x7F6C40, 4), 0x3F000000);
	mov(mv, x86::mem(0x7F6C44, 4), 0x40100000);
	mov(mv, x86::mem(0x7F6C48, 4), ts->eax);
	mov(mv, x86::mem(0x7F6C4C, 4), 0x3ECCCCCD);
	mov(mv, x86::mem(0x7F6C50, 4), ts->eax);
	mov(mv, x86::mem(0x7F6C54, 4), 0x3F800000);
	mov(mv, x86::mem(0x7F6C58, 4), 0x4007DF3B);
	mov(mv, x86::mem(0x7F6C5C, 4), 0x42200000);
	mov(mv, x86::mem(0x7F6C60, 4), ts->eax);
	mov(mv, x86::mem(0x7F6C64, 4), ts->eax);
	mov(mv, x86::mem(0x7F6C68, 4), 0xBF800000);
	mov(mv, x86::mem(0x7F6C6C, 4), 0x3ECCCCCD);
	mov(mv, x86::mem(0x7F6C70, 4), ts->eax);
	mov(mv, x86::mem(0x7F6C74, 4), 0xBF800000);
	mov(mv, x86::mem(0x7F6C78, 4), ts->eax);
	mov(mv, x86::mem(0x7F6C7C, 4), 0x3F000000);
	mov(mv, x86::mem(0x7F6C80, 4), 0x40100000);
	mov(mv, x86::mem(0x7F6C84, 4), 0x41880000);
	mov(mv, x86::mem(0x7F6C88, 4), 0x3ECCCCCD);
	mov(mv, x86::mem(0x7F6C8C, 4), ts->eax);
	mov(mv, x86::mem(0x7F6C90, 4), 0x3F800000);
	mov(mv, x86::mem(0x7F6C94, 4), 0x40000000);
	mov(mv, x86::mem(0x7F6C98, 4), ts->eax);
	mov(mv, x86::mem(0x7F6C9C, 4), ts->eax);
	mov(mv, x86::mem(0x7F6CA0, 4), ts->eax);
	mov(mv, x86::mem(0x7F6CA4, 4), 0xBF800000);
	mov(mv, x86::mem(0x7F6CA8, 4), 0x3ECCCCCD);
	mov(mv, x86::mem(0x7F6CAC, 4), ts->eax);
	mov(mv, x86::mem(0x7F6CB0, 4), 0xBF800000);
	retn(mv, &ts->esp);
}

void sub_77D230(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8371B0);
	game::sub_40C910(ts, mv);
	push(mv, &ts->esp, 0x781F20);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77D250(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x836750);
	game::sub_40C910(ts, mv);
	push(mv, &ts->esp, 0x781F30);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77D270(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, ts->ebx);
	push(mv, &ts->esp, ts->esi);
	push(mv, &ts->esp, ts->edi);
	mov(&ts->esi, 0x837048);
	mov(&ts->ebx, 0x6);
	or_(&ts->edi, 0xFFFFFFFF);

loc_77D280:
	push(mv, &ts->esp, 0x783FE5);
	mov(mv, x86::mem(ts->esi, 4), 0x0);
	lea(mv, &ts->eax, x86::mem(ts->esi + 0x4, 4));
	push(mv, &ts->esp, 0x20);
	push(mv, &ts->esp, ts->eax);
	mov(mv, x86::mem(ts->esi - 0x8, 4), ts->edi);
	mov(mv, x86::mem(ts->esi - 0x4, 4), ts->edi);
	mov(mv, x86::mem(ts->esi, 4), 0x0);
	game::sub_50C960(ts, mv);
	mov(mv, x86::mem(ts->esi + 0x28, 4), 0x0);
	add(&ts->esp, 0xC);
	add(&ts->esi, 0x34);
	dec(&ts->ebx);
	if (!ts->eflags.zero) {
        goto loc_77D280;
    }
	pop(mv, &ts->esp, ts->edi);
	pop(mv, &ts->esp, ts->esi);
	pop(mv, &ts->esp, ts->ebx);
	retn(mv, &ts->esp);
}

void sub_77D2C0(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x836560);
	game::sub_57BCD0(ts, mv);
	push(mv, &ts->esp, 0x781F40);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77D2E0(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x863760);
	game::sub_4FE350(ts, mv);
	push(mv, &ts->esp, 0x781F50);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77D300(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x781F90);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77D310(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784250, 4));
	fdiv(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7992E0, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x86375C, 4));
	retn(mv, &ts->esp);
}

void unknown_libname_137(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x838640);
	goto sub_4FF250;
}

void sub_77D340(x86::thread_state* ts, x86::memory_view* mv) {
	mov(mv, &ts->eax, x86::mem(0x7FA2B0, 4));
	mov(mv, &ts->ecx, x86::mem(0x7FA2B4, 4));
	mov(mv, &ts->edx, x86::mem(0x7FA2B8, 4));
	mov(mv, x86::mem(0x839BE0, 4), ts->eax);
	mov(mv, &ts->eax, x86::mem(0x7FA2BC, 4));
	mov(mv, x86::mem(0x839BE4, 4), ts->ecx);
	mov(mv, x86::mem(0x839BE8, 4), ts->edx);
	mov(mv, x86::mem(0x839BEC, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77D370(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x85AD40);
	game::sub_532740(ts, mv);
	push(mv, &ts->esp, 0x781FA0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77D390(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x83A9D0);
	game::sub_53ED20(ts, mv);
	push(mv, &ts->esp, 0x781FE0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77D3B0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x79DA1C);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x79DA04);
	mov(mv, x86::mem(0x8641AC, 4), ts->eax);
	mov(mv, x86::mem(0x8641B0, 4), 0x4);
	mov(mv, x86::mem(0x8641B4, 4), 0x1);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x79D9F0);
	mov(mv, x86::mem(0x8641B8, 4), ts->eax);
	mov(mv, x86::mem(0x8641BC, 4), 0x1);
	mov(mv, x86::mem(0x8641C0, 4), 0x2);
	game::sub_43DB50(ts, mv);
	mov(mv, x86::mem(0x8641C4, 4), ts->eax);
	mov(&ts->eax, 0x3);
	push(mv, &ts->esp, 0x79D9DC);
	mov(mv, x86::mem(0x8641C8, 4), ts->eax);
	mov(mv, x86::mem(0x8641CC, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x79D9C8);
	mov(mv, x86::mem(0x8641D0, 4), ts->eax);
	mov(mv, x86::mem(0x8641D4, 4), 0x2);
	mov(mv, x86::mem(0x8641D8, 4), 0x4);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x79D9AC);
	mov(mv, x86::mem(0x8641DC, 4), ts->eax);
	mov(mv, x86::mem(0x8641E0, 4), 0x0);
	mov(mv, x86::mem(0x8641E4, 4), 0xA);
	game::sub_43DB50(ts, mv);
	add(&ts->esp, 0x18);
	mov(mv, x86::mem(0x8641E8, 4), ts->eax);
	mov(mv, x86::mem(0x8641EC, 4), 0x1);
	retn(mv, &ts->esp);
}

void sub_77D480(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8637A0);
	game::sub_52C270(ts, mv);
	push(mv, &ts->esp, 0x781FF0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77D4A0(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x863770);
	game::sub_52C270(ts, mv);
	push(mv, &ts->esp, 0x782000);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77D4C0(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x839C30);
	game::sub_52C270(ts, mv);
	push(mv, &ts->esp, 0x782010);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77D4E0(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x839BD0);
	game::sub_52C270(ts, mv);
	push(mv, &ts->esp, 0x782020);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77D500(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x525C50);
	push(mv, &ts->esp, 0x57BCD0);
	push(mv, &ts->esp, 0x100);
	push(mv, &ts->esp, 0x8);
	push(mv, &ts->esp, 0x8639A0);
	game::sub_75C461(ts, mv);
	push(mv, &ts->esp, 0x781FB0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77D530(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8637B0);
	game::sub_52CC50(ts, mv);
	push(mv, &ts->esp, 0x781FD0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77D550(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x863768);
	game::sub_598750(ts, mv);
	push(mv, &ts->esp, 0x782030);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77D570(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8637BC);
	game::sub_57BCD0(ts, mv);
	push(mv, &ts->esp, 0x782050);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77D590(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x838980);
	game::sub_53ADF0(ts, mv);
	push(mv, &ts->esp, 0x782040);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77D5B0(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x839C40);
	game::sub_522400(ts, mv);
	push(mv, &ts->esp, 0x781F60);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77D5D0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x799388, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x79DA34, 4));
	fsub(mv, &ts->fp, x86::fp_index(0), x86::mem(0x799390, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8637C4, 4));
	retn(mv, &ts->esp);
}

void sub_77D5F0(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8637D0);
	game::sub_5315B0(ts, mv);
	push(mv, &ts->esp, 0x781F80);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77D610(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x781F70);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77D620(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784250, 4));
	fdiv(mv, &ts->fp, x86::fp_index(0), x86::mem(0x79DA40, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x864638, 4));
	retn(mv, &ts->esp);
}

void sub_77D640(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x4022C0);
	push(mv, &ts->esp, 0x56D770);
	push(mv, &ts->esp, 0x6);
	push(mv, &ts->esp, 0x20);
	push(mv, &ts->esp, 0x864640);
	game::sub_75C461(ts, mv);
	push(mv, &ts->esp, 0x782060);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77D670(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x864630);
	game::sub_598750(ts, mv);
	push(mv, &ts->esp, 0x782080);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77D690(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x865210);
	game::sub_57BCD0(ts, mv);
	push(mv, &ts->esp, 0x782280);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77D6B0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784250, 4));
	fdiv(mv, &ts->fp, x86::fp_index(0), x86::mem(0x79DC44, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x86554C, 4));
	retn(mv, &ts->esp);
}

void sub_77D6D0(x86::thread_state* ts, x86::memory_view* mv) {
	mov(mv, &ts->eax, x86::mem(0x79DC50, 4));
	mov(mv, &ts->edx, x86::mem(0x79DC48, 4));
	mov(&ts->ecx, ts->eax);
	mov(mv, x86::mem(0x7FB8E8, 4), ts->eax);
	mov(mv, x86::mem(0x7FB8EC, 4), ts->ecx);
	mov(mv, &ts->ecx, x86::mem(0x79DC4C, 4));
	mov(&ts->eax, ts->edx);
	mov(mv, x86::mem(0x7FB920, 4), ts->edx);
	mov(&ts->edx, ts->ecx);
	mov(mv, x86::mem(0x7FB924, 4), ts->eax);
	mov(mv, x86::mem(0x7FB928, 4), ts->ecx);
	mov(&ts->cl, 0x80);
	mov(&ts->al, 0x25);
	mov(mv, x86::mem(0x7FB948, 1), ts->al);
	mov(mv, x86::mem(0x7FB949, 1), ts->al);
	xor_(&ts->eax, ts->eax);
	mov(mv, x86::mem(0x7FB94E, 1), ts->cl);
	mov(mv, x86::mem(0x7FB94F, 1), ts->cl);
	mov(mv, x86::mem(0x7FB950, 1), ts->cl);
	mov(mv, x86::mem(0x7FB951, 1), ts->cl);
	mov(mv, x86::mem(0x7FB952, 1), ts->cl);
	mov(mv, x86::mem(0x7FB953, 1), ts->cl);
	mov(&ts->cl, 0x32);
	mov(mv, x86::mem(0x7FB8F0, 4), 0x0);
	mov(mv, x86::mem(0x7FB8F4, 4), 0x41200000);
	mov(mv, x86::mem(0x7FB8F8, 4), 0x40000000);
	mov(mv, x86::mem(0x7FB8FC, 4), 0x0);
	mov(mv, x86::mem(0x7FB900, 4), 0x41200000);
	mov(mv, x86::mem(0x7FB904, 4), 0x40000000);
	mov(mv, x86::mem(0x7FB908, 4), 0x0);
	mov(mv, x86::mem(0x7FB90C, 4), 0x0);
	mov(mv, x86::mem(0x7FB910, 4), 0x0);
	mov(mv, x86::mem(0x7FB914, 4), 0x0);
	mov(mv, x86::mem(0x7FB918, 4), 0x0);
	mov(mv, x86::mem(0x7FB91C, 4), 0x0);
	mov(mv, x86::mem(0x7FB92C, 4), ts->edx);
	mov(mv, x86::mem(0x7FB930, 4), 0x0);
	mov(mv, x86::mem(0x7FB934, 4), 0x0);
	mov(mv, x86::mem(0x7FB938, 4), 0x0);
	mov(mv, x86::mem(0x7FB93C, 4), 0x0);
	mov(mv, x86::mem(0x7FB940, 4), 0x0);
	mov(mv, x86::mem(0x7FB944, 4), 0x0);
	mov(mv, x86::mem(0x7FB94A, 1), ts->al);
	mov(mv, x86::mem(0x7FB94B, 1), ts->al);
	mov(mv, x86::mem(0x7FB94C, 1), ts->al);
	mov(mv, x86::mem(0x7FB94D, 1), ts->al);
	mov(mv, x86::mem(0x7FB954, 1), ts->al);
	mov(mv, x86::mem(0x7FB955, 1), ts->cl);
	mov(mv, x86::mem(0x7FB956, 1), ts->al);
	mov(mv, x86::mem(0x7FB957, 1), ts->cl);
	mov(mv, x86::mem(0x7FB958, 1), ts->al);
	mov(mv, x86::mem(0x7FB959, 1), ts->al);
	mov(mv, x86::mem(0x7FB95C, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77D830(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8651A4);
	game::sub_598750(ts, mv);
	push(mv, &ts->esp, 0x7821F0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77D850(x86::thread_state* ts, x86::memory_view* mv) {
	mov(mv, &ts->eax, x86::mem(0x7FA99C, 4));
	mov(mv, &ts->ecx, x86::mem(0x7FA9A0, 4));
	mov(mv, &ts->edx, x86::mem(0x7FA97C, 4));
	mov(mv, x86::mem(0x86658C, 4), ts->eax);
	mov(mv, &ts->eax, x86::mem(0x7FA980, 4));
	mov(mv, x86::mem(0x866590, 4), ts->ecx);
	mov(mv, &ts->ecx, x86::mem(0x7FA984, 4));
	mov(mv, x86::mem(0x866594, 4), ts->edx);
	mov(mv, &ts->edx, x86::mem(0x7FA988, 4));
	mov(mv, x86::mem(0x866598, 4), ts->eax);
	mov(mv, &ts->eax, x86::mem(0x7FA98C, 4));
	mov(mv, x86::mem(0x86659C, 4), ts->ecx);
	mov(mv, &ts->ecx, x86::mem(0x7FA990, 4));
	mov(mv, x86::mem(0x8665A0, 4), ts->edx);
	mov(mv, &ts->edx, x86::mem(0x7FA994, 4));
	mov(mv, x86::mem(0x8665A4, 4), ts->eax);
	mov(mv, &ts->eax, x86::mem(0x7FA998, 4));
	mov(mv, x86::mem(0x8665A8, 4), ts->ecx);
	mov(mv, &ts->ecx, x86::mem(0x7FA978, 4));
	mov(mv, x86::mem(0x8665AC, 4), ts->edx);
	mov(mv, x86::mem(0x8665B0, 4), ts->eax);
	mov(mv, x86::mem(0x8665B4, 4), ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77D8D0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x782090);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77D8E0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x78C13C);
	game::sub_43DB50(ts, mv);
	add(&ts->esp, 0x4);
	mov(mv, x86::mem(0x865598, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77D900(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x86519C);
	game::sub_598750(ts, mv);
	push(mv, &ts->esp, 0x782200);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77D920(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x86555C);
	game::sub_598750(ts, mv);
	push(mv, &ts->esp, 0x782220);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77D940(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x865564);
	game::sub_57AFA0(ts, mv);
	push(mv, &ts->esp, 0x782230);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77D960(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x579350);
	push(mv, &ts->esp, 0x579340);
	push(mv, &ts->esp, 0x39100);
	mov(&ts->ecx, 0x86596C);
	game::sub_43C0B0(ts, mv);
	retn(mv, &ts->esp);
}

void sub_77D980(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x579350);
	push(mv, &ts->esp, 0x579340);
	push(mv, &ts->esp, 0x39101);
	mov(&ts->ecx, 0x8653A0);
	game::sub_43C0B0(ts, mv);
	retn(mv, &ts->esp);
}

void sub_77D9A0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x579350);
	push(mv, &ts->esp, 0x579340);
	push(mv, &ts->esp, 0x39102);
	mov(&ts->ecx, 0x865470);
	game::sub_43C0B0(ts, mv);
	retn(mv, &ts->esp);
}

void sub_77D9C0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x57C320);
	push(mv, &ts->esp, 0x57C240);
	push(mv, &ts->esp, 0x2);
	push(mv, &ts->esp, 0x1C8);
	push(mv, &ts->esp, 0x8655A0);
	game::sub_75C461(ts, mv);
	push(mv, &ts->esp, 0x782290);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77D9F0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x7820A0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77DA00(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x7820B0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77DA10(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x7820C0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77DA20(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x7820D0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77DA30(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x7820E0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77DA40(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x7820F0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77DA50(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x782100);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77DA60(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x782110);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77DA70(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x782120);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77DA80(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x782130);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77DA90(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x782140);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77DAA0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x782150);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77DAB0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x782160);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77DAC0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x782170);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77DAD0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x782180);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77DAE0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, ts->edi);
	mov(&ts->ecx, 0x18);
	xor_(&ts->eax, ts->eax);
	mov(&ts->edi, 0x8651B0);
	stos(mv, x86::mem(ts->edi, 4), ts->eax);
	pop(mv, &ts->esp, ts->edi);
	retn(mv, &ts->esp);
}

void sub_77DB00(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x4022C0);
	push(mv, &ts->esp, 0x572340);
	push(mv, &ts->esp, 0x4);
	push(mv, &ts->esp, 0x30);
	push(mv, &ts->esp, 0x8653B0);
	game::sub_75C461(ts, mv);
	push(mv, &ts->esp, 0x782190);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77DB30(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x4022C0);
	push(mv, &ts->esp, 0x5796D0);
	push(mv, &ts->esp, 0x2);
	push(mv, &ts->esp, 0x20);
	push(mv, &ts->esp, 0x865360);
	game::sub_75C461(ts, mv);
	push(mv, &ts->esp, 0x7821B0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77DB60(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x865220);
	game::sub_598750(ts, mv);
	push(mv, &ts->esp, 0x782240);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77DB80(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x865550);
	game::sub_598750(ts, mv);
	push(mv, &ts->esp, 0x782250);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77DBA0(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x865218);
	game::sub_598750(ts, mv);
	push(mv, &ts->esp, 0x7822B0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77DBC0(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x866584);
	game::sub_598750(ts, mv);
	push(mv, &ts->esp, 0x782210);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77DBE0(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8652F0);
	game::sub_598750(ts, mv);
	push(mv, &ts->esp, 0x782260);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77DC00(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x865190);
	game::sub_598750(ts, mv);
	push(mv, &ts->esp, 0x782270);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77DC20(x86::thread_state* ts, x86::memory_view* mv) {
	mov(mv, &ts->eax, x86::mem(0x79DD48, 4));
	mov(mv, &ts->ecx, x86::mem(0x79DD4C, 4));
	mov(mv, &ts->edx, x86::mem(0x79DD50, 4));
	mov(mv, x86::mem(0x7FB8A0, 4), ts->eax);
	mov(&ts->eax, 0x3);
	mov(mv, x86::mem(0x7FB8A4, 4), ts->eax);
	mov(mv, x86::mem(0x7FB8B0, 4), ts->eax);
	xor_(&ts->eax, ts->eax);
	mov(mv, x86::mem(0x7FB8A8, 4), 0x8A3B24);
	mov(mv, x86::mem(0x7FB8AC, 4), ts->ecx);
	mov(mv, x86::mem(0x7FB8B4, 4), 0x8A3B38);
	mov(mv, x86::mem(0x7FB8B8, 4), ts->edx);
	mov(mv, x86::mem(0x7FB8BC, 4), 0x6);
	mov(mv, x86::mem(0x7FB8C0, 4), 0x7FB624);
	mov(mv, x86::mem(0x7FB8C4, 4), ts->eax);
	mov(mv, x86::mem(0x7FB8C8, 4), 0x7);
	mov(mv, x86::mem(0x7FB8CC, 4), ts->eax);
	mov(mv, x86::mem(0x7FB8D0, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77DCA0(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x865930);
	game::sub_575770(ts, mv);
	push(mv, &ts->esp, 0x7821D0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77DCC0(x86::thread_state* ts, x86::memory_view* mv) {
	fild(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7FB70C, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x786460, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x865198, 4));
	retn(mv, &ts->esp);
}

void sub_77DCE0(x86::thread_state* ts, x86::memory_view* mv) {
	mov(mv, &ts->eax, x86::mem(0x7FB710, 4));
	mov(mv, x86::mem(0x865558, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77DCF0(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8652F8);
	game::sub_577430(ts, mv);
	push(mv, &ts->esp, 0x7821E0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77DD10(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->eax, 0x8698DC);

loc_77DD15:
	mov(mv, x86::mem(ts->eax, 1), 0x0);
	add(&ts->eax, 0x10);
	cmp(&ts->eflags, ts->eax, 0x86993C);
	if (ts->eflags.sign != ts->eflags.overflow) {
        goto loc_77DD15;
    }
	push(mv, &ts->esp, 0x7822C0);
	mov(mv, x86::mem(0x86993C, 1), 0x0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77DD40(x86::thread_state* ts, x86::memory_view* mv) {
	mov(mv, &ts->eax, x86::mem(0x7FBDFC, 4));
	inc(&ts->eax);
	mov(mv, x86::mem(0x869674, 2), ts->ax);
	retn(mv, &ts->esp);
}

void sub_77DD50(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x7822E0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77DD60(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x7822F0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77DD70(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->eax, 0x8691E0);
	mov(&ts->ecx, 0x5);
	lea(mv, &ts->ebx, x86::mem(ts->ebx, 4));

loc_77DD80:
	mov(mv, x86::mem(ts->eax, 4), 0x0);
	add(&ts->eax, 0x14);
	dec(&ts->ecx);
	if (!ts->eflags.zero) {
        goto loc_77DD80;
    }
	retn(mv, &ts->esp);
}

void sub_77DD90(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x782300);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77DDA0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x782310);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77DDB0(x86::thread_state* ts, x86::memory_view* mv) {
	xor_(&ts->eax, ts->eax);
	mov(mv, x86::mem(0x869074, 4), ts->eax);
	mov(mv, x86::mem(0x869078, 4), ts->eax);
	mov(mv, x86::mem(0x86907C, 4), ts->eax);
	mov(mv, x86::mem(0x869080, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77DDD0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x783FE5);
	push(mv, &ts->esp, 0x869088);
	game::sub_43DBD0(ts, mv);
	push(mv, &ts->esp, 0x782320);
	game::_atexit(ts, mv);
	add(&ts->esp, 0xC);
	retn(mv, &ts->esp);
}

void sub_77DDF0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x782330);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77DE00(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->eax, 0x866C20);
	mov(&ts->edx, 0x12);
	xor_(&ts->ecx, ts->ecx);
	lea(mv, &ts->esp, x86::mem(ts->esp, 4));

loc_77DE10:
	mov(mv, x86::mem(ts->eax - 0x1F8, 1), ts->cl);
	mov(mv, x86::mem(ts->eax - 0x4, 4), ts->ecx);
	mov(mv, x86::mem(ts->eax, 4), ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x4, 4), ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x8, 4), ts->ecx);
	add(&ts->eax, 0x204);
	dec(&ts->edx);
	if (!ts->eflags.zero) {
        goto loc_77DE10;
    }
	retn(mv, &ts->esp);
}

void sub_77DE30(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x4022C0);
	push(mv, &ts->esp, 0x588130);
	push(mv, &ts->esp, 0x5);
	push(mv, &ts->esp, 0x20);
	push(mv, &ts->esp, 0x8693C8);
	game::sub_75C461(ts, mv);
	push(mv, &ts->esp, 0x782340);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77DE60(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784250, 4));
	fdiv(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7A17BC, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x86B4BC, 4));
	retn(mv, &ts->esp);
}

void sub_77DE80(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x4);
	push(mv, &ts->esp, 0x7FC880);
	mov(&ts->ecx, 0x86B3C0);
	game::sub_576770(ts, mv);
	retn(mv, &ts->esp);
}

void sub_77DEA0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x4);
	push(mv, &ts->esp, 0x7FC8A0);
	mov(&ts->ecx, 0x86B590);
	game::sub_576770(ts, mv);
	retn(mv, &ts->esp);
}

void sub_77DEC0(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x86B4C8);
	game::sub_598750(ts, mv);
	push(mv, &ts->esp, 0x7823E0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77DEE0(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x86B490);
	game::sub_598750(ts, mv);
	push(mv, &ts->esp, 0x7823F0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77DF00(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x86B5A0);
	game::sub_57BCD0(ts, mv);
	push(mv, &ts->esp, 0x782410);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77DF20(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x86B598);
	game::sub_598750(ts, mv);
	push(mv, &ts->esp, 0x782400);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77DF40(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x3);
	push(mv, &ts->esp, 0x7FC8C8);
	mov(&ts->ecx, 0x86B578);
	game::sub_576770(ts, mv);
	retn(mv, &ts->esp);
}

void sub_77DF60(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x3);
	push(mv, &ts->esp, 0x7FC8E0);
	mov(&ts->ecx, 0x86B498);
	game::sub_576770(ts, mv);
	retn(mv, &ts->esp);
}

void sub_77DF80(x86::thread_state* ts, x86::memory_view* mv) {
	mov(mv, x86::mem(0x86B4A8, 4), 0x3DB2B8C2);
	retn(mv, &ts->esp);
}

void sub_77DF90(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x3);
	push(mv, &ts->esp, 0x7FC8F8);
	mov(&ts->ecx, 0x86B4A0);
	game::sub_576770(ts, mv);
	retn(mv, &ts->esp);
}

void __cfltcvt_init_32(x86::thread_state* ts, x86::memory_view* mv) {
	mov(mv, x86::mem(0x86B5E8, 4), 0x0);
	mov(mv, x86::mem(0x86B5EC, 4), 0x0);
	mov(mv, x86::mem(0x86B5F0, 4), 0x3E860A92);
	mov(mv, x86::mem(0x86B5F4, 4), 0x3DCCCCCD);
	mov(mv, x86::mem(0x86B5F8, 4), 0x3F060A92);
	mov(mv, x86::mem(0x86B5FC, 4), 0x3EE66666);
	mov(mv, x86::mem(0x86B600, 4), 0x3F490FDB);
	mov(mv, x86::mem(0x86B604, 4), 0x3F59999A);
	mov(mv, x86::mem(0x86B608, 4), 0x3F860A92);
	mov(mv, x86::mem(0x86B60C, 4), 0x3F733333);
	mov(mv, x86::mem(0x86B610, 4), 0x3FC6D3F2);
	mov(mv, x86::mem(0x86B614, 4), 0x3F933333);
	mov(mv, x86::mem(0x86B618, 4), 0x3FC90FDB);
	mov(mv, x86::mem(0x86B61C, 4), 0x3F800000);
	retn(mv, &ts->esp);
}

void __cfltcvt_init_33(x86::thread_state* ts, x86::memory_view* mv) {
	mov(mv, x86::mem(0x86B5B0, 4), 0x0);
	mov(mv, x86::mem(0x86B5B4, 4), 0x0);
	mov(mv, x86::mem(0x86B5B8, 4), 0x3E860A92);
	mov(mv, x86::mem(0x86B5BC, 4), 0x3DCCCCCD);
	mov(mv, x86::mem(0x86B5C0, 4), 0x3F060A92);
	mov(mv, x86::mem(0x86B5C4, 4), 0x3EE66666);
	mov(mv, x86::mem(0x86B5C8, 4), 0x3F490FDB);
	mov(mv, x86::mem(0x86B5CC, 4), 0x3F59999A);
	mov(mv, x86::mem(0x86B5D0, 4), 0x3F860A92);
	mov(mv, x86::mem(0x86B5D4, 4), 0x3F733333);
	mov(mv, x86::mem(0x86B5D8, 4), 0x3FC6D3F2);
	mov(mv, x86::mem(0x86B5DC, 4), 0x3F933333);
	mov(mv, x86::mem(0x86B5E0, 4), 0x3FC90FDB);
	mov(mv, x86::mem(0x86B5E4, 4), 0x0);
	retn(mv, &ts->esp);
}

void sub_77E0D0(x86::thread_state* ts, x86::memory_view* mv) {
	mov(mv, x86::mem(0x86B570, 4), 0x86B5E8);
	mov(mv, x86::mem(0x86B574, 4), 0x7);
	retn(mv, &ts->esp);
}

void sub_77E0F0(x86::thread_state* ts, x86::memory_view* mv) {
	mov(mv, x86::mem(0x86B3C8, 4), 0x86B5B0);
	mov(mv, x86::mem(0x86B3CC, 4), 0x7);
	retn(mv, &ts->esp);
}

void unknown_libname_138(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x86B3D0);
	goto loc_5911C0;

loc_5911C0:
	mov(&ts->eax, ts->ecx);
	xor_(&ts->edx, ts->edx);

loc_5911C4:
	test(&ts->eflags, ts->edx, ts->edx);
	if (!ts->eflags.zero) {
        goto loc_5911D0;
    }
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784500, 4));
	goto loc_5911D6;

loc_5911D0:
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7A1CA4, 4));

loc_5911D6:
	test(&ts->eflags, ts->edx, ts->edx);
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(ts->eax + (ts->edx*4), 4));
	if (!ts->eflags.zero) {
        goto loc_5911E5;
    }
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784500, 4));
	goto loc_5911EB;

loc_5911E5:
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7A1CA4, 4));

loc_5911EB:
	test(&ts->eflags, ts->edx, ts->edx);
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(ts->eax + (ts->edx*4) + 0x8, 4));
	if (!ts->eflags.zero) {
        goto loc_5911FB;
    }
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784500, 4));
	goto loc_591201;

loc_5911FB:
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7A1CA4, 4));

loc_591201:
	test(&ts->eflags, ts->edx, ts->edx);
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(ts->eax + (ts->edx*4) + 0x10, 4));
	if (!ts->eflags.zero) {
        goto loc_591211;
    }
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784500, 4));
	goto loc_591217;

loc_591211:
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7A1CA4, 4));

loc_591217:
	test(&ts->eflags, ts->edx, ts->edx);
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(ts->eax + (ts->edx*4) + 0x18, 4));
	if (!ts->eflags.zero) {
        goto loc_591227;
    }
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784500, 4));
	goto loc_59122D;

loc_591227:
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7A1CA4, 4));

loc_59122D:
	test(&ts->eflags, ts->edx, ts->edx);
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(ts->eax + (ts->edx*4) + 0x20, 4));
	if (!ts->eflags.zero) {
        goto loc_59123D;
    }
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784500, 4));
	goto loc_591243;

loc_59123D:
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7A1CA4, 4));

loc_591243:
	test(&ts->eflags, ts->edx, ts->edx);
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(ts->eax + (ts->edx*4) + 0x28, 4));
	if (!ts->eflags.zero) {
        goto loc_591253;
    }
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784500, 4));
	goto loc_591259;

loc_591253:
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7A1CA4, 4));

loc_591259:
	test(&ts->eflags, ts->edx, ts->edx);
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(ts->eax + (ts->edx*4) + 0x30, 4));
	if (!ts->eflags.zero) {
        goto loc_591269;
    }
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784500, 4));
	goto loc_59126F;

loc_591269:
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7A1CA4, 4));

loc_59126F:
	test(&ts->eflags, ts->edx, ts->edx);
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(ts->eax + (ts->edx*4) + 0x38, 4));
	if (!ts->eflags.zero) {
        goto loc_59127F;
    }
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784500, 4));
	goto loc_591285;

loc_59127F:
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7A1CA4, 4));

loc_591285:
	test(&ts->eflags, ts->edx, ts->edx);
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(ts->eax + (ts->edx*4) + 0x40, 4));
	if (!ts->eflags.zero) {
        goto loc_591295;
    }
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784500, 4));
	goto loc_59129B;

loc_591295:
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7A1CA4, 4));

loc_59129B:
	test(&ts->eflags, ts->edx, ts->edx);
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(ts->eax + (ts->edx*4) + 0x48, 4));
	if (!ts->eflags.zero) {
        goto loc_5912AB;
    }
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784500, 4));
	goto loc_5912B1;

loc_5912AB:
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7A1CA4, 4));

loc_5912B1:
	test(&ts->eflags, ts->edx, ts->edx);
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(ts->eax + (ts->edx*4) + 0x50, 4));
	if (!ts->eflags.zero) {
        goto loc_5912C1;
    }
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784500, 4));
	goto loc_5912C7;

loc_5912C1:
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7A1CA4, 4));

loc_5912C7:
	test(&ts->eflags, ts->edx, ts->edx);
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(ts->eax + (ts->edx*4) + 0x58, 4));
	if (!ts->eflags.zero) {
        goto loc_5912D7;
    }
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784500, 4));
	goto loc_5912DD;

loc_5912D7:
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7A1CA4, 4));

loc_5912DD:
	test(&ts->eflags, ts->edx, ts->edx);
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(ts->eax + (ts->edx*4) + 0x70, 4));
	if (!ts->eflags.zero) {
        goto loc_5912ED;
    }
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784500, 4));
	goto loc_5912F3;

loc_5912ED:
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7A1CA4, 4));

loc_5912F3:
	test(&ts->eflags, ts->edx, ts->edx);
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(ts->eax + (ts->edx*4) + 0x60, 4));
	if (!ts->eflags.zero) {
        goto loc_591303;
    }
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784500, 4));
	goto loc_591309;

loc_591303:
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7A1CA4, 4));

loc_591309:
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(ts->eax + (ts->edx*4) + 0x68, 4));
	inc(&ts->edx);
	cmp(&ts->eflags, ts->edx, 0x2);
	if (ts->eflags.sign != ts->eflags.overflow) {
        goto loc_5911C4;
    }
	retn(mv, &ts->esp);
}

void sub_77E120(x86::thread_state* ts, x86::memory_view* mv) {
	mov(mv, x86::mem(0x86B510, 4), 0x3E64C388);
	retn(mv, &ts->esp);
}

void sub_77E130(x86::thread_state* ts, x86::memory_view* mv) {
	mov(mv, &ts->eax, x86::mem(0x86B510, 4));
	mov(mv, x86::mem(0x7FC95C, 4), ts->eax);
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7FC95C, 4));
	fdivr(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7859D0, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7FC960, 4));
	retn(mv, &ts->esp);
}

void sub_77E150(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x86B5A8);
	game::sub_598750(ts, mv);
	push(mv, &ts->esp, 0x782430);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77E170(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x86B4C0);
	game::sub_598750(ts, mv);
	push(mv, &ts->esp, 0x782420);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77E190(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x5A8BD0);
	push(mv, &ts->esp, 0x5B0E30);
	push(mv, &ts->esp, 0x34026);
	mov(&ts->ecx, 0x86B580);
	game::sub_43C0B0(ts, mv);
	retn(mv, &ts->esp);
}

void sub_77E1B0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x5A8BD0);
	push(mv, &ts->esp, 0x5B0E30);
	push(mv, &ts->esp, 0x34027);
	mov(&ts->ecx, 0x86B4AC);
	game::sub_43C0B0(ts, mv);
	retn(mv, &ts->esp);
}

void sub_77E1D0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784250, 4));
	fdiv(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7A2794, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x872B40, 4));
	retn(mv, &ts->esp);
}

void sub_77E1F0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x5B8000);
	push(mv, &ts->esp, 0x5C1020);
	push(mv, &ts->esp, 0x6);
	push(mv, &ts->esp, 0x370);
	push(mv, &ts->esp, 0x874C40);
	game::sub_75C461(ts, mv);
	push(mv, &ts->esp, 0x782470);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77E220(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x872B4C);
	game::sub_598750(ts, mv);
	push(mv, &ts->esp, 0x7824A0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77E240(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8763B0);
	game::sub_57BCD0(ts, mv);
	push(mv, &ts->esp, 0x7824B0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void unknown_libname_139(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x872C00);
	goto sub_44F5A0;
}

void unknown_libname_140(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8760E0);
	goto sub_44F5A0;
}

void unknown_libname_141(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x872F20);
	goto sub_44F5A0;
}

void unknown_libname_142(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8718C0);
	goto sub_44F5A0;
}

void unknown_libname_143(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x870A20);
	goto sub_44F5A0;
}

void sub_77E2B0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, ts->esi);
	push(mv, &ts->esp, ts->edi);
	mov(&ts->esi, 0x871BE0);
	mov(&ts->edi, 0x6);
	lea(mv, &ts->esp, x86::mem(ts->esp, 4));

loc_77E2C0:
	mov(&ts->ecx, ts->esi);
	game::sub_44F5A0(ts, mv);
	add(&ts->esi, 0x290);
	dec(&ts->edi);
	if (!ts->eflags.zero) {
        goto loc_77E2C0;
    }
	pop(mv, &ts->esp, ts->edi);
	pop(mv, &ts->esp, ts->esi);
	retn(mv, &ts->esp);
}

void sub_77E2E0(x86::thread_state* ts, x86::memory_view* mv) {
	mov(mv, x86::mem(0x871B90, 2), 0x4000);
	retn(mv, &ts->esp);
}

void sub_77E2F0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784250, 4));
	fdiv(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7A27C8, 4));
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784560, 4));
	fmul(&ts->fp, x86::fp_index(0), x86::fp_index(1));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x876540, 4));
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7A2380, 4));
	fmul(&ts->fp, x86::fp_index(0), x86::fp_index(1));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x876544, 4));
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x78821C, 4));
	fmul(&ts->fp, x86::fp_index(0), x86::fp_index(1));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x876548, 4));
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7881FC, 4));
	fmul(&ts->fp, x86::fp_index(0), x86::fp_index(1));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x87654C, 4));
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7A45F0, 4));
	fmul(&ts->fp, x86::fp_index(0), x86::fp_index(1));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x876550, 4));
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x787AF4, 4));
	fmul(&ts->fp, x86::fp_index(0), x86::fp_index(1));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x876554, 4));
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x79C684, 4));
	fmul(&ts->fp, x86::fp_index(0), x86::fp_index(1));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x876558, 4));
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7A45EC, 4));
	fmul(&ts->fp, x86::fp_index(0), x86::fp_index(1));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x87655C, 4));
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x78F9DC, 4));
	fmul(&ts->fp, x86::fp_index(0), x86::fp_index(1));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x876560, 4));
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7A45E8, 4));
	fmul(&ts->fp, x86::fp_index(0), x86::fp_index(1));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x876564, 4));
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7850D8, 4));
	fmul(&ts->fp, x86::fp_index(0), x86::fp_index(1));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x876568, 4));
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7A45E4, 4));
	fmul(&ts->fp, x86::fp_index(0), x86::fp_index(1));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x87656C, 4));
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7881F8, 4));
	fmul(&ts->fp, x86::fp_index(0), x86::fp_index(1));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x876570, 4));
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7844E0, 4));
	fmul(&ts->fp, x86::fp_index(0), x86::fp_index(1));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x876574, 4));
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7881F0, 4));
	fmul(&ts->fp, x86::fp_index(0), x86::fp_index(1));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x876578, 4));
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x78B018, 4));
	fmul(&ts->fp, x86::fp_index(0), x86::fp_index(1));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x87657C, 4));
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7843E8, 4));
	fmul(&ts->fp, x86::fp_index(0), x86::fp_index(1));
	fst(mv, &ts->fp, x86::fp_index(0), x86::mem(0x876580, 4));
	fld(&ts->fp, x86::fp_index(0), x86::fp_index(1));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7859D0, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x876584, 4));
	fld(&ts->fp, x86::fp_index(0), x86::fp_index(1));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x788220, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x876588, 4));
	fld(&ts->fp, x86::fp_index(0), x86::fp_index(1));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7881F4, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x87658C, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x876590, 4));
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7844F8, 4));
	fmul(&ts->fp, x86::fp_index(0), x86::fp_index(1));
	fst(mv, &ts->fp, x86::fp_index(0), x86::mem(0x876594, 4));
	fld(&ts->fp, x86::fp_index(0), x86::fp_index(1));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x787ADC, 4));
	fst(mv, &ts->fp, x86::fp_index(0), x86::mem(0x876598, 4));
	fld(&ts->fp, x86::fp_index(0), x86::fp_index(2));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fst(mv, &ts->fp, x86::fp_index(0), x86::mem(0x87659C, 4));
	fld(&ts->fp, x86::fp_index(0), x86::fp_index(3));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8765A0, 4));
	fxch(&ts->fp, x86::fp_index(0), x86::fp_index(3));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8765A4, 4));
	fxch(&ts->fp, x86::fp_index(0), x86::fp_index(2));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8765A8, 4));
	fxch(&ts->fp, x86::fp_index(0), x86::fp_index(1));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8765AC, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8765B0, 4));
	retn(mv, &ts->esp);
}

void sub_77E470(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x782440);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77E480(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x872ED0);
	game::sub_598750(ts, mv);
	push(mv, &ts->esp, 0x7824C0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77E4A0(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x872B44);
	game::sub_57BCD0(ts, mv);
	push(mv, &ts->esp, 0x7824D0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77E4C0(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x870D28);
	game::sub_57BCD0(ts, mv);
	push(mv, &ts->esp, 0x7824E0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77E4E0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x7A45F4);
	game::sub_43DB50(ts, mv);
	add(&ts->esp, 0x4);
	mov(mv, x86::mem(0x870A18, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77E500(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x7A4604);
	game::sub_43DB50(ts, mv);
	add(&ts->esp, 0x4);
	mov(mv, x86::mem(0x8764C0, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77E520(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x5CF410);
	push(mv, &ts->esp, 0x5CF3F0);
	push(mv, &ts->esp, 0x10);
	push(mv, &ts->esp, 0xB8);
	push(mv, &ts->esp, 0x870D30);
	game::sub_75C461(ts, mv);
	push(mv, &ts->esp, 0x7824F0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void unknown_libname_144(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x870CB0);
	goto loc_5B7600;

loc_5B7600:
	mov(&ts->eax, ts->ecx);
	xor_(&ts->ecx, ts->ecx);
	mov(&ts->edx, 0x1);
	mov(mv, x86::mem(ts->eax + 0x6C, 4), ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x8, 4), ts->ecx);
	mov(mv, x86::mem(ts->eax + 0xC, 4), ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x10, 4), ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x14, 4), ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x20, 4), ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x24, 4), ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x3C, 4), ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x44, 4), ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x48, 4), ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x60, 4), ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x2C, 4), ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x30, 4), ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x34, 4), ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x40, 4), ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x4C, 4), ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x50, 4), ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x54, 4), ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x5C, 4), ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x58, 4), ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x68, 4), ts->edx);
	mov(mv, x86::mem(ts->eax + 0x28, 4), ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x74, 4), ts->ecx);
	mov(mv, x86::mem(ts->eax, 4), ts->edx);
	mov(mv, x86::mem(ts->eax + 0x4, 4), 0x78);
	mov(mv, x86::mem(ts->eax + 0x70, 4), ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x38, 4), ts->edx);
	mov(mv, x86::mem(ts->eax + 0x64, 4), ts->edx);
	retn(mv, &ts->esp);
}

void unknown_libname_145(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8764C8);
	goto loc_5B7600;

loc_5B7600:
	mov(&ts->eax, ts->ecx);
	xor_(&ts->ecx, ts->ecx);
	mov(&ts->edx, 0x1);
	mov(mv, x86::mem(ts->eax + 0x6C, 4), ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x8, 4), ts->ecx);
	mov(mv, x86::mem(ts->eax + 0xC, 4), ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x10, 4), ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x14, 4), ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x20, 4), ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x24, 4), ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x3C, 4), ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x44, 4), ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x48, 4), ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x60, 4), ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x2C, 4), ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x30, 4), ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x34, 4), ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x40, 4), ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x4C, 4), ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x50, 4), ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x54, 4), ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x5C, 4), ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x58, 4), ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x68, 4), ts->edx);
	mov(mv, x86::mem(ts->eax + 0x28, 4), ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x74, 4), ts->ecx);
	mov(mv, x86::mem(ts->eax, 4), ts->edx);
	mov(mv, x86::mem(ts->eax + 0x4, 4), 0x78);
	mov(mv, x86::mem(ts->eax + 0x70, 4), ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x38, 4), ts->edx);
	mov(mv, x86::mem(ts->eax + 0x64, 4), ts->edx);
	retn(mv, &ts->esp);
}

void sub_77E570(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x782450);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77E580(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8763D0);
	game::sub_5C8600(ts, mv);
	push(mv, &ts->esp, 0x782460);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77E5A0(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x871B94);
	game::sub_48B790(ts, mv);
	push(mv, &ts->esp, 0x782490);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77E5C0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784250, 4));
	fdiv(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7A4620, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x88EA70, 4));
	retn(mv, &ts->esp);
}

void sub_77E5E0(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x88EA68);
	game::sub_598750(ts, mv);
	push(mv, &ts->esp, 0x782580);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77E600(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x88FF98);
	game::sub_57BCD0(ts, mv);
	push(mv, &ts->esp, 0x782600);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77E620(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x88F270);
	game::sub_598750(ts, mv);
	push(mv, &ts->esp, 0x782610);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77E640(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x88F1BC);
	game::sub_598750(ts, mv);
	push(mv, &ts->esp, 0x782690);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77E660(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x88F748);
	game::sub_57BCD0(ts, mv);
	push(mv, &ts->esp, 0x782510);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77E680(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x88EA8C);
	game::sub_598750(ts, mv);
	push(mv, &ts->esp, 0x782590);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77E6A0(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x88F768);
	game::sub_5E81D0(ts, mv);
	push(mv, &ts->esp, 0x7826C0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77E6C0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x5E8660);
	push(mv, &ts->esp, 0x5E81C0);
	push(mv, &ts->esp, 0x80034130);
	mov(&ts->ecx, 0x88A2AC);
	game::sub_43C0B0(ts, mv);
	retn(mv, &ts->esp);
}

void sub_77E6E0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x5E8660);
	push(mv, &ts->esp, 0x5E81C0);
	push(mv, &ts->esp, 0x3412F);
	mov(&ts->ecx, 0x88E9EC);
	game::sub_43C0B0(ts, mv);
	retn(mv, &ts->esp);
}

void sub_77E700(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x88F740);
	game::sub_598750(ts, mv);
	push(mv, &ts->esp, 0x782620);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77E720(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x5D84D0);
	push(mv, &ts->esp, 0x5D8470);
	push(mv, &ts->esp, 0x34146);
	mov(&ts->ecx, 0x88EAC4);
	game::sub_43C0B0(ts, mv);
	retn(mv, &ts->esp);
}

void sub_77E740(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x5D3EF0);
	push(mv, &ts->esp, 0x5D3EB0);
	push(mv, &ts->esp, 0x34201);
	mov(&ts->ecx, 0x88F750);
	game::sub_43C0B0(ts, mv);
	retn(mv, &ts->esp);
}

void sub_77E760(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x88A320);
	game::sub_5E3F90(ts, mv);
	push(mv, &ts->esp, 0x7826A0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77E780(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x88F298);
	game::sub_5E08B0(ts, mv);
	push(mv, &ts->esp, 0x782630);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77E7A0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x5DEE00);
	push(mv, &ts->esp, 0x5DA490);
	push(mv, &ts->esp, 0x80034147);
	mov(&ts->ecx, 0x88E9CC);
	game::sub_43C0B0(ts, mv);
	retn(mv, &ts->esp);
}

void unknown_libname_146(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x88EB00);
	goto loc_5DEF40;

loc_5DEF40:
	push(mv, &ts->esp, ts->ebx);
	xor_(&ts->ebx, ts->ebx);
	push(mv, &ts->esp, ts->esi);
	mov(&ts->esi, ts->ecx);
	mov(mv, x86::mem(ts->esi, 4), ts->ebx);
	mov(mv, x86::mem(ts->esi + 0x4, 4), ts->ebx);
	mov(mv, x86::mem(ts->esi + 0x8, 4), ts->ebx);
	mov(mv, x86::mem(ts->esi + 0xC, 4), ts->ebx);
	mov(mv, x86::mem(ts->esi + 0x1C, 4), ts->ebx);
	mov(mv, x86::mem(ts->esi + 0x20, 4), ts->ebx);
	mov(mv, x86::mem(ts->esi + 0x24, 4), ts->ebx);
	mov(mv, x86::mem(ts->esi + 0x28, 4), ts->ebx);
	mov(mv, x86::mem(ts->esi + 0x2C, 4), ts->ebx);
	mov(mv, x86::mem(ts->esi + 0x14, 4), ts->ebx);
	mov(mv, x86::mem(ts->esi + 0x18, 4), ts->ebx);
	mov(mv, x86::mem(ts->esi + 0x298, 4), ts->ebx);
	mov(mv, x86::mem(ts->esi + 0x288, 1), ts->bl);
	mov(mv, x86::mem(ts->esi + 0x289, 1), ts->bl);
	mov(mv, x86::mem(ts->esi + 0x28C, 4), ts->ebx);
	mov(mv, x86::mem(ts->esi + 0x290, 4), ts->ebx);
	mov(mv, x86::mem(ts->esi + 0x294, 1), ts->bl);
	game::sub_5DA890(ts, mv);
	mov(mv, x86::mem(ts->esi + 0xC4, 1), ts->bl);
	mov(mv, x86::mem(ts->esi + 0x120, 1), ts->bl);
	or_(&ts->eax, 0xFFFFFFFF);
	mov(mv, x86::mem(ts->esi + 0xB0, 4), ts->eax);
	mov(mv, x86::mem(ts->esi + 0x10C, 4), ts->eax);
	mov(mv, x86::mem(ts->esi + 0x69C, 4), ts->ebx);
	mov(mv, x86::mem(ts->esi + 0x6A0, 4), ts->ebx);
	mov(mv, x86::mem(ts->esi + 0x6A4, 4), ts->ebx);
	mov(mv, x86::mem(ts->esi + 0x6A8, 4), ts->ebx);
	lea(mv, &ts->ecx, x86::mem(ts->esi + 0x6AC, 4));
	xor_(&ts->eax, ts->eax);
	mov(mv, x86::mem(ts->ecx, 4), ts->eax);
	mov(mv, x86::mem(ts->ecx + 0x4, 4), ts->eax);
	mov(mv, x86::mem(ts->esi + 0x6B4, 4), ts->ebx);
	mov(mv, x86::mem(ts->esi + 0x6B8, 4), ts->ebx);
	mov(&ts->eax, ts->esi);
	pop(mv, &ts->esp, ts->esi);
	pop(mv, &ts->esp, ts->ebx);
	retn(mv, &ts->esp);
}

void sub_77E7D0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x5E4E60);
	push(mv, &ts->esp, 0x5DEF30);
	push(mv, &ts->esp, 0x34110);
	mov(&ts->ecx, 0x88EAB4);
	game::sub_43C0B0(ts, mv);
	retn(mv, &ts->esp);
}

void sub_77E7F0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x5E4E60);
	push(mv, &ts->esp, 0x5DEF30);
	push(mv, &ts->esp, 0x34113);
	mov(&ts->ecx, 0x88E9DC);
	game::sub_43C0B0(ts, mv);
	retn(mv, &ts->esp);
}

void sub_77E810(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x5E4E60);
	push(mv, &ts->esp, 0x5DEF30);
	push(mv, &ts->esp, 0x34111);
	mov(&ts->ecx, 0x88F27C);
	game::sub_43C0B0(ts, mv);
	retn(mv, &ts->esp);
}

void sub_77E830(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x5E4E60);
	push(mv, &ts->esp, 0x5DEF30);
	push(mv, &ts->esp, 0x34112);
	mov(&ts->ecx, 0x88EA74);
	game::sub_43C0B0(ts, mv);
	retn(mv, &ts->esp);
}

void sub_77E850(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x88EAD4);
	game::sub_598750(ts, mv);
	push(mv, &ts->esp, 0x782640);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77E870(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x88F760);
	game::sub_598750(ts, mv);
	push(mv, &ts->esp, 0x7825D0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77E890(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x5D6440);
	push(mv, &ts->esp, 0x5DB2E0);
	push(mv, &ts->esp, 0x34108);
	mov(&ts->ecx, 0x88EAA4);
	game::sub_43C0B0(ts, mv);
	retn(mv, &ts->esp);
}

void sub_77E8B0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x5DFBA0);
	push(mv, &ts->esp, 0x5DF8A0);
	push(mv, &ts->esp, 0x80034100);
	mov(&ts->ecx, 0x88E9B4);
	game::sub_43C0B0(ts, mv);
	retn(mv, &ts->esp);
}

void sub_77E8D0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x5DFBA0);
	push(mv, &ts->esp, 0x5DF8A0);
	push(mv, &ts->esp, 0x34107);
	mov(&ts->ecx, 0x88EA94);
	game::sub_43C0B0(ts, mv);
	retn(mv, &ts->esp);
}

void sub_77E8F0(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x883E70);
	game::sub_5E6360(ts, mv);
	push(mv, &ts->esp, 0x7826B0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77E910(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x4DEF30);
	push(mv, &ts->esp, 0x598750);
	push(mv, &ts->esp, 0x8);
	push(mv, &ts->esp, 0x8);
	push(mv, &ts->esp, 0x88F1C8);
	game::sub_75C461(ts, mv);
	push(mv, &ts->esp, 0x782650);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77E940(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x7A534C);
	mov(&ts->ecx, 0x88A2C0);
	game::sub_60B7E0(ts, mv);
	push(mv, &ts->esp, 0x7A534C);
	mov(&ts->ecx, 0x88A2F0);
	game::sub_60B7E0(ts, mv);
	push(mv, &ts->esp, 0x782520);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77E970(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x7A5364);
	mov(&ts->ecx, 0x88EA08);
	game::sub_60B7E0(ts, mv);
	push(mv, &ts->esp, 0x7A5364);
	mov(&ts->ecx, 0x88EA38);
	game::sub_60B7E0(ts, mv);
	push(mv, &ts->esp, 0x782540);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77E9A0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x7A5378);
	mov(&ts->ecx, 0x88F210);
	game::sub_60B7E0(ts, mv);
	push(mv, &ts->esp, 0x7A5378);
	mov(&ts->ecx, 0x88F240);
	game::sub_60B7E0(ts, mv);
	push(mv, &ts->esp, 0x782560);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77E9D0(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x88F28C);
	game::sub_598750(ts, mv);
	push(mv, &ts->esp, 0x782670);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77E9F0(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x88FFA0);
	game::sub_598750(ts, mv);
	push(mv, &ts->esp, 0x782680);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77EA10(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x88E9C4);
	game::sub_598750(ts, mv);
	push(mv, &ts->esp, 0x7825E0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77EA30(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x88F208);
	game::sub_598750(ts, mv);
	push(mv, &ts->esp, 0x7825F0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void unknown_libname_147(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x88F278);
	goto loc_5D7B80;

loc_5D7B80:
	push(mv, &ts->esp, ts->esi);
	push(mv, &ts->esp, ts->edi);
	mov(&ts->edi, ts->ecx);
	mov(&ts->esi, 0x800EE4);
	lea(mv, &ts->esp, x86::mem(ts->esp, 4));

loc_5D7B90:
	mov(mv, &ts->eax, x86::mem(ts->esi - 0x4, 4));
	push(mv, &ts->esp, ts->eax);
	game::sub_43DB50(ts, mv);
	mov(mv, x86::mem(ts->esi, 4), ts->eax);
	add(&ts->esi, 0x98);
	add(&ts->esp, 0x4);
	cmp(&ts->eflags, ts->esi, 0x80201C);
	if (ts->eflags.sign != ts->eflags.overflow) {
        goto loc_5D7B90;
    }
	mov(&ts->eax, ts->edi);
	pop(mv, &ts->esp, ts->edi);
	pop(mv, &ts->esp, ts->esi);
	retn(mv, &ts->esp);
}

void sub_77EA60(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x88E9FC);
	game::sub_598750(ts, mv);
	push(mv, &ts->esp, 0x7825A0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77EA80(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x88EA84);
	game::sub_598750(ts, mv);
	push(mv, &ts->esp, 0x7825B0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77EAA0(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x88EADC);
	game::sub_598750(ts, mv);
	push(mv, &ts->esp, 0x7825C0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77EAC0(x86::thread_state* ts, x86::memory_view* mv) {
	mov(mv, &ts->eax, x86::mem(0x7A481C, 4));
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7A481C, 4));
	fchs(&ts->fp, x86::fp_index(0));
	mov(&ts->ecx, ts->eax);
	mov(&ts->edx, ts->eax);
	fst(mv, &ts->fp, x86::fp_index(0), x86::mem(0x88FFB8, 4));
	fst(mv, &ts->fp, x86::fp_index(0), x86::mem(0x88FFC0, 4));
	mov(mv, x86::mem(0x88FFB0, 4), ts->eax);
	fst(mv, &ts->fp, x86::fp_index(0), x86::mem(0x88FFC4, 4));
	mov(mv, x86::mem(0x88FFB4, 4), ts->ecx);
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x88FFCC, 4));
	mov(mv, x86::mem(0x88FFBC, 4), ts->edx);
	mov(mv, x86::mem(0x88FFC8, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77EB00(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784250, 4));
	fdiv(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7A5470, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x89CF08, 4));
	retn(mv, &ts->esp);
}

void sub_77EB20(x86::thread_state* ts, x86::memory_view* mv) {
	mov(mv, &ts->eax, x86::mem(0x7A5488, 4));
	mov(mv, &ts->edx, x86::mem(0x7A5480, 4));
	mov(&ts->ecx, ts->eax);
	mov(mv, x86::mem(0x8025E4, 4), ts->ecx);
	mov(mv, &ts->ecx, x86::mem(0x7A5484, 4));
	mov(mv, x86::mem(0x8025E0, 4), ts->eax);
	mov(&ts->eax, ts->edx);
	mov(mv, x86::mem(0x802618, 4), ts->edx);
	mov(&ts->edx, ts->ecx);
	mov(mv, x86::mem(0x80261C, 4), ts->eax);
	mov(mv, x86::mem(0x802620, 4), ts->ecx);
	mov(mv, x86::mem(0x802624, 4), ts->edx);
	retn(mv, &ts->esp);
}

void sub_77EB60(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x7864E8);
	game::sub_43DB50(ts, mv);
	add(&ts->esp, 0x4);
	mov(mv, x86::mem(0x89CF2C, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77EB80(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x7864FC);
	game::sub_43DB50(ts, mv);
	add(&ts->esp, 0x4);
	mov(mv, x86::mem(0x89CCEC, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77EBA0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x786510);
	game::sub_43DB50(ts, mv);
	add(&ts->esp, 0x4);
	mov(mv, x86::mem(0x89CCF0, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77EBC0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x786520);
	game::sub_43DB50(ts, mv);
	add(&ts->esp, 0x4);
	mov(mv, x86::mem(0x89CCE0, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77EBE0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x786530);
	game::sub_43DB50(ts, mv);
	add(&ts->esp, 0x4);
	mov(mv, x86::mem(0x89E78C, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77EC00(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x786548);
	game::sub_43DB50(ts, mv);
	add(&ts->esp, 0x4);
	mov(mv, x86::mem(0x89CF20, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77EC20(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x786560);
	game::sub_43DB50(ts, mv);
	add(&ts->esp, 0x4);
	mov(mv, x86::mem(0x890158, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77EC40(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x78657C);
	game::sub_43DB50(ts, mv);
	add(&ts->esp, 0x4);
	mov(mv, x86::mem(0x89E820, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77EC60(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x786598);
	game::sub_43DB50(ts, mv);
	add(&ts->esp, 0x4);
	mov(mv, x86::mem(0x89CF14, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77EC80(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x4);
	push(mv, &ts->esp, 0x8023A0);
	mov(&ts->ecx, 0x89CF24);
	game::sub_576770(ts, mv);
	retn(mv, &ts->esp);
}

void sub_77ECA0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x4);
	push(mv, &ts->esp, 0x8023D0);
	mov(&ts->ecx, 0x89CF30);
	game::sub_576770(ts, mv);
	retn(mv, &ts->esp);
}

void sub_77ECC0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x2);
	push(mv, &ts->esp, 0x802404);
	mov(&ts->ecx, 0x89E790);
	game::sub_576770(ts, mv);
	retn(mv, &ts->esp);
}

void sub_77ECE0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x2);
	push(mv, &ts->esp, 0x802414);
	mov(&ts->ecx, 0x89E824);
	game::sub_576770(ts, mv);
	retn(mv, &ts->esp);
}

void sub_77ED00(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x2);
	push(mv, &ts->esp, 0x802424);
	mov(&ts->ecx, 0x89CF18);
	game::sub_576770(ts, mv);
	retn(mv, &ts->esp);
}

void sub_77ED20(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x2);
	push(mv, &ts->esp, 0x802434);
	mov(&ts->ecx, 0x890150);
	game::sub_576770(ts, mv);
	retn(mv, &ts->esp);
}

void sub_77ED40(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x2);
	push(mv, &ts->esp, 0x802444);
	mov(&ts->ecx, 0x89E798);
	game::sub_576770(ts, mv);
	retn(mv, &ts->esp);
}

void sub_77ED60(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x4);
	push(mv, &ts->esp, 0x802570);
	mov(&ts->ecx, 0x89CCE4);
	game::sub_576770(ts, mv);
	retn(mv, &ts->esp);
}

void sub_77ED80(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x3);
	push(mv, &ts->esp, 0x802590);
	mov(&ts->ecx, 0x89CF0C);
	game::sub_576770(ts, mv);
	retn(mv, &ts->esp);
}

void unknown_libname_148(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x89E7A0);
	goto sub_5ED5F0;
}

void sub_77EDB0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x50F7D0);
	push(mv, &ts->esp, 0x5F0D00);
	push(mv, &ts->esp, 0x16);
	push(mv, &ts->esp, 0x940);
	push(mv, &ts->esp, 0x890160);
	game::sub_75C461(ts, mv);
	push(mv, &ts->esp, 0x7826D0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77EDE0(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x89CF48);
	game::sub_5F9050(ts, mv);
	push(mv, &ts->esp, 0x7826F0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77EE00(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8A2B50);
	game::sub_598750(ts, mv);
	push(mv, &ts->esp, 0x782840);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77EE20(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784250, 4));
	fdiv(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7A65C8, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A2CE0, 4));
	retn(mv, &ts->esp);
}

void sub_77EE40(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7A65CC, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A3160, 4));
	retn(mv, &ts->esp);
}

void sub_77EE50(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7A65CC, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784260, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A3164, 4));
	retn(mv, &ts->esp);
}

void sub_77EE70(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7A65D0, 8));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A3158, 8));
	retn(mv, &ts->esp);
}

void sub_77EE80(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7A65D0, 8));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7864E0, 8));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A3150, 8));
	retn(mv, &ts->esp);
}

void sub_77EEA0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x7A8DA8);
	game::sub_43DB50(ts, mv);
	add(&ts->esp, 0x4);
	mov(mv, x86::mem(0x8A31E0, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77EEC0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x7A8DB8);
	game::sub_43DB50(ts, mv);
	add(&ts->esp, 0x4);
	mov(mv, x86::mem(0x8A3B00, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77EEE0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x7A8DC8);
	game::sub_43DB50(ts, mv);
	add(&ts->esp, 0x4);
	mov(mv, x86::mem(0x8A1D90, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77EF00(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8A2CA4);
	game::sub_598750(ts, mv);
	push(mv, &ts->esp, 0x7828A0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77EF20(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x7A9114);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A9100);
	mov(mv, x86::mem(0x8A4358, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A90EC);
	mov(mv, x86::mem(0x8A435C, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A90E0);
	mov(mv, x86::mem(0x8A4360, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A90D0);
	mov(mv, x86::mem(0x8A4364, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A90C4);
	mov(mv, x86::mem(0x8A4368, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A90AC);
	mov(mv, x86::mem(0x8A436C, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A909C);
	mov(mv, x86::mem(0x8A4370, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A9088);
	mov(mv, x86::mem(0x8A4374, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A9074);
	mov(mv, x86::mem(0x8A4378, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A905C);
	mov(mv, x86::mem(0x8A437C, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A9048);
	mov(mv, x86::mem(0x8A4380, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A9034);
	mov(mv, x86::mem(0x8A4384, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A9028);
	mov(mv, x86::mem(0x8A4388, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A9010);
	mov(mv, x86::mem(0x8A438C, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A8FFC);
	mov(mv, x86::mem(0x8A4390, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	add(&ts->esp, 0x40);
	push(mv, &ts->esp, 0x7A8FE8);
	mov(mv, x86::mem(0x8A4394, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A8FD4);
	mov(mv, x86::mem(0x8A4398, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A8FBC);
	mov(mv, x86::mem(0x8A439C, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A8FA8);
	mov(mv, x86::mem(0x8A43A0, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A8F9C);
	mov(mv, x86::mem(0x8A43A4, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A8F88);
	mov(mv, x86::mem(0x8A43A8, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A8F74);
	mov(mv, x86::mem(0x8A43AC, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A8F5C);
	mov(mv, x86::mem(0x8A43B0, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A8F44);
	mov(mv, x86::mem(0x8A43B4, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A8F28);
	mov(mv, x86::mem(0x8A43B8, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A8F10);
	mov(mv, x86::mem(0x8A43BC, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	add(&ts->esp, 0x2C);
	mov(mv, x86::mem(0x8A43C0, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77F0C0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x7A9208);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A91F4);
	mov(mv, x86::mem(0x8A4324, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A91E0);
	mov(mv, x86::mem(0x8A4328, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A91CC);
	mov(mv, x86::mem(0x8A432C, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A91B8);
	mov(mv, x86::mem(0x8A4330, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A91A4);
	mov(mv, x86::mem(0x8A4334, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A9190);
	mov(mv, x86::mem(0x8A4338, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A917C);
	mov(mv, x86::mem(0x8A433C, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A9168);
	mov(mv, x86::mem(0x8A4340, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A9154);
	mov(mv, x86::mem(0x8A4344, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A913C);
	mov(mv, x86::mem(0x8A4348, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A9124);
	mov(mv, x86::mem(0x8A434C, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	add(&ts->esp, 0x30);
	mov(mv, x86::mem(0x8A4350, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77F180(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x782720);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77F190(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8A1DE4);
	game::sub_4AFAF0(ts, mv);
	push(mv, &ts->esp, 0x7827E0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77F1B0(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8A3168);
	game::sub_4AFAF0(ts, mv);
	push(mv, &ts->esp, 0x7827F0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77F1D0(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8A30F0);
	game::sub_598750(ts, mv);
	push(mv, &ts->esp, 0x7828B0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77F1F0(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8A1DFC);
	game::sub_4AFAF0(ts, mv);
	push(mv, &ts->esp, 0x782800);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77F210(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8A1F10);
	game::sub_4AFAF0(ts, mv);
	push(mv, &ts->esp, 0x782810);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77F230(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->eax, 0x8A2CB4);
	mov(&ts->edx, 0x2);
	xor_(&ts->ecx, ts->ecx);
	lea(mv, &ts->esp, x86::mem(ts->esp, 4));

loc_77F240:
	mov(mv, x86::mem(ts->eax - 0x8, 4), ts->ecx);
	mov(mv, x86::mem(ts->eax - 0x4, 4), ts->ecx);
	mov(mv, x86::mem(ts->eax, 4), ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x4, 4), ts->ecx);
	add(&ts->eax, 0x10);
	dec(&ts->edx);
	if (!ts->eflags.zero) {
        goto loc_77F240;
    }
	retn(mv, &ts->esp);
}

void sub_77F260(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->eax, 0x8A3130);
	mov(&ts->edx, 0x2);
	xor_(&ts->ecx, ts->ecx);
	lea(mv, &ts->esp, x86::mem(ts->esp, 4));

loc_77F270:
	mov(mv, x86::mem(ts->eax - 0x8, 4), ts->ecx);
	mov(mv, x86::mem(ts->eax - 0x4, 4), ts->ecx);
	mov(mv, x86::mem(ts->eax, 4), ts->ecx);
	mov(mv, x86::mem(ts->eax + 0x4, 4), ts->ecx);
	add(&ts->eax, 0x10);
	dec(&ts->edx);
	if (!ts->eflags.zero) {
        goto loc_77F270;
    }
	retn(mv, &ts->esp);
}

void sub_77F290(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8A2B68);
	game::sub_636AC0(ts, mv);
	push(mv, &ts->esp, 0x782850);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77F2B0(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8A31E4);
	game::sub_598750(ts, mv);
	push(mv, &ts->esp, 0x782860);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77F2D0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, ts->esi);
	push(mv, &ts->esp, ts->edi);
	push(mv, &ts->esp, 0x7A9340);
	game::sub_43DB50(ts, mv);
	mov(&ts->edi, 0x5);
	push(mv, &ts->esp, 0x7A9340);
	mov(mv, x86::mem(0x8A4418, 4), ts->eax);
	mov(mv, x86::mem(0x8A441C, 4), ts->edi);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A932C);
	mov(mv, x86::mem(0x8A4420, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A9318);
	mov(mv, x86::mem(0x8A4424, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A9304);
	mov(mv, x86::mem(0x8A4428, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A92F0);
	mov(mv, x86::mem(0x8A442C, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	xor_(&ts->esi, ts->esi);
	push(mv, &ts->esp, 0x7A92DC);
	mov(mv, x86::mem(0x8A4430, 4), ts->eax);
	mov(mv, x86::mem(0x8A4434, 4), ts->esi);
	mov(mv, x86::mem(0x8A4438, 4), ts->esi);
	mov(mv, x86::mem(0x8A443C, 4), ts->esi);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A92DC);
	mov(mv, x86::mem(0x8A4440, 4), ts->eax);
	mov(mv, x86::mem(0x8A4444, 4), ts->edi);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A9340);
	mov(mv, x86::mem(0x8A4448, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A92C8);
	mov(mv, x86::mem(0x8A444C, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A92B4);
	mov(mv, x86::mem(0x8A4450, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A92A4);
	mov(mv, x86::mem(0x8A4454, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A92C8);
	mov(mv, x86::mem(0x8A4458, 4), ts->eax);
	mov(mv, x86::mem(0x8A445C, 4), ts->esi);
	mov(mv, x86::mem(0x8A4460, 4), ts->esi);
	mov(mv, x86::mem(0x8A4464, 4), ts->esi);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A92C8);
	mov(mv, x86::mem(0x8A4468, 4), ts->eax);
	mov(mv, x86::mem(0x8A446C, 4), ts->edi);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A9318);
	mov(mv, x86::mem(0x8A4470, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A9304);
	mov(mv, x86::mem(0x8A4474, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	add(&ts->esp, 0x40);
	push(mv, &ts->esp, 0x7A9290);
	mov(mv, x86::mem(0x8A4478, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A927C);
	mov(mv, x86::mem(0x8A447C, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A9268);
	mov(mv, x86::mem(0x8A4480, 4), ts->eax);
	mov(mv, x86::mem(0x8A4484, 4), ts->esi);
	mov(mv, x86::mem(0x8A4488, 4), ts->esi);
	mov(mv, x86::mem(0x8A448C, 4), ts->esi);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A9268);
	mov(mv, x86::mem(0x8A4490, 4), ts->eax);
	mov(mv, x86::mem(0x8A4494, 4), ts->edi);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A9340);
	mov(mv, x86::mem(0x8A4498, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	mov(mv, x86::mem(0x8A449C, 4), ts->eax);
	push(mv, &ts->esp, 0x7A9254);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A92C8);
	mov(mv, x86::mem(0x8A44A0, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A9304);
	mov(mv, x86::mem(0x8A44A4, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A9240);
	mov(mv, x86::mem(0x8A44A8, 4), ts->eax);
	mov(mv, x86::mem(0x8A44AC, 4), ts->esi);
	mov(mv, x86::mem(0x8A44B0, 4), ts->esi);
	mov(mv, x86::mem(0x8A44B4, 4), ts->esi);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A9240);
	mov(mv, x86::mem(0x8A44B8, 4), ts->eax);
	mov(mv, x86::mem(0x8A44BC, 4), ts->edi);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A9340);
	mov(mv, x86::mem(0x8A44C0, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A932C);
	mov(mv, x86::mem(0x8A44C4, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A922C);
	mov(mv, x86::mem(0x8A44C8, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A921C);
	mov(mv, x86::mem(0x8A44CC, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	add(&ts->esp, 0x38);
	pop(mv, &ts->esp, ts->edi);
	mov(mv, x86::mem(0x8A44D4, 4), ts->esi);
	mov(mv, x86::mem(0x8A44D8, 4), ts->esi);
	mov(mv, x86::mem(0x8A44DC, 4), ts->esi);
	mov(mv, x86::mem(0x8A44D0, 4), ts->eax);
	pop(mv, &ts->esp, ts->esi);
	retn(mv, &ts->esp);
}

void sub_77F520(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x7A8C98);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A8CC0);
	mov(mv, x86::mem(0x8A43C8, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A8CAC);
	mov(mv, x86::mem(0x8A43CC, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A8CD4);
	mov(mv, x86::mem(0x8A43D0, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A8C98);
	mov(mv, x86::mem(0x8A43D4, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A8CC0);
	mov(mv, x86::mem(0x8A43D8, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A93F4);
	mov(mv, x86::mem(0x8A43DC, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A93E0);
	mov(mv, x86::mem(0x8A43E0, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A8CC0);
	mov(mv, x86::mem(0x8A43E4, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A93F4);
	mov(mv, x86::mem(0x8A43E8, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A93E0);
	mov(mv, x86::mem(0x8A43EC, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A93CC);
	mov(mv, x86::mem(0x8A43F0, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A8CC0);
	mov(mv, x86::mem(0x8A43F4, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A93B8);
	mov(mv, x86::mem(0x8A43F8, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A93A4);
	mov(mv, x86::mem(0x8A43FC, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A9390);
	mov(mv, x86::mem(0x8A4400, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	add(&ts->esp, 0x40);
	push(mv, &ts->esp, 0x7A8CC0);
	mov(mv, x86::mem(0x8A4404, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A937C);
	mov(mv, x86::mem(0x8A4408, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A9368);
	mov(mv, x86::mem(0x8A440C, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	push(mv, &ts->esp, 0x7A9354);
	mov(mv, x86::mem(0x8A4410, 4), ts->eax);
	game::sub_43DB50(ts, mv);
	add(&ts->esp, 0x10);
	mov(mv, x86::mem(0x8A4414, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_77F660(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8A3288);
	game::sub_637940(ts, mv);
	push(mv, &ts->esp, 0x782870);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77F680(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8A3148);
	game::sub_598750(ts, mv);
	push(mv, &ts->esp, 0x782880);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77F6A0(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8A2C9C);
	game::sub_598750(ts, mv);
	push(mv, &ts->esp, 0x7828C0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77F6C0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x803940, 4));
	fadd(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784250, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A1DE0, 4));
	retn(mv, &ts->esp);
}

void sub_77F6E0(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8A4260);
	game::sub_598750(ts, mv);
	push(mv, &ts->esp, 0x782890);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77F700(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x7A9408);
	mov(&ts->ecx, 0x8A1F28);
	game::sub_60B780(ts, mv);
	push(mv, &ts->esp, 0x782730);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77F720(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x4022C0);
	push(mv, &ts->esp, 0x502FD0);
	push(mv, &ts->esp, 0x1);
	push(mv, &ts->esp, 0x64);
	push(mv, &ts->esp, 0x8A42C0);
	game::sub_75C461(ts, mv);
	push(mv, &ts->esp, 0x782820);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77F750(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x7A9410);
	mov(&ts->ecx, 0x8A3180);
	game::sub_60B7E0(ts, mv);
	push(mv, &ts->esp, 0x7A9410);
	mov(&ts->ecx, 0x8A31B0);
	game::sub_60B7E0(ts, mv);
	push(mv, &ts->esp, 0x782740);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77F780(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x7A9418);
	mov(&ts->ecx, 0x8A1E90);
	game::sub_60B7E0(ts, mv);
	push(mv, &ts->esp, 0x7A9418);
	mov(&ts->ecx, 0x8A1EC0);
	game::sub_60B7E0(ts, mv);
	push(mv, &ts->esp, 0x782760);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77F7B0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x7A9424);
	mov(&ts->ecx, 0x8A31F0);
	game::sub_60B7E0(ts, mv);
	push(mv, &ts->esp, 0x7A9424);
	mov(&ts->ecx, 0x8A3220);
	game::sub_60B7E0(ts, mv);
	push(mv, &ts->esp, 0x782780);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77F7E0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x7A9438);
	mov(&ts->ecx, 0x8A1E30);
	game::sub_60B7E0(ts, mv);
	push(mv, &ts->esp, 0x7A9438);
	mov(&ts->ecx, 0x8A1E60);
	game::sub_60B7E0(ts, mv);
	push(mv, &ts->esp, 0x7827A0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77F810(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x7A944C);
	mov(&ts->ecx, 0x8A3250);
	game::sub_60B780(ts, mv);
	push(mv, &ts->esp, 0x7A944C);
	mov(&ts->ecx, 0x8A326C);
	game::sub_60B780(ts, mv);
	push(mv, &ts->esp, 0x7827C0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77F840(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7BFDF8, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A710C, 4));
	retn(mv, &ts->esp);
}

void sub_77F850(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7BFDF8, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784260, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A7108, 4));
	retn(mv, &ts->esp);
}

void sub_77F870(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7BFE00, 8));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A7100, 8));
	retn(mv, &ts->esp);
}

void sub_77F880(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7BFE00, 8));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7864E0, 8));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A70F8, 8));
	retn(mv, &ts->esp);
}

void sub_77F8A0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7BFE08, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A713C, 4));
	retn(mv, &ts->esp);
}

void sub_77F8B0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7BFE08, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784260, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A7138, 4));
	retn(mv, &ts->esp);
}

void sub_77F8D0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7BFE10, 8));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A7130, 8));
	retn(mv, &ts->esp);
}

void sub_77F8E0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7BFE10, 8));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7864E0, 8));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A7128, 8));
	retn(mv, &ts->esp);
}

void sub_77F900(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8A7114);
	game::sub_6D8360(ts, mv);
	push(mv, &ts->esp, 0x7828D0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77F920(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8A7168);
	game::sub_6D8360(ts, mv);
	mov(&ts->ecx, 0x8A717C);
	game::sub_6D8360(ts, mv);
	push(mv, &ts->esp, 0x7828E0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77F940(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8A7140);
	game::sub_6D8360(ts, mv);
	mov(&ts->ecx, 0x8A7154);
	game::sub_6D8360(ts, mv);
	push(mv, &ts->esp, 0x7828F0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_77F960(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C05C0, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A71AC, 4));
	retn(mv, &ts->esp);
}

void sub_77F970(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C05C0, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784260, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A71A8, 4));
	retn(mv, &ts->esp);
}

void sub_77F990(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C05C8, 8));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A71A0, 8));
	retn(mv, &ts->esp);
}

void sub_77F9A0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C05C8, 8));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7864E0, 8));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A7198, 8));
	retn(mv, &ts->esp);
}

void sub_77F9C0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C05D8, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A71CC, 4));
	retn(mv, &ts->esp);
}

void sub_77F9D0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C05D8, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784260, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A71C8, 4));
	retn(mv, &ts->esp);
}

void sub_77F9F0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C05E0, 8));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A71C0, 8));
	retn(mv, &ts->esp);
}

void sub_77FA00(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C05E0, 8));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7864E0, 8));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A71B8, 8));
	retn(mv, &ts->esp);
}

void sub_77FA20(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C05F0, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A71E4, 4));
	retn(mv, &ts->esp);
}

void sub_77FA30(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C05F0, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784260, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A71E0, 4));
	retn(mv, &ts->esp);
}

void sub_77FA50(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C05F8, 8));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A71D8, 8));
	retn(mv, &ts->esp);
}

void sub_77FA60(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C05F8, 8));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7864E0, 8));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A71D0, 8));
	retn(mv, &ts->esp);
}

void sub_77FA80(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C0638, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A7204, 4));
	retn(mv, &ts->esp);
}

void sub_77FA90(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C0638, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784260, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A7200, 4));
	retn(mv, &ts->esp);
}

void sub_77FAB0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C0640, 8));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A71F8, 8));
	retn(mv, &ts->esp);
}

void sub_77FAC0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C0640, 8));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7864E0, 8));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A71F0, 8));
	retn(mv, &ts->esp);
}

void sub_77FAE0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C0648, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A721C, 4));
	retn(mv, &ts->esp);
}

void sub_77FAF0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C0648, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784260, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A7218, 4));
	retn(mv, &ts->esp);
}

void sub_77FB10(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C0650, 8));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A7210, 8));
	retn(mv, &ts->esp);
}

void sub_77FB20(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C0650, 8));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7864E0, 8));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A7208, 8));
	retn(mv, &ts->esp);
}

void sub_77FB40(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C0658, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A7304, 4));
	retn(mv, &ts->esp);
}

void sub_77FB50(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C0658, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784260, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A7300, 4));
	retn(mv, &ts->esp);
}

void sub_77FB70(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C0660, 8));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A72F8, 8));
	retn(mv, &ts->esp);
}

void sub_77FB80(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C0660, 8));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7864E0, 8));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A72F0, 8));
	retn(mv, &ts->esp);
}

void sub_77FBA0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C0770, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A79DC, 4));
	retn(mv, &ts->esp);
}

void sub_77FBB0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C0770, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784260, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A79D8, 4));
	retn(mv, &ts->esp);
}

void sub_77FBD0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C0778, 8));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A79D0, 8));
	retn(mv, &ts->esp);
}

void sub_77FBE0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C0778, 8));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7864E0, 8));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A79C8, 8));
	retn(mv, &ts->esp);
}

void sub_77FC00(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, ts->esi);
	mov(mv, &ts->esi, x86::mem(0x783138, 4));
	push(mv, &ts->esp, 0x0);
	call(ts, mv, ts->esi);
	push(mv, &ts->esp, 0x7F00);
	push(mv, &ts->esp, 0x0);
	mov(mv, x86::mem(0x80C0CC, 4), ts->eax);
	call(ts, mv, ts->esi);
	push(mv, &ts->esp, ts->eax);
	call(ts, mv, x86::mem(0x783338, 4));
	push(mv, &ts->esp, 0x7F00);
	push(mv, &ts->esp, 0x0);
	mov(mv, x86::mem(0x80C0D0, 4), ts->eax);
	call(ts, mv, x86::mem(0x78333C, 4));
	mov(mv, x86::mem(0x80C0D4, 4), ts->eax);
	mov(mv, x86::mem(0x80C0D8, 4), 0x0);
	mov(mv, x86::mem(0x80C0DC, 4), 0x0);
	mov(mv, x86::mem(0x80C0E0, 4), 0x7C08EC);
	mov(mv, x86::mem(0x80C0E4, 4), 0x0);
	pop(mv, &ts->esp, ts->esi);
	retn(mv, &ts->esp);
}

void sub_77FC70(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C0968, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A79F4, 4));
	retn(mv, &ts->esp);
}

void sub_77FC80(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C0968, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784260, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A79F0, 4));
	retn(mv, &ts->esp);
}

void sub_77FCA0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C0970, 8));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A79E8, 8));
	retn(mv, &ts->esp);
}

void sub_77FCB0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C0970, 8));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7864E0, 8));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A79E0, 8));
	retn(mv, &ts->esp);
}

void sub_77FCD0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C0980, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A7A0C, 4));
	retn(mv, &ts->esp);
}

void sub_77FCE0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C0980, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784260, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A7A08, 4));
	retn(mv, &ts->esp);
}

void sub_77FD00(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C0988, 8));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A7A00, 8));
	retn(mv, &ts->esp);
}

void sub_77FD10(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C0988, 8));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7864E0, 8));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A79F8, 8));
	retn(mv, &ts->esp);
}

void sub_77FD30(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C0998, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A7AA4, 4));
	retn(mv, &ts->esp);
}

void sub_77FD40(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C0998, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784260, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A7AA0, 4));
	retn(mv, &ts->esp);
}

void sub_77FD60(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C09A0, 8));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A7A98, 8));
	retn(mv, &ts->esp);
}

void sub_77FD70(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C09A0, 8));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7864E0, 8));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A7A90, 8));
	retn(mv, &ts->esp);
}

void sub_77FD90(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C0AA8, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A7ABC, 4));
	retn(mv, &ts->esp);
}

void sub_77FDA0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C0AA8, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784260, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A7AB8, 4));
	retn(mv, &ts->esp);
}

void sub_77FDC0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C0AB0, 8));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A7AB0, 8));
	retn(mv, &ts->esp);
}

void sub_77FDD0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C0AB0, 8));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7864E0, 8));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A7AA8, 8));
	retn(mv, &ts->esp);
}

void sub_77FDF0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C0AB8, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A7B2C, 4));
	retn(mv, &ts->esp);
}

void sub_77FE00(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C0AB8, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784260, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A7B28, 4));
	retn(mv, &ts->esp);
}

void sub_77FE20(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C0AC0, 8));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A7B20, 8));
	retn(mv, &ts->esp);
}

void sub_77FE30(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C0AC0, 8));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7864E0, 8));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A7B18, 8));
	retn(mv, &ts->esp);
}

void sub_77FE50(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C0BD0, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A7B8C, 4));
	retn(mv, &ts->esp);
}

void sub_77FE60(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C0BD0, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784260, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A7B88, 4));
	retn(mv, &ts->esp);
}

void sub_77FE80(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C0BD8, 8));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A7B80, 8));
	retn(mv, &ts->esp);
}

void sub_77FE90(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C0BD8, 8));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7864E0, 8));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A7B78, 8));
	retn(mv, &ts->esp);
}

void sub_77FEB0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C0BE8, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A7BAC, 4));
	retn(mv, &ts->esp);
}

void sub_77FEC0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C0BE8, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784260, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A7BA8, 4));
	retn(mv, &ts->esp);
}

void sub_77FEE0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C0BF0, 8));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A7BA0, 8));
	retn(mv, &ts->esp);
}

void sub_77FEF0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C0BF0, 8));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7864E0, 8));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A7B98, 8));
	retn(mv, &ts->esp);
}

void sub_77FF10(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C0D00, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A7BC4, 4));
	retn(mv, &ts->esp);
}

void sub_77FF20(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C0D00, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784260, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A7BC0, 4));
	retn(mv, &ts->esp);
}

void sub_77FF40(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C0D08, 8));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A7BB8, 8));
	retn(mv, &ts->esp);
}

void sub_77FF50(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C0D08, 8));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7864E0, 8));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A7BB0, 8));
	retn(mv, &ts->esp);
}

void sub_77FF70(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C0D10, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A7BF4, 4));
	retn(mv, &ts->esp);
}

void sub_77FF80(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C0D10, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784260, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A7BF0, 4));
	retn(mv, &ts->esp);
}

void sub_77FFA0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C0D18, 8));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A7BE8, 8));
	retn(mv, &ts->esp);
}

void sub_77FFB0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C0D18, 8));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7864E0, 8));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A7BE0, 8));
	retn(mv, &ts->esp);
}

void sub_77FFD0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C0D20, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A7E34, 4));
	retn(mv, &ts->esp);
}

void sub_77FFE0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C0D20, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784260, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A7E30, 4));
	retn(mv, &ts->esp);
}

void sub_780000(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C0D28, 8));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A7E28, 8));
	retn(mv, &ts->esp);
}

void sub_780010(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C0D28, 8));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7864E0, 8));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A7E20, 8));
	retn(mv, &ts->esp);
}

void sub_780030(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8A7BF8);
	game::sub_6DD240(ts, mv);
	push(mv, &ts->esp, 0x782900);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_780050(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8A7E38);
	game::sub_6DD240(ts, mv);
	push(mv, &ts->esp, 0x782910);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_780070(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C0E40, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A80EC, 4));
	retn(mv, &ts->esp);
}

void sub_780080(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C0E40, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784260, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A80E8, 4));
	retn(mv, &ts->esp);
}

void sub_7800A0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C0E48, 8));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A80E0, 8));
	retn(mv, &ts->esp);
}

void sub_7800B0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C0E48, 8));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7864E0, 8));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A80D8, 8));
	retn(mv, &ts->esp);
}

void sub_7800D0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C0E50, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A812C, 4));
	retn(mv, &ts->esp);
}

void sub_7800E0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C0E50, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784260, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A8128, 4));
	retn(mv, &ts->esp);
}

void sub_780100(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C0E58, 8));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A8120, 8));
	retn(mv, &ts->esp);
}

void sub_780110(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C0E58, 8));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7864E0, 8));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A8118, 8));
	retn(mv, &ts->esp);
}

void sub_780130(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C0E70, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A814C, 4));
	retn(mv, &ts->esp);
}

void sub_780140(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C0E70, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784260, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A8148, 4));
	retn(mv, &ts->esp);
}

void sub_780160(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C0E78, 8));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A8140, 8));
	retn(mv, &ts->esp);
}

void sub_780170(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C0E78, 8));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7864E0, 8));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A8138, 8));
	retn(mv, &ts->esp);
}

void sub_780190(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C0E88, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A838C, 4));
	retn(mv, &ts->esp);
}

void sub_7801A0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C0E88, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784260, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A8388, 4));
	retn(mv, &ts->esp);
}

void sub_7801C0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C0E90, 8));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A8380, 8));
	retn(mv, &ts->esp);
}

void sub_7801D0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C0E90, 8));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7864E0, 8));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A8378, 8));
	retn(mv, &ts->esp);
}

void sub_7801F0(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8A8390);
	game::sub_6DD240(ts, mv);
	push(mv, &ts->esp, 0x782920);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_780210(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C0E98, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A8730, 4));
	retn(mv, &ts->esp);
}

void sub_780220(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C0E98, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784260, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A872C, 4));
	retn(mv, &ts->esp);
}

void sub_780240(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C0EA0, 8));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A85E8, 8));
	retn(mv, &ts->esp);
}

void sub_780250(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C0EA0, 8));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7864E0, 8));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8A85E0, 8));
	retn(mv, &ts->esp);
}

void sub_780270(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0xFF00AAAA);
	push(mv, &ts->esp, 0x7C0FDC);
	mov(&ts->ecx, 0x8A85F0);
	game::sub_6DE3F0(ts, mv);
	push(mv, &ts->esp, 0x782930);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_780290(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0xFFFFFF50);
	push(mv, &ts->esp, 0x7C0FE8);
	mov(&ts->ecx, 0x8A8738);
	game::sub_6DE3F0(ts, mv);
	push(mv, &ts->esp, 0x782940);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_7802B0(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8A8718);
	mov(mv, x86::mem(0x8A8718, 4), 0x8A8738);
	game::sub_6DE6B0(ts, mv);
	push(mv, &ts->esp, 0x782950);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_7802D0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C0FF8, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AAAD4, 4));
	retn(mv, &ts->esp);
}

void sub_7802E0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C0FF8, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784260, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AAAD0, 4));
	retn(mv, &ts->esp);
}

void sub_780300(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1000, 8));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AAAC8, 8));
	retn(mv, &ts->esp);
}

void sub_780310(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1000, 8));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7864E0, 8));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AAAC0, 8));
	retn(mv, &ts->esp);
}

void sub_780330(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8AAAD8);
	game::sub_6DB740(ts, mv);
	push(mv, &ts->esp, 0x782960);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_780350(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1110, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AACBC, 4));
	retn(mv, &ts->esp);
}

void sub_780360(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1110, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784260, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AACB8, 4));
	retn(mv, &ts->esp);
}

void sub_780380(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1118, 8));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AACB0, 8));
	retn(mv, &ts->esp);
}

void sub_780390(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1118, 8));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7864E0, 8));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AACA8, 8));
	retn(mv, &ts->esp);
}

void sub_7803B0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1228, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AADAC, 4));
	retn(mv, &ts->esp);
}

void sub_7803C0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1228, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784260, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AADA8, 4));
	retn(mv, &ts->esp);
}

void sub_7803E0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1230, 8));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AADA0, 8));
	retn(mv, &ts->esp);
}

void sub_7803F0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1230, 8));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7864E0, 8));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AAD98, 8));
	retn(mv, &ts->esp);
}

void sub_780410(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1338, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AADC4, 4));
	retn(mv, &ts->esp);
}

void sub_780420(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1338, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784260, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AADC0, 4));
	retn(mv, &ts->esp);
}

void sub_780440(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1340, 8));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AADB8, 8));
	retn(mv, &ts->esp);
}

void sub_780450(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1340, 8));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7864E0, 8));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AADB0, 8));
	retn(mv, &ts->esp);
}

void sub_780470(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1348, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AADDC, 4));
	retn(mv, &ts->esp);
}

void sub_780480(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1348, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784260, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AADD8, 4));
	retn(mv, &ts->esp);
}

void sub_7804A0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1350, 8));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AADD0, 8));
	retn(mv, &ts->esp);
}

void sub_7804B0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1350, 8));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7864E0, 8));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AADC8, 8));
	retn(mv, &ts->esp);
}

void sub_7804D0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1358, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AADF4, 4));
	retn(mv, &ts->esp);
}

void sub_7804E0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1358, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784260, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AADF0, 4));
	retn(mv, &ts->esp);
}

void sub_780500(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1360, 8));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AADE8, 8));
	retn(mv, &ts->esp);
}

void sub_780510(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1360, 8));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7864E0, 8));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AADE0, 8));
	retn(mv, &ts->esp);
}

void sub_780530(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1468, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AAE0C, 4));
	retn(mv, &ts->esp);
}

void sub_780540(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1468, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784260, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AAE08, 4));
	retn(mv, &ts->esp);
}

void sub_780560(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1470, 8));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AAE00, 8));
	retn(mv, &ts->esp);
}

void sub_780570(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1470, 8));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7864E0, 8));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AADF8, 8));
	retn(mv, &ts->esp);
}

void sub_780590(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C14B8, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB2BC, 4));
	retn(mv, &ts->esp);
}

void sub_7805A0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C14B8, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784260, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB2B8, 4));
	retn(mv, &ts->esp);
}

void sub_7805C0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C14C0, 8));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB2B0, 8));
	retn(mv, &ts->esp);
}

void sub_7805D0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C14C0, 8));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7864E0, 8));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB2A8, 8));
	retn(mv, &ts->esp);
}

void sub_7805F0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C14E4, 4));
	fsub(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C14E0, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB29C, 4));
	retn(mv, &ts->esp);
}

void sub_780610(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C14DC, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB2A0, 4));
	retn(mv, &ts->esp);
}

void sub_780620(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C14D0, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB2C0, 4));
	retn(mv, &ts->esp);
}

void sub_780630(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C14D8, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB298, 4));
	retn(mv, &ts->esp);
}

void sub_780640(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1AF0, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB2DC, 4));
	retn(mv, &ts->esp);
}

void sub_780650(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1AF0, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784260, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB2D8, 4));
	retn(mv, &ts->esp);
}

void sub_780670(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1AF8, 8));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB2D0, 8));
	retn(mv, &ts->esp);
}

void sub_780680(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1AF8, 8));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7864E0, 8));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB2C8, 8));
	retn(mv, &ts->esp);
}

void sub_7806A0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1B08, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB2F4, 4));
	retn(mv, &ts->esp);
}

void sub_7806B0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1B08, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784260, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB2F0, 4));
	retn(mv, &ts->esp);
}

void sub_7806D0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1B10, 8));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB2E8, 8));
	retn(mv, &ts->esp);
}

void sub_7806E0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1B10, 8));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7864E0, 8));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB2E0, 8));
	retn(mv, &ts->esp);
}

void sub_780700(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1B20, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB314, 4));
	retn(mv, &ts->esp);
}

void sub_780710(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1B20, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784260, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB310, 4));
	retn(mv, &ts->esp);
}

void sub_780730(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1B28, 8));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB308, 8));
	retn(mv, &ts->esp);
}

void sub_780740(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1B28, 8));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7864E0, 8));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB300, 8));
	retn(mv, &ts->esp);
}

void sub_780760(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1B30, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB354, 4));
	retn(mv, &ts->esp);
}

void sub_780770(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1B30, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784260, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB350, 4));
	retn(mv, &ts->esp);
}

void sub_780790(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1B38, 8));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB348, 8));
	retn(mv, &ts->esp);
}

void sub_7807A0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1B38, 8));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7864E0, 8));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB340, 8));
	retn(mv, &ts->esp);
}

void sub_7807C0(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->eax, 0x8AB320);
	mov(&ts->ecx, 0x3);
	xor_(&ts->edx, ts->edx);
	lea(mv, &ts->esp, x86::mem(ts->esp, 4));

loc_7807D0:
	mov(mv, x86::mem(ts->eax - 0x8, 4), ts->edx);
	mov(mv, x86::mem(ts->eax - 0x4, 4), ts->edx);
	mov(mv, x86::mem(ts->eax, 4), ts->edx);
	add(&ts->eax, 0xC);
	dec(&ts->ecx);
	if (!ts->eflags.zero) {
        goto loc_7807D0;
    }
	retn(mv, &ts->esp);
}

void sub_7807E0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1B40, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB36C, 4));
	retn(mv, &ts->esp);
}

void sub_7807F0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1B40, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784260, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB368, 4));
	retn(mv, &ts->esp);
}

void sub_780810(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1B48, 8));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB360, 8));
	retn(mv, &ts->esp);
}

void sub_780820(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1B48, 8));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7864E0, 8));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB358, 8));
	retn(mv, &ts->esp);
}

void sub_780840(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1B50, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB384, 4));
	retn(mv, &ts->esp);
}

void sub_780850(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1B50, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784260, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB380, 4));
	retn(mv, &ts->esp);
}

void sub_780870(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1B58, 8));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB378, 8));
	retn(mv, &ts->esp);
}

void sub_780880(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1B58, 8));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7864E0, 8));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB370, 8));
	retn(mv, &ts->esp);
}

void sub_7808A0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1BB8, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB39C, 4));
	retn(mv, &ts->esp);
}

void sub_7808B0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1BB8, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784260, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB398, 4));
	retn(mv, &ts->esp);
}

void sub_7808D0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1BC0, 8));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB390, 8));
	retn(mv, &ts->esp);
}

void sub_7808E0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1BC0, 8));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7864E0, 8));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB388, 8));
	retn(mv, &ts->esp);
}

void sub_780900(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1BD0, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB3B4, 4));
	retn(mv, &ts->esp);
}

void sub_780910(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1BD0, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784260, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB3B0, 4));
	retn(mv, &ts->esp);
}

void sub_780930(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1BD8, 8));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB3A8, 8));
	retn(mv, &ts->esp);
}

void sub_780940(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1BD8, 8));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7864E0, 8));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB3A0, 8));
	retn(mv, &ts->esp);
}

void sub_780960(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1BE0, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB3CC, 4));
	retn(mv, &ts->esp);
}

void sub_780970(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1BE0, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784260, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB3C8, 4));
	retn(mv, &ts->esp);
}

void sub_780990(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1BE8, 8));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB3C0, 8));
	retn(mv, &ts->esp);
}

void sub_7809A0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1BE8, 8));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7864E0, 8));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB3B8, 8));
	retn(mv, &ts->esp);
}

void sub_7809C0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1BF8, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB3E4, 4));
	retn(mv, &ts->esp);
}

void sub_7809D0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1BF8, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784260, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB3E0, 4));
	retn(mv, &ts->esp);
}

void sub_7809F0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1C00, 8));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB3D8, 8));
	retn(mv, &ts->esp);
}

void sub_780A00(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1C00, 8));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7864E0, 8));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB3D0, 8));
	retn(mv, &ts->esp);
}

void sub_780A20(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1C10, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB3FC, 4));
	retn(mv, &ts->esp);
}

void sub_780A30(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1C10, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784260, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB3F8, 4));
	retn(mv, &ts->esp);
}

void sub_780A50(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1C18, 8));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB3F0, 8));
	retn(mv, &ts->esp);
}

void sub_780A60(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1C18, 8));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7864E0, 8));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB3E8, 8));
	retn(mv, &ts->esp);
}

void sub_780A80(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1C28, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB414, 4));
	retn(mv, &ts->esp);
}

void sub_780A90(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1C28, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784260, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB410, 4));
	retn(mv, &ts->esp);
}

void sub_780AB0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1C30, 8));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB408, 8));
	retn(mv, &ts->esp);
}

void sub_780AC0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1C30, 8));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7864E0, 8));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB400, 8));
	retn(mv, &ts->esp);
}

void sub_780AE0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1C38, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB42C, 4));
	retn(mv, &ts->esp);
}

void sub_780AF0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1C38, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784260, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB428, 4));
	retn(mv, &ts->esp);
}

void sub_780B10(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1C40, 8));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB420, 8));
	retn(mv, &ts->esp);
}

void sub_780B20(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1C40, 8));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7864E0, 8));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB418, 8));
	retn(mv, &ts->esp);
}

void sub_780B40(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1C50, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB444, 4));
	retn(mv, &ts->esp);
}

void sub_780B50(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1C50, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784260, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB440, 4));
	retn(mv, &ts->esp);
}

void sub_780B70(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1C58, 8));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB438, 8));
	retn(mv, &ts->esp);
}

void sub_780B80(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1C58, 8));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7864E0, 8));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB430, 8));
	retn(mv, &ts->esp);
}

void sub_780BA0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1C68, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB45C, 4));
	retn(mv, &ts->esp);
}

void sub_780BB0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1C68, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784260, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB458, 4));
	retn(mv, &ts->esp);
}

void sub_780BD0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1C70, 8));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB450, 8));
	retn(mv, &ts->esp);
}

void sub_780BE0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1C70, 8));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7864E0, 8));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB448, 8));
	retn(mv, &ts->esp);
}

void sub_780C00(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1C80, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB474, 4));
	retn(mv, &ts->esp);
}

void sub_780C10(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1C80, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784260, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB470, 4));
	retn(mv, &ts->esp);
}

void sub_780C30(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1C88, 8));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB468, 8));
	retn(mv, &ts->esp);
}

void sub_780C40(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1C88, 8));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7864E0, 8));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB460, 8));
	retn(mv, &ts->esp);
}

void sub_780C60(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1C98, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB48C, 4));
	retn(mv, &ts->esp);
}

void sub_780C70(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1C98, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784260, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB488, 4));
	retn(mv, &ts->esp);
}

void sub_780C90(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1CA0, 8));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB480, 8));
	retn(mv, &ts->esp);
}

void sub_780CA0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1CA0, 8));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7864E0, 8));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB478, 8));
	retn(mv, &ts->esp);
}

void sub_780CC0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1CB0, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB4A4, 4));
	retn(mv, &ts->esp);
}

void sub_780CD0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1CB0, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784260, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB4A0, 4));
	retn(mv, &ts->esp);
}

void sub_780CF0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1CB8, 8));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB498, 8));
	retn(mv, &ts->esp);
}

void sub_780D00(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1CB8, 8));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7864E0, 8));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB490, 8));
	retn(mv, &ts->esp);
}

void sub_780D20(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1CC8, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB4DC, 4));
	retn(mv, &ts->esp);
}

void sub_780D30(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1CC8, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784260, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB4D8, 4));
	retn(mv, &ts->esp);
}

void sub_780D50(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1CD0, 8));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB4D0, 8));
	retn(mv, &ts->esp);
}

void sub_780D60(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1CD0, 8));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7864E0, 8));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB4C8, 8));
	retn(mv, &ts->esp);
}

void sub_780D80(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1CF8, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB4FC, 4));
	retn(mv, &ts->esp);
}

void sub_780D90(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1CF8, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784260, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB4F8, 4));
	retn(mv, &ts->esp);
}

void sub_780DB0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1D00, 8));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB4F0, 8));
	retn(mv, &ts->esp);
}

void sub_780DC0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1D00, 8));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7864E0, 8));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB4E8, 8));
	retn(mv, &ts->esp);
}

void sub_780DE0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1D24, 4));
	fsub(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1D20, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB4E0, 4));
	retn(mv, &ts->esp);
}

void sub_780E00(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1D80, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB524, 4));
	retn(mv, &ts->esp);
}

void sub_780E10(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1D80, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784260, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB520, 4));
	retn(mv, &ts->esp);
}

void sub_780E30(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1D88, 8));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB518, 8));
	retn(mv, &ts->esp);
}

void sub_780E40(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1D88, 8));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7864E0, 8));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB510, 8));
	retn(mv, &ts->esp);
}

void sub_780E60(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1DAC, 4));
	fsub(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1DA8, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB504, 4));
	retn(mv, &ts->esp);
}

void sub_780E80(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1DA4, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB508, 4));
	retn(mv, &ts->esp);
}

void sub_780E90(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1D98, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB528, 4));
	retn(mv, &ts->esp);
}

void sub_780EA0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1DA0, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB500, 4));
	retn(mv, &ts->esp);
}

void sub_780EB0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1E08, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB54C, 4));
	retn(mv, &ts->esp);
}

void sub_780EC0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1E08, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784260, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB548, 4));
	retn(mv, &ts->esp);
}

void sub_780EE0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1E10, 8));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB540, 8));
	retn(mv, &ts->esp);
}

void sub_780EF0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1E10, 8));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7864E0, 8));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB538, 8));
	retn(mv, &ts->esp);
}

void sub_780F10(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1E34, 4));
	fsub(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1E30, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB530, 4));
	retn(mv, &ts->esp);
}

void sub_780F30(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1E90, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB56C, 4));
	retn(mv, &ts->esp);
}

void sub_780F40(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1E90, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784260, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB568, 4));
	retn(mv, &ts->esp);
}

void sub_780F60(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1E98, 8));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB560, 8));
	retn(mv, &ts->esp);
}

void sub_780F70(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1E98, 8));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7864E0, 8));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB558, 8));
	retn(mv, &ts->esp);
}

void sub_780F90(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1EBC, 4));
	fsub(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1EB8, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB550, 4));
	retn(mv, &ts->esp);
}

void sub_780FB0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1F28, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB584, 4));
	retn(mv, &ts->esp);
}

void sub_780FC0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1F28, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784260, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB580, 4));
	retn(mv, &ts->esp);
}

void sub_780FE0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1F30, 8));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB578, 8));
	retn(mv, &ts->esp);
}

void sub_780FF0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1F30, 8));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7864E0, 8));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB570, 8));
	retn(mv, &ts->esp);
}

void sub_781010(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1FA8, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB5A4, 4));
	retn(mv, &ts->esp);
}

void sub_781020(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1FA8, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784260, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB5A0, 4));
	retn(mv, &ts->esp);
}

void sub_781040(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1FB0, 8));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB598, 8));
	retn(mv, &ts->esp);
}

void sub_781050(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C1FB0, 8));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7864E0, 8));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB590, 8));
	retn(mv, &ts->esp);
}

void sub_781070(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C20B8, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB5BC, 4));
	retn(mv, &ts->esp);
}

void sub_781080(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C20B8, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784260, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB5B8, 4));
	retn(mv, &ts->esp);
}

void sub_7810A0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C20C0, 8));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB5B0, 8));
	retn(mv, &ts->esp);
}

void sub_7810B0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C20C0, 8));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7864E0, 8));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB5A8, 8));
	retn(mv, &ts->esp);
}

void sub_7810D0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C2118, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB5D4, 4));
	retn(mv, &ts->esp);
}

void sub_7810E0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C2118, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784260, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB5D0, 4));
	retn(mv, &ts->esp);
}

void sub_781100(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C2120, 8));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB5C8, 8));
	retn(mv, &ts->esp);
}

void sub_781110(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C2120, 8));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7864E0, 8));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB5C0, 8));
	retn(mv, &ts->esp);
}

void sub_781130(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C2128, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB5EC, 4));
	retn(mv, &ts->esp);
}

void sub_781140(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C2128, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784260, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB5E8, 4));
	retn(mv, &ts->esp);
}

void sub_781160(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C2130, 8));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB5E0, 8));
	retn(mv, &ts->esp);
}

void sub_781170(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C2130, 8));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7864E0, 8));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB5D8, 8));
	retn(mv, &ts->esp);
}

void sub_781190(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C2138, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB604, 4));
	retn(mv, &ts->esp);
}

void sub_7811A0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C2138, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784260, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB600, 4));
	retn(mv, &ts->esp);
}

void sub_7811C0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C2140, 8));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB5F8, 8));
	retn(mv, &ts->esp);
}

void sub_7811D0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C2140, 8));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7864E0, 8));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB5F0, 8));
	retn(mv, &ts->esp);
}

void sub_7811F0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C2148, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB61C, 4));
	retn(mv, &ts->esp);
}

void sub_781200(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C2148, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784260, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB618, 4));
	retn(mv, &ts->esp);
}

void sub_781220(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C2150, 8));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB610, 8));
	retn(mv, &ts->esp);
}

void sub_781230(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C2150, 8));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7864E0, 8));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB608, 8));
	retn(mv, &ts->esp);
}

void sub_781250(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C2158, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB634, 4));
	retn(mv, &ts->esp);
}

void sub_781260(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C2158, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784260, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB630, 4));
	retn(mv, &ts->esp);
}

void sub_781280(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C2160, 8));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB628, 8));
	retn(mv, &ts->esp);
}

void sub_781290(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C2160, 8));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7864E0, 8));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB620, 8));
	retn(mv, &ts->esp);
}

void sub_7812B0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C21C8, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB64C, 4));
	retn(mv, &ts->esp);
}

void sub_7812C0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C21C8, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784260, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB648, 4));
	retn(mv, &ts->esp);
}

void sub_7812E0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C21D0, 8));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB640, 8));
	retn(mv, &ts->esp);
}

void sub_7812F0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C21D0, 8));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7864E0, 8));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB638, 8));
	retn(mv, &ts->esp);
}

void sub_781310(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C2238, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB664, 4));
	retn(mv, &ts->esp);
}

void sub_781320(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C2238, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784260, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB660, 4));
	retn(mv, &ts->esp);
}

void sub_781340(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C2240, 8));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB658, 8));
	retn(mv, &ts->esp);
}

void sub_781350(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C2240, 8));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7864E0, 8));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB650, 8));
	retn(mv, &ts->esp);
}

void sub_781370(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C22A8, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB6B4, 4));
	retn(mv, &ts->esp);
}

void sub_781380(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C22A8, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784260, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB6B0, 4));
	retn(mv, &ts->esp);
}

void sub_7813A0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C22B0, 8));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB6A8, 8));
	retn(mv, &ts->esp);
}

void sub_7813B0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C22B0, 8));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7864E0, 8));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB6A0, 8));
	retn(mv, &ts->esp);
}

void sub_7813D0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x7C23B8);
	push(mv, &ts->esp, 0x1);
	push(mv, &ts->esp, 0x812504);
	push(mv, &ts->esp, 0x0);
	push(mv, &ts->esp, 0x811E38);
	push(mv, &ts->esp, 0x8123A0);
	mov(&ts->ecx, 0x8AB668);
	game::sub_6DAB80(ts, mv);
	push(mv, &ts->esp, 0x782970);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_781400(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C23C0, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB704, 4));
	retn(mv, &ts->esp);
}

void sub_781410(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C23C0, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784260, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB700, 4));
	retn(mv, &ts->esp);
}

void sub_781430(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C23C8, 8));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB6F8, 8));
	retn(mv, &ts->esp);
}

void sub_781440(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C23C8, 8));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7864E0, 8));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AB6F0, 8));
	retn(mv, &ts->esp);
}

void sub_781460(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x7C0900);
	push(mv, &ts->esp, 0x1);
	push(mv, &ts->esp, 0x8139DC);
	push(mv, &ts->esp, 0x0);
	push(mv, &ts->esp, 0x812528);
	push(mv, &ts->esp, 0x813520);
	mov(&ts->ecx, 0x8AB6B8);
	game::sub_6DAB80(ts, mv);
	push(mv, &ts->esp, 0x782980);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_781490(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C24D0, 4));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AD2AC, 4));
	retn(mv, &ts->esp);
}

void sub_7814A0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C24D0, 4));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x784260, 4));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AD2A8, 4));
	retn(mv, &ts->esp);
}

void sub_7814C0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C24D8, 8));
	fadd(&ts->fp, x86::fp_index(0), x86::fp_index(0));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AD2A0, 8));
	retn(mv, &ts->esp);
}

void sub_7814D0(x86::thread_state* ts, x86::memory_view* mv) {
	fld(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7C24D8, 8));
	fmul(mv, &ts->fp, x86::fp_index(0), x86::mem(0x7864E0, 8));
	fstp(mv, &ts->fp, x86::fp_index(0), x86::mem(0x8AD298, 8));
	retn(mv, &ts->esp);
}

void sub_7814F0(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8AD4F0);
	goto sub_6F55B6;
}

void sub_7814FA(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x7C2FD8);
	mov(&ts->ecx, 0x8AD618);
	game::sub_6F6C23(ts, mv);
	push(mv, &ts->esp, 0x782990);
	mov(mv, x86::mem(0x8AD618, 4), 0x7C2ED0);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_78151F(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8AD644);
	goto sub_6F55B6;
}

void sub_781529(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8AD680);
	goto sub_6F55B6;
}

void sub_781533(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x78299B);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_78153F(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x7C3130);
	mov(&ts->ecx, 0x8AD74C);
	game::sub_6F6C23(ts, mv);
	push(mv, &ts->esp, 0x7829A5);
	mov(mv, x86::mem(0x8AD74C, 4), 0x7C30F8);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_781564(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x7C3134);
	mov(&ts->ecx, 0x8AD7B0);
	game::sub_6F6C23(ts, mv);
	push(mv, &ts->esp, 0x7829B0);
	mov(mv, x86::mem(0x8AD7B0, 4), 0x7C30F8);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_781589(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x7C3138);
	mov(&ts->ecx, 0x8AD7D8);
	game::sub_6F6C23(ts, mv);
	push(mv, &ts->esp, 0x7829BB);
	mov(mv, x86::mem(0x8AD7D8, 4), 0x7C30F8);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_7815AE(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x7C313C);
	mov(&ts->ecx, 0x8AD710);
	game::sub_6F6C23(ts, mv);
	push(mv, &ts->esp, 0x7829C6);
	mov(mv, x86::mem(0x8AD710, 4), 0x7C30F8);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_7815D3(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x7C3140);
	mov(&ts->ecx, 0x8AD800);
	game::sub_6F6C23(ts, mv);
	push(mv, &ts->esp, 0x7829D1);
	mov(mv, x86::mem(0x8AD800, 4), 0x7C30F8);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_7815F8(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x7C3144);
	mov(&ts->ecx, 0x8AD760);
	game::sub_6F6C23(ts, mv);
	push(mv, &ts->esp, 0x7829DC);
	mov(mv, x86::mem(0x8AD760, 4), 0x7C30F8);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_78161D(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x7C3148);
	mov(&ts->ecx, 0x8AD850);
	game::sub_6F6C23(ts, mv);
	push(mv, &ts->esp, 0x7829E7);
	mov(mv, x86::mem(0x8AD850, 4), 0x7C30F8);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_781642(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x7C314C);
	mov(&ts->ecx, 0x8AD724);
	game::sub_6F6C23(ts, mv);
	push(mv, &ts->esp, 0x7829F2);
	mov(mv, x86::mem(0x8AD724, 4), 0x7C30F8);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_781667(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x7C3150);
	mov(&ts->ecx, 0x8AD83C);
	game::sub_6F6C23(ts, mv);
	push(mv, &ts->esp, 0x7829FD);
	mov(mv, x86::mem(0x8AD83C, 4), 0x7C30F8);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_78168C(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x7C3154);
	mov(&ts->ecx, 0x8AD788);
	game::sub_6F6C23(ts, mv);
	push(mv, &ts->esp, 0x782A08);
	mov(mv, x86::mem(0x8AD788, 4), 0x7C30F8);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_7816B1(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x7C3158);
	mov(&ts->ecx, 0x8AD814);
	game::sub_6F6C23(ts, mv);
	push(mv, &ts->esp, 0x782A13);
	mov(mv, x86::mem(0x8AD814, 4), 0x7C30F8);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_7816D6(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x7C315C);
	mov(&ts->ecx, 0x8AD8B4);
	game::sub_6F6C23(ts, mv);
	push(mv, &ts->esp, 0x782A1E);
	mov(mv, x86::mem(0x8AD8B4, 4), 0x7C30F8);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_7816FB(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x7C3160);
	mov(&ts->ecx, 0x8AD904);
	game::sub_6F6C23(ts, mv);
	push(mv, &ts->esp, 0x782A29);
	mov(mv, x86::mem(0x8AD904, 4), 0x7C30F8);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_781720(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x7C3164);
	mov(&ts->ecx, 0x8AD878);
	game::sub_6F6C23(ts, mv);
	push(mv, &ts->esp, 0x782A34);
	mov(mv, x86::mem(0x8AD878, 4), 0x7C30F8);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_781745(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x7C3168);
	mov(&ts->ecx, 0x8AD864);
	game::sub_6F6C23(ts, mv);
	push(mv, &ts->esp, 0x782A3F);
	mov(mv, x86::mem(0x8AD864, 4), 0x7C30F8);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_78176A(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x7C316C);
	mov(&ts->ecx, 0x8AD8C8);
	game::sub_6F6C23(ts, mv);
	push(mv, &ts->esp, 0x782A4A);
	mov(mv, x86::mem(0x8AD8C8, 4), 0x7C30F8);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_78178F(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x7C3170);
	mov(&ts->ecx, 0x8AD738);
	game::sub_6F6C23(ts, mv);
	push(mv, &ts->esp, 0x782A55);
	mov(mv, x86::mem(0x8AD738, 4), 0x7C30F8);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_7817B4(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x7C3174);
	mov(&ts->ecx, 0x8AD828);
	game::sub_6F6C23(ts, mv);
	push(mv, &ts->esp, 0x782A60);
	mov(mv, x86::mem(0x8AD828, 4), 0x7C30F8);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_7817D9(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x7C3178);
	mov(&ts->ecx, 0x8AD774);
	game::sub_6F6C23(ts, mv);
	push(mv, &ts->esp, 0x782A6B);
	mov(mv, x86::mem(0x8AD774, 4), 0x7C30F8);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_7817FE(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x7C317C);
	mov(&ts->ecx, 0x8AD8A0);
	game::sub_6F6C23(ts, mv);
	push(mv, &ts->esp, 0x782A76);
	mov(mv, x86::mem(0x8AD8A0, 4), 0x7C30F8);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_781823(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x7C3180);
	mov(&ts->ecx, 0x8AD8DC);
	game::sub_6F6C23(ts, mv);
	push(mv, &ts->esp, 0x782A81);
	mov(mv, x86::mem(0x8AD8DC, 4), 0x7C30F8);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_781848(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x7C3184);
	mov(&ts->ecx, 0x8AD8F0);
	game::sub_6F6C23(ts, mv);
	push(mv, &ts->esp, 0x782A8C);
	mov(mv, x86::mem(0x8AD8F0, 4), 0x7C30F8);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_78186D(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x7C3188);
	mov(&ts->ecx, 0x8AD7C4);
	game::sub_6F6C23(ts, mv);
	push(mv, &ts->esp, 0x782A97);
	mov(mv, x86::mem(0x8AD7C4, 4), 0x7C30F8);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_781892(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x7C318C);
	mov(&ts->ecx, 0x8AD88C);
	game::sub_6F6C23(ts, mv);
	push(mv, &ts->esp, 0x782AA2);
	mov(mv, x86::mem(0x8AD88C, 4), 0x7C30F8);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_7818B7(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x7C3190);
	mov(&ts->ecx, 0x8AD79C);
	game::sub_6F6C23(ts, mv);
	push(mv, &ts->esp, 0x782AAD);
	mov(mv, x86::mem(0x8AD79C, 4), 0x7C30F8);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_7818DC(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x7C3194);
	mov(&ts->ecx, 0x8AD7EC);
	game::sub_6F6C23(ts, mv);
	push(mv, &ts->esp, 0x782AB8);
	mov(mv, x86::mem(0x8AD7EC, 4), 0x7C30F8);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_781901(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x782AC3);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_78190D(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x782ACE);
	game::_atexit(ts, mv);
	pop(mv, &ts->esp, ts->ecx);
	retn(mv, &ts->esp);
}

void sub_781919(x86::thread_state* ts, x86::memory_view* mv) {
	game::sub_72CCDE(ts, mv);
	mov(mv, x86::mem(0x8B4A20, 4), ts->eax);
	retn(mv, &ts->esp);
}

void sub_781924(x86::thread_state* ts, x86::memory_view* mv) {
	game::sub_72D951(ts, mv);
	movzx(&ts->eax, ts->al);
	mov(mv, x86::mem(0x8B4A2C, 4), ts->eax);
	retn(mv, &ts->esp);
}

void nullsub_16(x86::thread_state* ts, x86::memory_view* mv) {
	retn(mv, &ts->esp);
}

void nullsub_17(x86::thread_state* ts, x86::memory_view* mv) {
	retn(mv, &ts->esp);
}

void unknown_libname_149(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x81E7EC);
	goto sub_4DEF30;
}

void unknown_libname_150(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x81CBC0);
	goto sub_413530;
}

void unknown_libname_151(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x81E5B8);
	goto sub_415120;
}

void unknown_libname_152(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x81E388);
	goto sub_415120;
}

void unknown_libname_153(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x81E810);
	goto loc_41E7C0;

loc_41E7C0:
	push(mv, &ts->esp, 0xFFFFFFFF);
	push(mv, &ts->esp, 0x771644);
	mov(mv, &ts->eax, x86::mem(0x0, 4));
	push(mv, &ts->esp, ts->eax);
	mov(mv, x86::mem(0x0, 4), ts->esp);
	push(mv, &ts->esp, ts->ecx);
	push(mv, &ts->esp, ts->esi);
	mov(&ts->esi, ts->ecx);
	mov(mv, x86::mem(ts->esp + 0x4, 4), ts->esi);
	mov(mv, x86::mem(ts->esp + 0x10, 4), 0x2);
	game::sub_41ABC0(ts, mv);
	push(mv, &ts->esp, 0x50F7D0);
	push(mv, &ts->esp, 0xF);
	push(mv, &ts->esp, 0x920);
	lea(mv, &ts->eax, x86::mem(ts->esi + 0x910, 4));
	push(mv, &ts->esp, ts->eax);
	mov(mv, x86::mem(ts->esp + 0x20, 1), 0x1);
	game::_eh_vector_destructor_iterator__void_P_uint_int_void__P__void_P__(ts, mv);
	lea(mv, &ts->ecx, x86::mem(ts->esi + 0x900, 4));
	mov(mv, x86::mem(ts->esp + 0x10, 1), 0x0);
	game::sub_413350(ts, mv);
	lea(mv, &ts->ecx, x86::mem(ts->esi + 0x394, 4));
	mov(mv, x86::mem(ts->esp + 0x10, 4), 0xFFFFFFFF);
	game::nullsub_1(ts, mv);
	mov(mv, &ts->ecx, x86::mem(ts->esp + 0x8, 4));
	pop(mv, &ts->esp, ts->esi);
	mov(mv, x86::mem(0x0, 4), ts->ecx);
	add(&ts->esp, 0x10);
	retn(mv, &ts->esp);

loc_771610:
	mov(mv, &ts->ecx, x86::mem(ts->ebp - 0x10, 4));
	add(&ts->ecx, 0x10);
	goto sub_401800;

loc_77161B:
	mov(mv, &ts->ecx, x86::mem(ts->ebp - 0x10, 4));
	add(&ts->ecx, 0x900);
	goto sub_413350;

loc_771629:
	push(mv, &ts->esp, 0x50F7D0);
	push(mv, &ts->esp, 0xF);
	push(mv, &ts->esp, 0x920);
	mov(mv, &ts->eax, x86::mem(ts->ebp - 0x10, 4));
	add(&ts->eax, 0x910);
	push(mv, &ts->esp, ts->eax);
	game::_eh_vector_destructor_iterator__void_P_uint_int_void__P__void_P__(ts, mv);
	retn(mv, &ts->esp);

loc_771644:
	mov(&ts->eax, 0x7DDB44);
	goto ___CxxFrameHandler;
}

void sub_7819B0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x4022C0);
	push(mv, &ts->esp, 0x8);
	push(mv, &ts->esp, 0xC);
	push(mv, &ts->esp, 0x827D38);
	game::_eh_vector_destructor_iterator__void_P_uint_int_void__P__void_P__(ts, mv);
	retn(mv, &ts->esp);
}

void sub_7819D0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x4022C0);
	push(mv, &ts->esp, 0x8);
	push(mv, &ts->esp, 0xC);
	push(mv, &ts->esp, 0x827DB8);
	game::_eh_vector_destructor_iterator__void_P_uint_int_void__P__void_P__(ts, mv);
	retn(mv, &ts->esp);
}

void sub_7819F0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x4022C0);
	push(mv, &ts->esp, 0x8);
	push(mv, &ts->esp, 0xC);
	push(mv, &ts->esp, 0x827E28);
	game::_eh_vector_destructor_iterator__void_P_uint_int_void__P__void_P__(ts, mv);
	retn(mv, &ts->esp);
}

void sub_781A10(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x4022C0);
	push(mv, &ts->esp, 0x8);
	push(mv, &ts->esp, 0xC);
	push(mv, &ts->esp, 0x827CD0);
	game::_eh_vector_destructor_iterator__void_P_uint_int_void__P__void_P__(ts, mv);
	retn(mv, &ts->esp);
}

void sub_781A30(x86::thread_state* ts, x86::memory_view* mv) {
	mov(mv, x86::mem(0x7EA23C, 4), 0x785D9C);
	retn(mv, &ts->esp);
}

void sub_781A40(x86::thread_state* ts, x86::memory_view* mv) {
	mov(mv, x86::mem(0x827E88, 4), 0x785DA0);
	retn(mv, &ts->esp);
}

void sub_781A50(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x4022C0);
	push(mv, &ts->esp, 0x4);
	push(mv, &ts->esp, 0x1C);
	push(mv, &ts->esp, 0x7EA240);
	game::_eh_vector_destructor_iterator__void_P_uint_int_void__P__void_P__(ts, mv);
	retn(mv, &ts->esp);
}

void sub_781A70(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x4022C0);
	push(mv, &ts->esp, 0xA);
	push(mv, &ts->esp, 0x1C);
	push(mv, &ts->esp, 0x7EA2B0);
	game::_eh_vector_destructor_iterator__void_P_uint_int_void__P__void_P__(ts, mv);
	retn(mv, &ts->esp);
}

void sub_781A90(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x4022C0);
	push(mv, &ts->esp, 0x6);
	push(mv, &ts->esp, 0x1C);
	push(mv, &ts->esp, 0x7EA3C8);
	game::_eh_vector_destructor_iterator__void_P_uint_int_void__P__void_P__(ts, mv);
	retn(mv, &ts->esp);
}

void sub_781AB0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x4022C0);
	push(mv, &ts->esp, 0x4);
	push(mv, &ts->esp, 0x1C);
	push(mv, &ts->esp, 0x7EA470);
	game::_eh_vector_destructor_iterator__void_P_uint_int_void__P__void_P__(ts, mv);
	retn(mv, &ts->esp);
}

void unknown_libname_154(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x827B80);
	goto sub_4358E0;
}

void unknown_libname_155(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x827C9C);
	goto sub_4358E0;
}

void unknown_libname_156(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x827DA4);
	goto sub_4358E0;
}

void unknown_libname_157(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x827C74);
	goto loc_435910;

loc_435910:
	push(mv, &ts->esp, ts->esi);
	mov(&ts->esi, ts->ecx);
	mov(mv, &ts->eax, x86::mem(ts->esi, 4));
	cmp(&ts->eflags, ts->eax, ts->esi);
	if (ts->eflags.zero) {
        goto loc_43593F;
    }
	lea(mv, &ts->esp, x86::mem(ts->esp, 4));

loc_435920:
	mov(mv, &ts->ecx, x86::mem(ts->eax, 4));
	mov(mv, &ts->edx, x86::mem(ts->eax + 0x4, 4));
	mov(mv, x86::mem(ts->edx, 4), ts->ecx);
	push(mv, &ts->esp, ts->eax);
	mov(mv, x86::mem(ts->ecx + 0x4, 4), ts->edx);
	mov(mv, &ts->eax, x86::mem(0x827B5C, 4));
	push(mv, &ts->esp, ts->eax);
	game::sub_43F920(ts, mv);
	mov(mv, &ts->eax, x86::mem(ts->esi, 4));
	add(&ts->esp, 0x8);
	cmp(&ts->eflags, ts->eax, ts->esi);
	if (!ts->eflags.zero) {
        goto loc_435920;
    }

loc_43593F:
	pop(mv, &ts->esp, ts->esi);
	retn(mv, &ts->esp);
}

void unknown_libname_158(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x827C3C);
	goto sub_4835C0;
}

void unknown_libname_159(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x827C60);
	goto sub_4DEF30;
}

void unknown_libname_160(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x827D98);
	goto sub_4DEF30;
}

void unknown_libname_161(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x827CA4);
	goto sub_4835C0;
}

void unknown_libname_162(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x827EF0);
	goto loc_43A110;

loc_43A110:
	push(mv, &ts->esp, 0xFFFFFFFF);
	push(mv, &ts->esp, 0x771F37);
	mov(mv, &ts->eax, x86::mem(0x0, 4));
	push(mv, &ts->esp, ts->eax);
	mov(mv, x86::mem(0x0, 4), ts->esp);
	push(mv, &ts->esp, ts->ecx);
	push(mv, &ts->esp, ts->esi);
	push(mv, &ts->esp, ts->edi);
	mov(&ts->edi, ts->ecx);
	mov(mv, x86::mem(ts->esp + 0x8, 4), ts->edi);
	push(mv, &ts->esp, 0x0);
	push(mv, &ts->esp, 0x1);
	mov(mv, x86::mem(ts->esp + 0x1C, 4), 0x4);
	game::sub_438660(ts, mv);
	lea(mv, &ts->ecx, x86::mem(ts->edi + 0x48, 4));
	mov(mv, x86::mem(ts->esp + 0x14, 1), 0x3);
	game::sub_436800(ts, mv);
	mov(mv, &ts->eax, x86::mem(ts->edi + 0x40, 4));
	lea(mv, &ts->esi, x86::mem(ts->edi + 0x40, 4));
	cmp(&ts->eflags, ts->eax, ts->esi);
	mov(mv, x86::mem(ts->esp + 0x14, 1), 0x2);
	if (ts->eflags.zero) {
        goto loc_43A179;
    }
	goto loc_43A160;

loc_43A160:
	mov(mv, &ts->ecx, x86::mem(ts->eax, 4));
	mov(mv, &ts->edx, x86::mem(ts->eax + 0x4, 4));
	mov(mv, x86::mem(ts->edx, 4), ts->ecx);
	push(mv, &ts->esp, ts->eax);
	mov(mv, x86::mem(ts->ecx + 0x4, 4), ts->edx);
	game::sub_440EF0(ts, mv);
	mov(mv, &ts->eax, x86::mem(ts->esi, 4));
	add(&ts->esp, 0x4);
	cmp(&ts->eflags, ts->eax, ts->esi);
	if (!ts->eflags.zero) {
        goto loc_43A160;
    }

loc_43A179:
	mov(mv, &ts->eax, x86::mem(ts->edi + 0x38, 4));
	lea(mv, &ts->esi, x86::mem(ts->edi + 0x38, 4));
	cmp(&ts->eflags, ts->eax, ts->esi);
	mov(mv, x86::mem(ts->esp + 0x14, 1), 0x1);
	if (ts->eflags.zero) {
        goto loc_43A1A1;
    }

loc_43A188:
	mov(mv, &ts->ecx, x86::mem(ts->eax, 4));
	mov(mv, &ts->edx, x86::mem(ts->eax + 0x4, 4));
	mov(mv, x86::mem(ts->edx, 4), ts->ecx);
	push(mv, &ts->esp, ts->eax);
	mov(mv, x86::mem(ts->ecx + 0x4, 4), ts->edx);
	game::sub_440EF0(ts, mv);
	mov(mv, &ts->eax, x86::mem(ts->esi, 4));
	add(&ts->esp, 0x4);
	cmp(&ts->eflags, ts->eax, ts->esi);
	if (!ts->eflags.zero) {
        goto loc_43A188;
    }

loc_43A1A1:
	lea(mv, &ts->ecx, x86::mem(ts->edi + 0x30, 4));
	mov(mv, x86::mem(ts->esp + 0x14, 1), 0x0);
	game::sub_4358E0(ts, mv);
	mov(mv, &ts->eax, x86::mem(ts->edi + 0x28, 4));
	lea(mv, &ts->esi, x86::mem(ts->edi + 0x28, 4));
	cmp(&ts->eflags, ts->eax, ts->esi);
	mov(mv, x86::mem(ts->esp + 0x14, 4), 0xFFFFFFFF);
	if (ts->eflags.zero) {
        goto loc_43A1D9;
    }

loc_43A1C0:
	mov(mv, &ts->ecx, x86::mem(ts->eax, 4));
	mov(mv, &ts->edx, x86::mem(ts->eax + 0x4, 4));
	mov(mv, x86::mem(ts->edx, 4), ts->ecx);
	push(mv, &ts->esp, ts->eax);
	mov(mv, x86::mem(ts->ecx + 0x4, 4), ts->edx);
	game::sub_440EF0(ts, mv);
	mov(mv, &ts->eax, x86::mem(ts->esi, 4));
	add(&ts->esp, 0x4);
	cmp(&ts->eflags, ts->eax, ts->esi);
	if (!ts->eflags.zero) {
        goto loc_43A1C0;
    }

loc_43A1D9:
	mov(mv, &ts->ecx, x86::mem(ts->esp + 0xC, 4));
	pop(mv, &ts->esp, ts->edi);
	pop(mv, &ts->esp, ts->esi);
	mov(mv, x86::mem(0x0, 4), ts->ecx);
	add(&ts->esp, 0x10);
	retn(mv, &ts->esp);

loc_771F00:
	mov(mv, &ts->ecx, x86::mem(ts->ebp - 0x10, 4));
	add(&ts->ecx, 0x28);
	goto sub_4835C0;

loc_771F0B:
	mov(mv, &ts->ecx, x86::mem(ts->ebp - 0x10, 4));
	add(&ts->ecx, 0x30);
	goto sub_4358E0;

loc_771F16:
	mov(mv, &ts->ecx, x86::mem(ts->ebp - 0x10, 4));
	add(&ts->ecx, 0x38);
	goto sub_4835C0;

loc_771F21:
	mov(mv, &ts->ecx, x86::mem(ts->ebp - 0x10, 4));
	add(&ts->ecx, 0x40);
	goto sub_4835C0;

loc_771F2C:
	mov(mv, &ts->ecx, x86::mem(ts->ebp - 0x10, 4));
	add(&ts->ecx, 0x48);
	goto sub_436800;

loc_771F37:
	mov(&ts->eax, 0x7DE40C);
	goto ___CxxFrameHandler;
}

void unknown_libname_163(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x827B88);
	goto sub_43A9A0;
}

void unknown_libname_164(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x828528);
	goto sub_43CAD0;
}

void nullsub_18(x86::thread_state* ts, x86::memory_view* mv) {
	retn(mv, &ts->esp);
}

void unknown_libname_165(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x828530);
	goto loc_4407D0;

loc_4407D0:
	push(mv, &ts->esp, ts->esi);
	lea(mv, &ts->esi, x86::mem(ts->ecx + 0x4, 4));
	mov(&ts->eax, ts->esi);
	cmp(&ts->eflags, ts->eax, ts->esi);
	mov(mv, x86::mem(ts->ecx, 4), 0x0);
	mov(mv, x86::mem(ts->esi, 4), ts->esi);
	mov(mv, x86::mem(ts->esi + 0x4, 4), ts->esi);
	if (ts->eflags.zero) {
        goto loc_4407FE;
    }

loc_4407E5:
	mov(mv, &ts->ecx, x86::mem(ts->eax, 4));
	mov(mv, &ts->edx, x86::mem(ts->eax + 0x4, 4));
	mov(mv, x86::mem(ts->edx, 4), ts->ecx);
	push(mv, &ts->esp, ts->eax);
	mov(mv, x86::mem(ts->ecx + 0x4, 4), ts->edx);
	game::j__free(ts, mv);
	mov(mv, &ts->eax, x86::mem(ts->esi, 4));
	add(&ts->esp, 0x4);
	cmp(&ts->eflags, ts->eax, ts->esi);
	if (!ts->eflags.zero) {
        goto loc_4407E5;
    }

loc_4407FE:
	pop(mv, &ts->esp, ts->esi);
	retn(mv, &ts->esp);
}

void unknown_libname_166(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8286FC);
	goto sub_4466C0;
}

void unknown_libname_167(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x828770);
	goto loc_4579A0;

loc_4579A0:
	push(mv, &ts->esp, ts->esi);
	push(mv, &ts->esp, ts->edi);
	push(mv, &ts->esp, 0x0);
	mov(&ts->esi, ts->ecx);
	game::sub_455C80(ts, mv);
	mov(mv, &ts->eax, x86::mem(ts->esi + 0x10, 4));
	test(&ts->eflags, ts->eax, ts->eax);
	if (ts->eflags.zero) {
        goto loc_4579CF;
    }
	mov(mv, &ts->ecx, x86::mem(ts->eax - 0x4, 4));
	lea(mv, &ts->edi, x86::mem(ts->eax - 0x4, 4));
	push(mv, &ts->esp, 0x452BC0);
	push(mv, &ts->esp, ts->ecx);
	push(mv, &ts->esp, 0x14);
	push(mv, &ts->esp, ts->eax);
	game::_eh_vector_destructor_iterator__void_P_uint_int_void__P__void_P__(ts, mv);
	push(mv, &ts->esp, ts->edi);
	game::j__free(ts, mv);
	add(&ts->esp, 0x4);

loc_4579CF:
	mov(mv, &ts->eax, x86::mem(ts->esi + 0x14, 4));
	test(&ts->eflags, ts->eax, ts->eax);
	if (ts->eflags.zero) {
        goto loc_4579F3;
    }
	mov(mv, &ts->edx, x86::mem(ts->eax - 0x4, 4));
	lea(mv, &ts->edi, x86::mem(ts->eax - 0x4, 4));
	push(mv, &ts->esp, 0x452BC0);
	push(mv, &ts->esp, ts->edx);
	push(mv, &ts->esp, 0x14);
	push(mv, &ts->esp, ts->eax);
	game::_eh_vector_destructor_iterator__void_P_uint_int_void__P__void_P__(ts, mv);
	push(mv, &ts->esp, ts->edi);
	game::j__free(ts, mv);
	add(&ts->esp, 0x4);

loc_4579F3:
	mov(mv, &ts->esi, x86::mem(ts->esi + 0x18, 4));
	test(&ts->eflags, ts->esi, ts->esi);
	if (ts->eflags.zero) {
        goto loc_457A17;
    }
	mov(mv, &ts->eax, x86::mem(ts->esi - 0x4, 4));
	push(mv, &ts->esp, 0x452BC0);
	lea(mv, &ts->edi, x86::mem(ts->esi - 0x4, 4));
	push(mv, &ts->esp, ts->eax);
	push(mv, &ts->esp, 0x14);
	push(mv, &ts->esp, ts->esi);
	game::_eh_vector_destructor_iterator__void_P_uint_int_void__P__void_P__(ts, mv);
	push(mv, &ts->esp, ts->edi);
	game::j__free(ts, mv);
	add(&ts->esp, 0x4);

loc_457A17:
	pop(mv, &ts->esp, ts->edi);
	pop(mv, &ts->esp, ts->esi);
	retn(mv, &ts->esp);
}

void unknown_libname_168(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x82C6E8);
	goto sub_5768E0;
}

void unknown_libname_169(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x82C694);
	goto sub_43CAD0;
}

void unknown_libname_170(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x82C710);
	goto sub_605390;
}

void unknown_libname_171(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x82BEA0);
	goto sub_605390;
}

void nullsub_29(x86::thread_state* ts, x86::memory_view* mv) {
	retn(mv, &ts->esp);
}

void nullsub_30(x86::thread_state* ts, x86::memory_view* mv) {
	retn(mv, &ts->esp);
}

void nullsub_31(x86::thread_state* ts, x86::memory_view* mv) {
	retn(mv, &ts->esp);
}

void nullsub_32(x86::thread_state* ts, x86::memory_view* mv) {
	retn(mv, &ts->esp);
}

void nullsub_33(x86::thread_state* ts, x86::memory_view* mv) {
	retn(mv, &ts->esp);
}

void nullsub_34(x86::thread_state* ts, x86::memory_view* mv) {
	retn(mv, &ts->esp);
}

void nullsub_35(x86::thread_state* ts, x86::memory_view* mv) {
	retn(mv, &ts->esp);
}

void nullsub_36(x86::thread_state* ts, x86::memory_view* mv) {
	retn(mv, &ts->esp);
}

void unknown_libname_172(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x82C5E8);
	goto sub_605390;
}

void nullsub_19(x86::thread_state* ts, x86::memory_view* mv) {
	retn(mv, &ts->esp);
}

void nullsub_20(x86::thread_state* ts, x86::memory_view* mv) {
	retn(mv, &ts->esp);
}

void nullsub_21(x86::thread_state* ts, x86::memory_view* mv) {
	retn(mv, &ts->esp);
}

void nullsub_22(x86::thread_state* ts, x86::memory_view* mv) {
	retn(mv, &ts->esp);
}

void nullsub_23(x86::thread_state* ts, x86::memory_view* mv) {
	retn(mv, &ts->esp);
}

void nullsub_24(x86::thread_state* ts, x86::memory_view* mv) {
	retn(mv, &ts->esp);
}

void nullsub_25(x86::thread_state* ts, x86::memory_view* mv) {
	retn(mv, &ts->esp);
}

void nullsub_26(x86::thread_state* ts, x86::memory_view* mv) {
	retn(mv, &ts->esp);
}

void nullsub_27(x86::thread_state* ts, x86::memory_view* mv) {
	retn(mv, &ts->esp);
}

void nullsub_28(x86::thread_state* ts, x86::memory_view* mv) {
	retn(mv, &ts->esp);
}

void unknown_libname_173(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x82BEBC);
	goto sub_4835C0;
}

void unknown_libname_174(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x82C6A4);
	goto sub_4835C0;
}

void unknown_libname_175(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x82BEC4);
	goto sub_4835C0;
}

void nullsub_37(x86::thread_state* ts, x86::memory_view* mv) {
	retn(mv, &ts->esp);
}

void nullsub_38(x86::thread_state* ts, x86::memory_view* mv) {
	retn(mv, &ts->esp);
}

void sub_781D80(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x4022C0);
	push(mv, &ts->esp, 0xFA);
	push(mv, &ts->esp, 0x30);
	push(mv, &ts->esp, 0x82DC08);
	game::_eh_vector_destructor_iterator__void_P_uint_int_void__P__void_P__(ts, mv);
	retn(mv, &ts->esp);
}

void unknown_libname_176(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x830D08);
	goto sub_4DEF30;
}

void unknown_libname_177(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x82DBC8);
	goto loc_4933E0;

loc_491B00:
	push(mv, &ts->esp, ts->esi);
	mov(&ts->esi, ts->ecx);
	mov(mv, &ts->eax, x86::mem(ts->esi, 4));
	cmp(&ts->eflags, ts->eax, ts->esi);
	if (ts->eflags.zero) {
        goto loc_491B2F;
    }
	lea(mv, &ts->esp, x86::mem(ts->esp, 4));

loc_491B10:
	mov(mv, &ts->ecx, x86::mem(ts->eax, 4));
	mov(mv, &ts->edx, x86::mem(ts->eax + 0x4, 4));
	mov(mv, x86::mem(ts->edx, 4), ts->ecx);
	push(mv, &ts->esp, ts->eax);
	mov(mv, x86::mem(ts->ecx + 0x4, 4), ts->edx);
	mov(mv, &ts->eax, x86::mem(0x82DA84, 4));
	push(mv, &ts->esp, ts->eax);
	game::sub_43F920(ts, mv);
	mov(mv, &ts->eax, x86::mem(ts->esi, 4));
	add(&ts->esp, 0x8);
	cmp(&ts->eflags, ts->eax, ts->esi);
	if (!ts->eflags.zero) {
        goto loc_491B10;
    }

loc_491B2F:
	pop(mv, &ts->esp, ts->esi);
	retn(mv, &ts->esp);

loc_4933E0:
	add(&ts->ecx, 0x18);
	goto loc_491B00;
}

void unknown_libname_178(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8358C0);
	goto loc_491B40;

loc_491B40:
	push(mv, &ts->esp, ts->esi);
	mov(&ts->esi, ts->ecx);
	mov(mv, &ts->eax, x86::mem(ts->esi, 4));
	cmp(&ts->eflags, ts->eax, ts->esi);
	if (ts->eflags.zero) {
        goto loc_491B70;
    }
	lea(mv, &ts->esp, x86::mem(ts->esp, 4));

loc_491B50:
	mov(mv, &ts->ecx, x86::mem(ts->eax, 4));
	mov(mv, &ts->edx, x86::mem(ts->eax + 0x4, 4));
	add(&ts->eax, 0xFFFFFFFC);
	test(&ts->eflags, ts->eax, ts->eax);
	mov(mv, x86::mem(ts->edx, 4), ts->ecx);
	mov(mv, x86::mem(ts->ecx + 0x4, 4), ts->edx);
	if (ts->eflags.zero) {
        goto loc_491B6A;
    }
	push(mv, &ts->esp, ts->eax);
	game::j__free(ts, mv);
	add(&ts->esp, 0x4);

loc_491B6A:
	mov(mv, &ts->eax, x86::mem(ts->esi, 4));
	cmp(&ts->eflags, ts->eax, ts->esi);
	if (!ts->eflags.zero) {
        goto loc_491B50;
    }

loc_491B70:
	pop(mv, &ts->esp, ts->esi);
	retn(mv, &ts->esp);
}

void sub_781DD0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x4919D0);
	push(mv, &ts->esp, 0x16);
	push(mv, &ts->esp, 0x70);
	push(mv, &ts->esp, 0x832DE0);
	game::_eh_vector_destructor_iterator__void_P_uint_int_void__P__void_P__(ts, mv);
	retn(mv, &ts->esp);
}

void unknown_libname_179(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x830AF0);
	goto loc_491B80;

loc_491B80:
	push(mv, &ts->esp, ts->esi);
	push(mv, &ts->esp, ts->edi);
	mov(&ts->edi, ts->ecx);
	mov(mv, &ts->esi, x86::mem(ts->edi, 4));
	cmp(&ts->eflags, ts->esi, ts->edi);
	if (ts->eflags.zero) {
        goto loc_491BB6;
    }
	lea(mv, &ts->ebx, x86::mem(ts->ebx, 4));

loc_491B90:
	mov(mv, &ts->ecx, x86::mem(ts->esi + 0x4, 4));
	mov(mv, &ts->eax, x86::mem(ts->esi, 4));
	mov(mv, x86::mem(ts->ecx, 4), ts->eax);
	mov(mv, x86::mem(ts->eax + 0x4, 4), ts->ecx);
	mov(&ts->ecx, ts->esi);
	game::sub_48FD10(ts, mv);
	mov(mv, &ts->eax, x86::mem(0x82DB0C, 4));
	push(mv, &ts->esp, ts->esi);
	push(mv, &ts->esp, ts->eax);
	game::sub_43F920(ts, mv);
	mov(mv, &ts->esi, x86::mem(ts->edi, 4));
	add(&ts->esp, 0x8);
	cmp(&ts->eflags, ts->esi, ts->edi);
	if (!ts->eflags.zero) {
        goto loc_491B90;
    }

loc_491BB6:
	pop(mv, &ts->esp, ts->edi);
	pop(mv, &ts->esp, ts->esi);
	retn(mv, &ts->esp);
}

void unknown_libname_180(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x82DC00);
	goto loc_491BC0;

loc_491BC0:
	push(mv, &ts->esp, ts->esi);
	push(mv, &ts->esp, ts->edi);
	mov(&ts->edi, ts->ecx);
	mov(mv, &ts->esi, x86::mem(ts->edi, 4));
	cmp(&ts->eflags, ts->esi, ts->edi);
	if (ts->eflags.zero) {
        goto loc_491BF6;
    }
	lea(mv, &ts->ebx, x86::mem(ts->ebx, 4));

loc_491BD0:
	mov(mv, &ts->ecx, x86::mem(ts->esi + 0x4, 4));
	mov(mv, &ts->eax, x86::mem(ts->esi, 4));
	mov(mv, x86::mem(ts->ecx, 4), ts->eax);
	mov(mv, x86::mem(ts->eax + 0x4, 4), ts->ecx);
	mov(&ts->ecx, ts->esi);
	game::sub_48FED0(ts, mv);
	mov(mv, &ts->eax, x86::mem(0x82DB0C, 4));
	push(mv, &ts->esp, ts->esi);
	push(mv, &ts->esp, ts->eax);
	game::sub_43F920(ts, mv);
	mov(mv, &ts->esi, x86::mem(ts->edi, 4));
	add(&ts->esp, 0x8);
	cmp(&ts->eflags, ts->esi, ts->edi);
	if (!ts->eflags.zero) {
        goto loc_491BD0;
    }

loc_491BF6:
	pop(mv, &ts->esp, ts->edi);
	pop(mv, &ts->esp, ts->esi);
	retn(mv, &ts->esp);
}

void unknown_libname_181(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x83579C);
	goto loc_4933E0;

loc_4933E0:
	add(&ts->ecx, 0x18);
	goto loc_491B00;

loc_491B00:
}

void unknown_libname_182(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8357E0);
	goto loc_4945C0;

loc_4945C0:
	push(mv, &ts->esp, 0xFFFFFFFF);
	push(mv, &ts->esp, 0x772828);
	mov(mv, &ts->eax, x86::mem(0x0, 4));
	push(mv, &ts->esp, ts->eax);
	mov(mv, x86::mem(0x0, 4), ts->esp);
	push(mv, &ts->esp, ts->ecx);
	push(mv, &ts->esp, ts->esi);
	mov(&ts->esi, ts->ecx);
	mov(mv, x86::mem(ts->esp + 0x4, 4), ts->esi);
	lea(mv, &ts->ecx, x86::mem(ts->esi + 0x8, 4));
	mov(mv, x86::mem(ts->esp + 0x10, 4), 0x0);
	game::sub_4367C0(ts, mv);
	mov(&ts->ecx, ts->esi);
	mov(mv, x86::mem(ts->esp + 0x10, 4), 0xFFFFFFFF);
	game::sub_491E10(ts, mv);
	mov(mv, &ts->ecx, x86::mem(ts->esp + 0x8, 4));
	pop(mv, &ts->esp, ts->esi);
	mov(mv, x86::mem(0x0, 4), ts->ecx);
	add(&ts->esp, 0x10);
	retn(mv, &ts->esp);

loc_772820:
	mov(mv, &ts->ecx, x86::mem(ts->ebp - 0x10, 4));
	goto sub_491E10;

loc_772828:
	mov(&ts->eax, 0x7DED90);
	goto ___CxxFrameHandler;
}

void unknown_libname_183(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x82DBC0);
	goto loc_494570;

loc_494570:
	push(mv, &ts->esp, ts->esi);
	push(mv, &ts->esp, ts->edi);
	mov(&ts->edi, ts->ecx);
	mov(mv, &ts->esi, x86::mem(ts->edi, 4));
	cmp(&ts->eflags, ts->esi, ts->edi);
	if (ts->eflags.zero) {
        goto loc_4945A6;
    }
	lea(mv, &ts->ebx, x86::mem(ts->ebx, 4));

loc_494580:
	mov(mv, &ts->ecx, x86::mem(ts->esi + 0x4, 4));
	mov(mv, &ts->eax, x86::mem(ts->esi, 4));
	mov(mv, x86::mem(ts->ecx, 4), ts->eax);
	mov(mv, x86::mem(ts->eax + 0x4, 4), ts->ecx);
	mov(&ts->ecx, ts->esi);
	game::sub_4903B0(ts, mv);
	mov(mv, &ts->eax, x86::mem(0x82DA88, 4));
	push(mv, &ts->esp, ts->esi);
	push(mv, &ts->esp, ts->eax);
	game::sub_43F920(ts, mv);
	mov(mv, &ts->esi, x86::mem(ts->edi, 4));
	add(&ts->esp, 0x8);
	cmp(&ts->eflags, ts->esi, ts->edi);
	if (!ts->eflags.zero) {
        goto loc_494580;
    }

loc_4945A6:
	pop(mv, &ts->esp, ts->edi);
	pop(mv, &ts->esp, ts->esi);
	retn(mv, &ts->esp);
}

void unknown_libname_184(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x832DA4);
	goto loc_494570;

loc_494570:
	push(mv, &ts->esp, ts->esi);
	push(mv, &ts->esp, ts->edi);
	mov(&ts->edi, ts->ecx);
	mov(mv, &ts->esi, x86::mem(ts->edi, 4));
	cmp(&ts->eflags, ts->esi, ts->edi);
	if (ts->eflags.zero) {
        goto loc_4945A6;
    }
	lea(mv, &ts->ebx, x86::mem(ts->ebx, 4));

loc_494580:
	mov(mv, &ts->ecx, x86::mem(ts->esi + 0x4, 4));
	mov(mv, &ts->eax, x86::mem(ts->esi, 4));
	mov(mv, x86::mem(ts->ecx, 4), ts->eax);
	mov(mv, x86::mem(ts->eax + 0x4, 4), ts->ecx);
	mov(&ts->ecx, ts->esi);
	game::sub_4903B0(ts, mv);
	mov(mv, &ts->eax, x86::mem(0x82DA88, 4));
	push(mv, &ts->esp, ts->esi);
	push(mv, &ts->esp, ts->eax);
	game::sub_43F920(ts, mv);
	mov(mv, &ts->esi, x86::mem(ts->edi, 4));
	add(&ts->esp, 0x8);
	cmp(&ts->eflags, ts->esi, ts->edi);
	if (!ts->eflags.zero) {
        goto loc_494580;
    }

loc_4945A6:
	pop(mv, &ts->esp, ts->edi);
	pop(mv, &ts->esp, ts->esi);
	retn(mv, &ts->esp);
}

void unknown_libname_185(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x830D30);
	goto sub_494240;
}

void unknown_libname_186(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x830D14);
	goto sub_4DEF30;
}

void unknown_libname_187(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8358C8);
	goto sub_4DEF30;
}

void unknown_libname_188(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x835860);
	goto loc_4945C0;

loc_4945C0:
	push(mv, &ts->esp, 0xFFFFFFFF);
	push(mv, &ts->esp, 0x772828);
	mov(mv, &ts->eax, x86::mem(0x0, 4));
	push(mv, &ts->esp, ts->eax);
	mov(mv, x86::mem(0x0, 4), ts->esp);
	push(mv, &ts->esp, ts->ecx);
	push(mv, &ts->esp, ts->esi);
	mov(&ts->esi, ts->ecx);
	mov(mv, x86::mem(ts->esp + 0x4, 4), ts->esi);
	lea(mv, &ts->ecx, x86::mem(ts->esi + 0x8, 4));
	mov(mv, x86::mem(ts->esp + 0x10, 4), 0x0);
	game::sub_4367C0(ts, mv);
	mov(&ts->ecx, ts->esi);
	mov(mv, x86::mem(ts->esp + 0x10, 4), 0xFFFFFFFF);
	game::sub_491E10(ts, mv);
	mov(mv, &ts->ecx, x86::mem(ts->esp + 0x8, 4));
	pop(mv, &ts->esp, ts->esi);
	mov(mv, x86::mem(0x0, 4), ts->ecx);
	add(&ts->esp, 0x10);
	retn(mv, &ts->esp);
}

void unknown_libname_189(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x830C78);
	goto sub_494980;
}

void unknown_libname_190(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x830AE8);
	goto loc_494D90;

loc_494D90:
	push(mv, &ts->esp, ts->esi);
	push(mv, &ts->esp, ts->edi);
	mov(&ts->edi, ts->ecx);
	mov(mv, &ts->esi, x86::mem(ts->edi, 4));
	cmp(&ts->eflags, ts->esi, ts->edi);
	if (ts->eflags.zero) {
        goto loc_494DC0;
    }
	lea(mv, &ts->ebx, x86::mem(ts->ebx, 4));

loc_494DA0:
	mov(mv, &ts->ecx, x86::mem(ts->esi + 0x4, 4));
	mov(mv, &ts->eax, x86::mem(ts->esi, 4));
	mov(mv, x86::mem(ts->ecx, 4), ts->eax);
	mov(mv, x86::mem(ts->eax + 0x4, 4), ts->ecx);
	mov(&ts->ecx, ts->esi);
	game::sub_494240(ts, mv);
	push(mv, &ts->esp, ts->esi);
	game::j__free(ts, mv);
	mov(mv, &ts->esi, x86::mem(ts->edi, 4));
	add(&ts->esp, 0x4);
	cmp(&ts->eflags, ts->esi, ts->edi);
	if (!ts->eflags.zero) {
        goto loc_494DA0;
    }

loc_494DC0:
	pop(mv, &ts->esp, ts->edi);
	pop(mv, &ts->esp, ts->esi);
	retn(mv, &ts->esp);
}

void unknown_libname_191(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x830D1C);
	goto loc_4950F0;

loc_4950F0:
	push(mv, &ts->esp, ts->esi);
	push(mv, &ts->esp, ts->edi);
	mov(&ts->edi, ts->ecx);
	mov(mv, &ts->esi, x86::mem(ts->edi, 4));
	cmp(&ts->eflags, ts->esi, ts->edi);
	if (ts->eflags.zero) {
        goto loc_495120;
    }
	lea(mv, &ts->ebx, x86::mem(ts->ebx, 4));

loc_495100:
	mov(mv, &ts->ecx, x86::mem(ts->esi + 0x4, 4));
	mov(mv, &ts->eax, x86::mem(ts->esi, 4));
	mov(mv, x86::mem(ts->ecx, 4), ts->eax);
	mov(mv, x86::mem(ts->eax + 0x4, 4), ts->ecx);
	mov(&ts->ecx, ts->esi);
	game::sub_494980(ts, mv);
	push(mv, &ts->esp, ts->esi);
	game::j__free(ts, mv);
	mov(mv, &ts->esi, x86::mem(ts->edi, 4));
	add(&ts->esp, 0x4);
	cmp(&ts->eflags, ts->esi, ts->edi);
	if (!ts->eflags.zero) {
        goto loc_495100;
    }

loc_495120:
	pop(mv, &ts->esp, ts->edi);
	pop(mv, &ts->esp, ts->esi);
	retn(mv, &ts->esp);
}

void unknown_libname_192(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x835858);
	goto loc_495130;

loc_495130:
	push(mv, &ts->esp, ts->edi);
	mov(&ts->edi, ts->ecx);
	mov(mv, &ts->eax, x86::mem(ts->edi, 4));
	cmp(&ts->eflags, ts->eax, ts->edi);
	if (ts->eflags.zero) {
        goto loc_495168;
    }
	push(mv, &ts->esp, ts->esi);
	lea(mv, &ts->ebx, x86::mem(ts->ebx, 4));

loc_495140:
	mov(mv, &ts->ecx, x86::mem(ts->eax, 4));
	mov(mv, &ts->edx, x86::mem(ts->eax + 0x4, 4));
	lea(mv, &ts->esi, x86::mem(ts->eax - 0x4, 4));
	test(&ts->eflags, ts->esi, ts->esi);
	mov(mv, x86::mem(ts->edx, 4), ts->ecx);
	mov(mv, x86::mem(ts->ecx + 0x4, 4), ts->edx);
	if (ts->eflags.zero) {
        goto loc_495161;
    }
	mov(&ts->ecx, ts->esi);
	game::sub_4945B0(ts, mv);
	push(mv, &ts->esp, ts->esi);
	game::j__free(ts, mv);
	add(&ts->esp, 0x4);

loc_495161:
	mov(mv, &ts->eax, x86::mem(ts->edi, 4));
	cmp(&ts->eflags, ts->eax, ts->edi);
	if (!ts->eflags.zero) {
        goto loc_495140;
    }
	pop(mv, &ts->esp, ts->esi);

loc_495168:
	pop(mv, &ts->esp, ts->edi);
	retn(mv, &ts->esp);
}

void unknown_libname_193(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x835794);
	goto loc_495130;

loc_495130:
	push(mv, &ts->esp, ts->edi);
	mov(&ts->edi, ts->ecx);
	mov(mv, &ts->eax, x86::mem(ts->edi, 4));
	cmp(&ts->eflags, ts->eax, ts->edi);
	if (ts->eflags.zero) {
        goto loc_495168;
    }
	push(mv, &ts->esp, ts->esi);
	lea(mv, &ts->ebx, x86::mem(ts->ebx, 4));

loc_495140:
	mov(mv, &ts->ecx, x86::mem(ts->eax, 4));
	mov(mv, &ts->edx, x86::mem(ts->eax + 0x4, 4));
	lea(mv, &ts->esi, x86::mem(ts->eax - 0x4, 4));
	test(&ts->eflags, ts->esi, ts->esi);
	mov(mv, x86::mem(ts->edx, 4), ts->ecx);
	mov(mv, x86::mem(ts->ecx + 0x4, 4), ts->edx);
	if (ts->eflags.zero) {
        goto loc_495161;
    }
	mov(&ts->ecx, ts->esi);
	game::sub_4945B0(ts, mv);
	push(mv, &ts->esp, ts->esi);
	game::j__free(ts, mv);
	add(&ts->esp, 0x4);

loc_495161:
	mov(mv, &ts->eax, x86::mem(ts->edi, 4));
	cmp(&ts->eflags, ts->eax, ts->edi);
	if (!ts->eflags.zero) {
        goto loc_495140;
    }
	pop(mv, &ts->esp, ts->esi);

loc_495168:
	pop(mv, &ts->esp, ts->edi);
	retn(mv, &ts->esp);
}

void unknown_libname_194(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x835850);
	goto loc_495170;

loc_495170:
	push(mv, &ts->esp, ts->esi);
	push(mv, &ts->esp, ts->edi);
	mov(&ts->edi, ts->ecx);
	mov(mv, &ts->esi, x86::mem(ts->edi, 4));
	cmp(&ts->eflags, ts->esi, ts->edi);
	if (ts->eflags.zero) {
        goto loc_4951A0;
    }
	lea(mv, &ts->ebx, x86::mem(ts->ebx, 4));

loc_495180:
	mov(mv, &ts->ecx, x86::mem(ts->esi + 0x4, 4));
	mov(mv, &ts->eax, x86::mem(ts->esi, 4));
	mov(mv, x86::mem(ts->ecx, 4), ts->eax);
	mov(mv, x86::mem(ts->eax + 0x4, 4), ts->ecx);
	mov(&ts->ecx, ts->esi);
	game::sub_437AD0(ts, mv);
	push(mv, &ts->esp, ts->esi);
	game::j__free(ts, mv);
	mov(mv, &ts->esi, x86::mem(ts->edi, 4));
	add(&ts->esp, 0x4);
	cmp(&ts->eflags, ts->esi, ts->edi);
	if (!ts->eflags.zero) {
        goto loc_495180;
    }

loc_4951A0:
	pop(mv, &ts->esp, ts->edi);
	pop(mv, &ts->esp, ts->esi);
	retn(mv, &ts->esp);
}

void sub_781EF0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x4957A0);
	push(mv, &ts->esp, 0x7);
	push(mv, &ts->esp, 0x44);
	push(mv, &ts->esp, 0x836568);
	game::_eh_vector_destructor_iterator__void_P_uint_int_void__P__void_P__(ts, mv);
	retn(mv, &ts->esp);
}

void unknown_libname_195(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8364F4);
	goto nullsub_1;
}

void unknown_libname_196(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8371B0);
	goto sub_401800;
}

void unknown_libname_197(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x836750);
	goto sub_401800;
}

void unknown_libname_198(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x836560);
	goto sub_4835C0;
}

void unknown_libname_199(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x863760);
	goto sub_43CAD0;
}

void unknown_libname_200(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x839C40);
	goto sub_50F7D0;
}

void nullsub_40(x86::thread_state* ts, x86::memory_view* mv) {
	retn(mv, &ts->esp);
}

void unknown_libname_201(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8637D0);
	goto loc_5104B0;

loc_5104B0:
	mov(&ts->eax, 0x78F544);
	mov(mv, x86::mem(ts->ecx + 0xDC, 4), 0x79AA90);
	mov(mv, x86::mem(ts->ecx + 0xE4, 4), ts->eax);
	mov(mv, x86::mem(ts->ecx, 4), 0x79AA90);
	mov(mv, x86::mem(ts->ecx + 0x8, 4), ts->eax);
	retn(mv, &ts->esp);
}

void nullsub_39(x86::thread_state* ts, x86::memory_view* mv) {
	retn(mv, &ts->esp);
}

void unknown_libname_202(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x85AD40);
	goto loc_512E40;

loc_512E40:
	push(mv, &ts->esp, 0xFFFFFFFF);
	push(mv, &ts->esp, 0x7775AE);
	mov(mv, &ts->eax, x86::mem(0x0, 4));
	push(mv, &ts->esp, ts->eax);
	mov(mv, x86::mem(0x0, 4), ts->esp);
	push(mv, &ts->esp, ts->ecx);
	push(mv, &ts->esp, ts->esi);
	mov(&ts->esi, ts->ecx);
	mov(mv, x86::mem(ts->esp + 0x4, 4), ts->esi);
	push(mv, &ts->esp, 0x401800);
	push(mv, &ts->esp, 0x3);
	push(mv, &ts->esp, 0x8F0);
	lea(mv, &ts->eax, x86::mem(ts->esi + 0x4240, 4));
	push(mv, &ts->esp, ts->eax);
	mov(mv, x86::mem(ts->esp + 0x20, 4), 0x0);
	game::_eh_vector_destructor_iterator__void_P_uint_int_void__P__void_P__(ts, mv);
	push(mv, &ts->esp, 0x4FE270);
	push(mv, &ts->esp, 0x6);
	push(mv, &ts->esp, 0xC);
	add(&ts->esi, 0xD2C);
	push(mv, &ts->esp, ts->esi);
	mov(mv, x86::mem(ts->esp + 0x20, 4), 0xFFFFFFFF);
	game::_eh_vector_destructor_iterator__void_P_uint_int_void__P__void_P__(ts, mv);
	mov(mv, &ts->ecx, x86::mem(ts->esp + 0x8, 4));
	pop(mv, &ts->esp, ts->esi);
	mov(mv, x86::mem(0x0, 4), ts->ecx);
	add(&ts->esp, 0x10);
	retn(mv, &ts->esp);

loc_7775A0:
	mov(mv, &ts->ecx, x86::mem(ts->ebp - 0x10, 4));
	add(&ts->ecx, 0xD24);
	goto loc_500390;

SEH_532740:
	mov(&ts->eax, 0x7E251C);
	goto ___CxxFrameHandler;

loc_500390:
}

void sub_781FB0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x525C50);
	push(mv, &ts->esp, 0x100);
	push(mv, &ts->esp, 0x8);
	push(mv, &ts->esp, 0x8639A0);
	game::_eh_vector_destructor_iterator__void_P_uint_int_void__P__void_P__(ts, mv);
	retn(mv, &ts->esp);
}

void unknown_libname_203(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8637B0);
	goto sub_52CC40;
}

void unknown_libname_204(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x83A9D0);
	goto loc_531CC0;

loc_531CC0:
	push(mv, &ts->esp, 0xFFFFFFFF);
	push(mv, &ts->esp, 0x777929);
	mov(mv, &ts->eax, x86::mem(0x0, 4));
	push(mv, &ts->esp, ts->eax);
	mov(mv, x86::mem(0x0, 4), ts->esp);
	push(mv, &ts->esp, ts->ecx);
	push(mv, &ts->esp, ts->esi);
	mov(&ts->esi, ts->ecx);
	mov(mv, x86::mem(ts->esp + 0x4, 4), ts->esi);
	lea(mv, &ts->ecx, x86::mem(ts->esi + 0x1677C, 4));
	mov(mv, x86::mem(ts->esp + 0x10, 4), 0x0);
	game::sub_511820(ts, mv);
	push(mv, &ts->esp, 0x525CE0);
	push(mv, &ts->esp, 0x2);
	push(mv, &ts->esp, 0xAB4C);
	add(&ts->esi, 0x10);
	push(mv, &ts->esp, ts->esi);
	mov(mv, x86::mem(ts->esp + 0x20, 4), 0xFFFFFFFF);
	game::_eh_vector_destructor_iterator__void_P_uint_int_void__P__void_P__(ts, mv);
	mov(mv, &ts->ecx, x86::mem(ts->esp + 0x8, 4));
	pop(mv, &ts->esp, ts->esi);
	mov(mv, x86::mem(0x0, 4), ts->ecx);
	add(&ts->esp, 0x10);
	retn(mv, &ts->esp);

loc_777910:
	push(mv, &ts->esp, 0x525CE0);
	push(mv, &ts->esp, 0x2);
	push(mv, &ts->esp, 0xAB4C);
	mov(mv, &ts->eax, x86::mem(ts->ebp - 0x10, 4));
	add(&ts->eax, 0x10);
	push(mv, &ts->esp, ts->eax);
	game::_eh_vector_destructor_iterator__void_P_uint_int_void__P__void_P__(ts, mv);
	retn(mv, &ts->esp);

SEH_53ED20:
	mov(&ts->eax, 0x7E2A88);
	goto ___CxxFrameHandler;
}

void unknown_libname_205(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8637A0);
	goto sub_52C420;
}

void unknown_libname_206(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x863770);
	goto sub_52C420;
}

void unknown_libname_207(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x839C30);
	goto sub_52C420;
}

void unknown_libname_208(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x839BD0);
	goto sub_52C420;
}

void unknown_libname_209(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x863768);
	goto loc_531940;

loc_531940:
	push(mv, &ts->esp, ts->esi);
	push(mv, &ts->esp, ts->edi);
	mov(&ts->edi, ts->ecx);
	mov(mv, &ts->esi, x86::mem(ts->edi, 4));
	cmp(&ts->eflags, ts->esi, ts->edi);
	if (ts->eflags.zero) {
        goto loc_531970;
    }
	lea(mv, &ts->ebx, x86::mem(ts->ebx, 4));

loc_531950:
	mov(mv, &ts->ecx, x86::mem(ts->esi + 0x4, 4));
	mov(mv, &ts->eax, x86::mem(ts->esi, 4));
	mov(mv, x86::mem(ts->ecx, 4), ts->eax);
	mov(mv, x86::mem(ts->eax + 0x4, 4), ts->ecx);
	mov(&ts->ecx, ts->esi);
	game::sub_51BF60(ts, mv);
	push(mv, &ts->esp, ts->esi);
	game::j__free(ts, mv);
	mov(mv, &ts->esi, x86::mem(ts->edi, 4));
	add(&ts->esp, 0x4);
	cmp(&ts->eflags, ts->esi, ts->edi);
	if (!ts->eflags.zero) {
        goto loc_531950;
    }

loc_531970:
	pop(mv, &ts->esp, ts->edi);
	pop(mv, &ts->esp, ts->esi);
	retn(mv, &ts->esp);
}

void unknown_libname_210(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x838980);
	goto loc_5398E0;

loc_5398E0:
	push(mv, &ts->esp, 0xFFFFFFFF);
	push(mv, &ts->esp, 0x7776F6);
	mov(mv, &ts->eax, x86::mem(0x0, 4));
	push(mv, &ts->esp, ts->eax);
	mov(mv, x86::mem(0x0, 4), ts->esp);
	push(mv, &ts->esp, ts->ecx);
	push(mv, &ts->esp, ts->esi);
	mov(&ts->esi, ts->ecx);
	mov(mv, x86::mem(ts->esp + 0x4, 4), ts->esi);
	lea(mv, &ts->ecx, x86::mem(ts->esi + 0xCC4, 4));
	mov(mv, x86::mem(ts->esp + 0x10, 4), 0x1);
	game::nullsub_1(ts, mv);
	lea(mv, &ts->ecx, x86::mem(ts->esi + 0x3D4, 4));
	mov(mv, x86::mem(ts->esp + 0x10, 1), 0x0);
	game::nullsub_1(ts, mv);
	mov(mv, &ts->eax, x86::mem(ts->esi + 0x48, 4));
	add(&ts->esi, 0x48);
	cmp(&ts->eflags, ts->eax, ts->esi);
	mov(mv, x86::mem(ts->esp + 0x10, 4), 0xFFFFFFFF);
	if (ts->eflags.zero) {
        goto loc_53994B;
    }

loc_539932:
	mov(mv, &ts->ecx, x86::mem(ts->eax, 4));
	mov(mv, &ts->edx, x86::mem(ts->eax + 0x4, 4));
	mov(mv, x86::mem(ts->edx, 4), ts->ecx);
	push(mv, &ts->esp, ts->eax);
	mov(mv, x86::mem(ts->ecx + 0x4, 4), ts->edx);
	game::j__free(ts, mv);
	mov(mv, &ts->eax, x86::mem(ts->esi, 4));
	add(&ts->esp, 0x4);
	cmp(&ts->eflags, ts->eax, ts->esi);
	if (!ts->eflags.zero) {
        goto loc_539932;
    }

loc_53994B:
	mov(mv, &ts->ecx, x86::mem(ts->esp + 0x8, 4));
	pop(mv, &ts->esp, ts->esi);
	mov(mv, x86::mem(0x0, 4), ts->ecx);
	add(&ts->esp, 0x10);
	retn(mv, &ts->esp);

loc_7776E0:
	mov(mv, &ts->ecx, x86::mem(ts->ebp - 0x10, 4));
	add(&ts->ecx, 0x48);
	goto sub_4DEF30;

loc_7776EB:
	mov(mv, &ts->ecx, x86::mem(ts->ebp - 0x10, 4));
	add(&ts->ecx, 0x50);
	goto sub_401800;

SEH_53ADF0:
	mov(&ts->eax, 0x7E2BAC);
	goto ___CxxFrameHandler;
}

void unknown_libname_211(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8637BC);
	goto sub_4835C0;
}

void sub_782060(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x4022C0);
	push(mv, &ts->esp, 0x6);
	push(mv, &ts->esp, 0x20);
	push(mv, &ts->esp, 0x864640);
	game::_eh_vector_destructor_iterator__void_P_uint_int_void__P__void_P__(ts, mv);
	retn(mv, &ts->esp);
}

void unknown_libname_212(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x864630);
	goto sub_4DEF30;
}

void nullsub_41(x86::thread_state* ts, x86::memory_view* mv) {
	retn(mv, &ts->esp);
}

void nullsub_42(x86::thread_state* ts, x86::memory_view* mv) {
	retn(mv, &ts->esp);
}

void nullsub_43(x86::thread_state* ts, x86::memory_view* mv) {
	retn(mv, &ts->esp);
}

void nullsub_44(x86::thread_state* ts, x86::memory_view* mv) {
	retn(mv, &ts->esp);
}

void nullsub_45(x86::thread_state* ts, x86::memory_view* mv) {
	retn(mv, &ts->esp);
}

void nullsub_46(x86::thread_state* ts, x86::memory_view* mv) {
	retn(mv, &ts->esp);
}

void nullsub_47(x86::thread_state* ts, x86::memory_view* mv) {
	retn(mv, &ts->esp);
}

void nullsub_48(x86::thread_state* ts, x86::memory_view* mv) {
	retn(mv, &ts->esp);
}

void nullsub_49(x86::thread_state* ts, x86::memory_view* mv) {
	retn(mv, &ts->esp);
}

void nullsub_50(x86::thread_state* ts, x86::memory_view* mv) {
	retn(mv, &ts->esp);
}

void nullsub_51(x86::thread_state* ts, x86::memory_view* mv) {
	retn(mv, &ts->esp);
}

void nullsub_52(x86::thread_state* ts, x86::memory_view* mv) {
	retn(mv, &ts->esp);
}

void nullsub_53(x86::thread_state* ts, x86::memory_view* mv) {
	retn(mv, &ts->esp);
}

void nullsub_54(x86::thread_state* ts, x86::memory_view* mv) {
	retn(mv, &ts->esp);
}

void nullsub_55(x86::thread_state* ts, x86::memory_view* mv) {
	retn(mv, &ts->esp);
}

void nullsub_56(x86::thread_state* ts, x86::memory_view* mv) {
	retn(mv, &ts->esp);
}

void sub_782190(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x4022C0);
	push(mv, &ts->esp, 0x4);
	push(mv, &ts->esp, 0x30);
	push(mv, &ts->esp, 0x8653B0);
	game::_eh_vector_destructor_iterator__void_P_uint_int_void__P__void_P__(ts, mv);
	retn(mv, &ts->esp);
}

void sub_7821B0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x4022C0);
	push(mv, &ts->esp, 0x2);
	push(mv, &ts->esp, 0x20);
	push(mv, &ts->esp, 0x865360);
	game::_eh_vector_destructor_iterator__void_P_uint_int_void__P__void_P__(ts, mv);
	retn(mv, &ts->esp);
}

void sub_7821D0(x86::thread_state* ts, x86::memory_view* mv) {
	mov(mv, x86::mem(0x865930, 4), 0x7A0604);
	retn(mv, &ts->esp);
}

void unknown_libname_213(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8652F8);
	goto loc_577A70;

loc_577A70:
	push(mv, &ts->esp, 0x4022C0);
	push(mv, &ts->esp, 0x1);
	push(mv, &ts->esp, 0x54);
	push(mv, &ts->esp, ts->ecx);
	game::_eh_vector_destructor_iterator__void_P_uint_int_void__P__void_P__(ts, mv);
	retn(mv, &ts->esp);
}

void unknown_libname_214(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8651A4);
	goto loc_57A280;

loc_57A280:
	push(mv, &ts->esp, ts->esi);
	push(mv, &ts->esp, ts->edi);
	mov(&ts->edi, ts->ecx);
	mov(mv, &ts->esi, x86::mem(ts->edi, 4));
	cmp(&ts->eflags, ts->esi, ts->edi);
	if (ts->eflags.zero) {
        goto loc_57A2B6;
    }
	lea(mv, &ts->ebx, x86::mem(ts->ebx, 4));

loc_57A290:
	mov(mv, &ts->ecx, x86::mem(ts->esi + 0x4, 4));
	mov(mv, &ts->eax, x86::mem(ts->esi, 4));
	mov(mv, x86::mem(ts->ecx, 4), ts->eax);
	mov(mv, x86::mem(ts->eax + 0x4, 4), ts->ecx);
	mov(&ts->ecx, ts->esi);
	game::sub_577D80(ts, mv);
	mov(mv, &ts->eax, x86::mem(0x864F78, 4));
	push(mv, &ts->esp, ts->esi);
	push(mv, &ts->esp, ts->eax);
	game::sub_43F920(ts, mv);
	mov(mv, &ts->esi, x86::mem(ts->edi, 4));
	add(&ts->esp, 0x8);
	cmp(&ts->eflags, ts->esi, ts->edi);
	if (!ts->eflags.zero) {
        goto loc_57A290;
    }

loc_57A2B6:
	pop(mv, &ts->esp, ts->edi);
	pop(mv, &ts->esp, ts->esi);
	retn(mv, &ts->esp);
}

void unknown_libname_215(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x86519C);
	goto loc_57A250;

loc_57A250:
	push(mv, &ts->esp, ts->esi);
	mov(&ts->esi, ts->ecx);
	mov(mv, &ts->eax, x86::mem(ts->esi, 4));
	cmp(&ts->eflags, ts->eax, ts->esi);
	if (ts->eflags.zero) {
        goto loc_57A279;
    }
	lea(mv, &ts->esp, x86::mem(ts->esp, 4));

loc_57A260:
	mov(mv, &ts->ecx, x86::mem(ts->eax, 4));
	mov(mv, &ts->edx, x86::mem(ts->eax + 0x4, 4));
	mov(mv, x86::mem(ts->edx, 4), ts->ecx);
	push(mv, &ts->esp, ts->eax);
	mov(mv, x86::mem(ts->ecx + 0x4, 4), ts->edx);
	game::_free(ts, mv);
	mov(mv, &ts->eax, x86::mem(ts->esi, 4));
	add(&ts->esp, 0x4);
	cmp(&ts->eflags, ts->eax, ts->esi);
	if (!ts->eflags.zero) {
        goto loc_57A260;
    }

loc_57A279:
	pop(mv, &ts->esp, ts->esi);
	retn(mv, &ts->esp);
}

void unknown_libname_216(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x866584);
	goto loc_57A2C0;

loc_57A2C0:
	push(mv, &ts->esp, ts->esi);
	push(mv, &ts->esp, ts->edi);
	mov(&ts->edi, ts->ecx);
	mov(mv, &ts->esi, x86::mem(ts->edi, 4));
	cmp(&ts->eflags, ts->esi, ts->edi);
	if (ts->eflags.zero) {
        goto loc_57A2F6;
    }
	lea(mv, &ts->ebx, x86::mem(ts->ebx, 4));

loc_57A2D0:
	mov(mv, &ts->ecx, x86::mem(ts->esi + 0x4, 4));
	mov(mv, &ts->eax, x86::mem(ts->esi, 4));
	mov(mv, x86::mem(ts->ecx, 4), ts->eax);
	mov(mv, x86::mem(ts->eax + 0x4, 4), ts->ecx);
	mov(&ts->ecx, ts->esi);
	game::sub_5798C0(ts, mv);
	mov(mv, &ts->eax, x86::mem(0x865104, 4));
	push(mv, &ts->esp, ts->esi);
	push(mv, &ts->esp, ts->eax);
	game::sub_43F920(ts, mv);
	mov(mv, &ts->esi, x86::mem(ts->edi, 4));
	add(&ts->esp, 0x8);
	cmp(&ts->eflags, ts->esi, ts->edi);
	if (!ts->eflags.zero) {
        goto loc_57A2D0;
    }

loc_57A2F6:
	pop(mv, &ts->esp, ts->edi);
	pop(mv, &ts->esp, ts->esi);
	retn(mv, &ts->esp);
}

void unknown_libname_217(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x86555C);
	goto loc_57A250;

loc_57A250:
	push(mv, &ts->esp, ts->esi);
	mov(&ts->esi, ts->ecx);
	mov(mv, &ts->eax, x86::mem(ts->esi, 4));
	cmp(&ts->eflags, ts->eax, ts->esi);
	if (ts->eflags.zero) {
        goto loc_57A279;
    }
	lea(mv, &ts->esp, x86::mem(ts->esp, 4));

loc_57A260:
	mov(mv, &ts->ecx, x86::mem(ts->eax, 4));
	mov(mv, &ts->edx, x86::mem(ts->eax + 0x4, 4));
	mov(mv, x86::mem(ts->edx, 4), ts->ecx);
	push(mv, &ts->esp, ts->eax);
	mov(mv, x86::mem(ts->ecx + 0x4, 4), ts->edx);
	game::_free(ts, mv);
	mov(mv, &ts->eax, x86::mem(ts->esi, 4));
	add(&ts->esp, 0x4);
	cmp(&ts->eflags, ts->eax, ts->esi);
	if (!ts->eflags.zero) {
        goto loc_57A260;
    }

loc_57A279:
	pop(mv, &ts->esp, ts->esi);
	retn(mv, &ts->esp);
}

void unknown_libname_218(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x865564);
	goto loc_57AF70;

loc_57AF70:
	mov(mv, &ts->eax, x86::mem(ts->ecx + 0x2C, 4));
	push(mv, &ts->esp, ts->esi);
	lea(mv, &ts->esi, x86::mem(ts->ecx + 0x2C, 4));
	cmp(&ts->eflags, ts->eax, ts->esi);
	if (ts->eflags.zero) {
        goto loc_57AF99;
    }
	goto loc_57AF80;

loc_57AF80:
	mov(mv, &ts->ecx, x86::mem(ts->eax, 4));
	mov(mv, &ts->edx, x86::mem(ts->eax + 0x4, 4));
	mov(mv, x86::mem(ts->edx, 4), ts->ecx);
	push(mv, &ts->esp, ts->eax);
	mov(mv, x86::mem(ts->ecx + 0x4, 4), ts->edx);
	game::_free(ts, mv);
	mov(mv, &ts->eax, x86::mem(ts->esi, 4));
	add(&ts->esp, 0x4);
	cmp(&ts->eflags, ts->eax, ts->esi);
	if (!ts->eflags.zero) {
        goto loc_57AF80;
    }

loc_57AF99:
	pop(mv, &ts->esp, ts->esi);
	retn(mv, &ts->esp);
}

void unknown_libname_219(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x865220);
	goto loc_57BC50;

loc_57BC50:
	push(mv, &ts->esp, ts->esi);
	mov(&ts->esi, ts->ecx);
	mov(mv, &ts->eax, x86::mem(ts->esi, 4));
	cmp(&ts->eflags, ts->eax, ts->esi);
	if (ts->eflags.zero) {
        goto loc_57BC7F;
    }
	lea(mv, &ts->esp, x86::mem(ts->esp, 4));

loc_57BC60:
	mov(mv, &ts->ecx, x86::mem(ts->eax, 4));
	mov(mv, &ts->edx, x86::mem(ts->eax + 0x4, 4));
	mov(mv, x86::mem(ts->edx, 4), ts->ecx);
	push(mv, &ts->esp, ts->eax);
	mov(mv, x86::mem(ts->ecx + 0x4, 4), ts->edx);
	mov(mv, &ts->eax, x86::mem(0x8650F0, 4));
	push(mv, &ts->esp, ts->eax);
	game::sub_43F920(ts, mv);
	mov(mv, &ts->eax, x86::mem(ts->esi, 4));
	add(&ts->esp, 0x8);
	cmp(&ts->eflags, ts->eax, ts->esi);
	if (!ts->eflags.zero) {
        goto loc_57BC60;
    }

loc_57BC7F:
	pop(mv, &ts->esp, ts->esi);
	retn(mv, &ts->esp);
}

void unknown_libname_220(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x865550);
	goto loc_57BC50;

loc_57BC50:
	push(mv, &ts->esp, ts->esi);
	mov(&ts->esi, ts->ecx);
	mov(mv, &ts->eax, x86::mem(ts->esi, 4));
	cmp(&ts->eflags, ts->eax, ts->esi);
	if (ts->eflags.zero) {
        goto loc_57BC7F;
    }
	lea(mv, &ts->esp, x86::mem(ts->esp, 4));

loc_57BC60:
	mov(mv, &ts->ecx, x86::mem(ts->eax, 4));
	mov(mv, &ts->edx, x86::mem(ts->eax + 0x4, 4));
	mov(mv, x86::mem(ts->edx, 4), ts->ecx);
	push(mv, &ts->esp, ts->eax);
	mov(mv, x86::mem(ts->ecx + 0x4, 4), ts->edx);
	mov(mv, &ts->eax, x86::mem(0x8650F0, 4));
	push(mv, &ts->esp, ts->eax);
	game::sub_43F920(ts, mv);
	mov(mv, &ts->eax, x86::mem(ts->esi, 4));
	add(&ts->esp, 0x8);
	cmp(&ts->eflags, ts->eax, ts->esi);
	if (!ts->eflags.zero) {
        goto loc_57BC60;
    }

loc_57BC7F:
	pop(mv, &ts->esp, ts->esi);
	retn(mv, &ts->esp);
}

void unknown_libname_221(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8652F0);
	goto loc_57BC90;

loc_57BC90:
	push(mv, &ts->esp, ts->esi);
	mov(&ts->esi, ts->ecx);
	mov(mv, &ts->eax, x86::mem(ts->esi, 4));
	cmp(&ts->eflags, ts->eax, ts->esi);
	if (ts->eflags.zero) {
        goto loc_57BCBF;
    }
	lea(mv, &ts->esp, x86::mem(ts->esp, 4));

loc_57BCA0:
	mov(mv, &ts->ecx, x86::mem(ts->eax, 4));
	mov(mv, &ts->edx, x86::mem(ts->eax + 0x4, 4));
	mov(mv, x86::mem(ts->edx, 4), ts->ecx);
	push(mv, &ts->esp, ts->eax);
	mov(mv, x86::mem(ts->ecx + 0x4, 4), ts->edx);
	mov(mv, &ts->eax, x86::mem(0x865104, 4));
	push(mv, &ts->esp, ts->eax);
	game::sub_43F920(ts, mv);
	mov(mv, &ts->eax, x86::mem(ts->esi, 4));
	add(&ts->esp, 0x8);
	cmp(&ts->eflags, ts->eax, ts->esi);
	if (!ts->eflags.zero) {
        goto loc_57BCA0;
    }

loc_57BCBF:
	pop(mv, &ts->esp, ts->esi);
	retn(mv, &ts->esp);
}

void unknown_libname_222(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x865190);
	goto loc_57BC90;

loc_57BC90:
	push(mv, &ts->esp, ts->esi);
	mov(&ts->esi, ts->ecx);
	mov(mv, &ts->eax, x86::mem(ts->esi, 4));
	cmp(&ts->eflags, ts->eax, ts->esi);
	if (ts->eflags.zero) {
        goto loc_57BCBF;
    }
	lea(mv, &ts->esp, x86::mem(ts->esp, 4));

loc_57BCA0:
	mov(mv, &ts->ecx, x86::mem(ts->eax, 4));
	mov(mv, &ts->edx, x86::mem(ts->eax + 0x4, 4));
	mov(mv, x86::mem(ts->edx, 4), ts->ecx);
	push(mv, &ts->esp, ts->eax);
	mov(mv, x86::mem(ts->ecx + 0x4, 4), ts->edx);
	mov(mv, &ts->eax, x86::mem(0x865104, 4));
	push(mv, &ts->esp, ts->eax);
	game::sub_43F920(ts, mv);
	mov(mv, &ts->eax, x86::mem(ts->esi, 4));
	add(&ts->esp, 0x8);
	cmp(&ts->eflags, ts->eax, ts->esi);
	if (!ts->eflags.zero) {
        goto loc_57BCA0;
    }

loc_57BCBF:
	pop(mv, &ts->esp, ts->esi);
	retn(mv, &ts->esp);
}

void unknown_libname_223(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x865210);
	goto sub_4835C0;
}

void sub_782290(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x57C320);
	push(mv, &ts->esp, 0x2);
	push(mv, &ts->esp, 0x1C8);
	push(mv, &ts->esp, 0x8655A0);
	game::_eh_vector_destructor_iterator__void_P_uint_int_void__P__void_P__(ts, mv);
	retn(mv, &ts->esp);
}

void unknown_libname_224(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x865218);
	goto loc_57A250;

loc_57A250:
	push(mv, &ts->esp, ts->esi);
	mov(&ts->esi, ts->ecx);
	mov(mv, &ts->eax, x86::mem(ts->esi, 4));
	cmp(&ts->eflags, ts->eax, ts->esi);
	if (ts->eflags.zero) {
        goto loc_57A279;
    }
	lea(mv, &ts->esp, x86::mem(ts->esp, 4));

loc_57A260:
	mov(mv, &ts->ecx, x86::mem(ts->eax, 4));
	mov(mv, &ts->edx, x86::mem(ts->eax + 0x4, 4));
	mov(mv, x86::mem(ts->edx, 4), ts->ecx);
	push(mv, &ts->esp, ts->eax);
	mov(mv, x86::mem(ts->ecx + 0x4, 4), ts->edx);
	game::_free(ts, mv);
	mov(mv, &ts->eax, x86::mem(ts->esi, 4));
	add(&ts->esp, 0x4);
	cmp(&ts->eflags, ts->eax, ts->esi);
	if (!ts->eflags.zero) {
        goto loc_57A260;
    }

loc_57A279:
	pop(mv, &ts->esp, ts->esi);
	retn(mv, &ts->esp);
}

void nullsub_57(x86::thread_state* ts, x86::memory_view* mv) {
	retn(mv, &ts->esp);
}

void nullsub_13(x86::thread_state* ts, x86::memory_view* mv) {
	retn(mv, &ts->esp);
}

void nullsub_58(x86::thread_state* ts, x86::memory_view* mv) {
	retn(mv, &ts->esp);
}

void nullsub_59(x86::thread_state* ts, x86::memory_view* mv) {
	retn(mv, &ts->esp);
}

void nullsub_60(x86::thread_state* ts, x86::memory_view* mv) {
	retn(mv, &ts->esp);
}

void nullsub_61(x86::thread_state* ts, x86::memory_view* mv) {
	retn(mv, &ts->esp);
}

void nullsub_62(x86::thread_state* ts, x86::memory_view* mv) {
	retn(mv, &ts->esp);
}

void nullsub_63(x86::thread_state* ts, x86::memory_view* mv) {
	retn(mv, &ts->esp);
}

void sub_782340(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x4022C0);
	push(mv, &ts->esp, 0x5);
	push(mv, &ts->esp, 0x20);
	push(mv, &ts->esp, 0x8693C8);
	game::_eh_vector_destructor_iterator__void_P_uint_int_void__P__void_P__(ts, mv);
	retn(mv, &ts->esp);
}

void unknown_libname_225(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x86A454);
	goto sub_584730;
}

void unknown_libname_226(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x86A388);
	goto ??1_Locimp@locale@std@@UAE@XZ_14;
}

void unknown_libname_227(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x86A490);
	goto loc_588580;

loc_588580:
	push(mv, &ts->esp, 0xFFFFFFFF);
	push(mv, &ts->esp, 0x7789B3);
	mov(mv, &ts->eax, x86::mem(0x0, 4));
	push(mv, &ts->esp, ts->eax);
	mov(mv, x86::mem(0x0, 4), ts->esp);
	push(mv, &ts->esp, ts->ecx);
	push(mv, &ts->esp, ts->ebx);
	push(mv, &ts->esp, ts->esi);
	mov(&ts->esi, ts->ecx);
	push(mv, &ts->esp, ts->edi);
	mov(mv, x86::mem(ts->esp + 0xC, 4), ts->esi);
	mov(mv, x86::mem(ts->esp + 0x18, 4), 0x1);
	game::sub_587790(ts, mv);
	lea(mv, &ts->edi, x86::mem(ts->esi + 0x8, 4));
	xor_(&ts->ebx, ts->ebx);
	lea(mv, &ts->ecx, x86::mem(ts->edi + 0x10, 4));
	mov(mv, x86::mem(ts->edi, 1), ts->bl);
	mov(mv, x86::mem(ts->edi + 0x140, 4), ts->ebx);
	game::sub_583220(ts, mv);
	lea(mv, &ts->ecx, x86::mem(ts->edi + 0xA8, 4));
	game::sub_583220(ts, mv);
	mov(mv, &ts->eax, x86::mem(ts->esi + 0x150, 4));
	push(mv, &ts->esp, ts->eax);
	mov(mv, x86::mem(ts->esi + 0x14C, 1), ts->bl);
	game::j__free(ts, mv);
	add(&ts->esp, 0x4);
	mov(&ts->ecx, ts->edi);
	mov(mv, x86::mem(ts->esi + 0x150, 4), ts->ebx);
	mov(mv, x86::mem(ts->esp + 0x18, 1), ts->bl);
	game::sub_4CBAF0(ts, mv);
	cmp(mv, &ts->eflags, x86::mem(ts->esi, 4), ts->esi);
	mov(mv, x86::mem(ts->esp + 0x18, 4), 0xFFFFFFFF);
	if (ts->eflags.zero) {
        goto loc_58861B;
    }
	mov(&ts->edi, ts->edi);

loc_588600:
	mov(mv, &ts->eax, x86::mem(ts->esi, 4));
	mov(mv, &ts->ecx, x86::mem(ts->eax, 4));
	mov(mv, &ts->edx, x86::mem(ts->eax + 0x4, 4));
	mov(mv, x86::mem(ts->edx, 4), ts->ecx);
	push(mv, &ts->esp, ts->eax);
	mov(mv, x86::mem(ts->ecx + 0x4, 4), ts->edx);
	game::j__free(ts, mv);
	mov(mv, &ts->eax, x86::mem(ts->esi, 4));
	add(&ts->esp, 0x4);
	cmp(&ts->eflags, ts->eax, ts->esi);
	if (!ts->eflags.zero) {
        goto loc_588600;
    }

loc_58861B:
	mov(mv, &ts->ecx, x86::mem(ts->esp + 0x10, 4));
	pop(mv, &ts->esp, ts->edi);
	pop(mv, &ts->esp, ts->esi);
	pop(mv, &ts->esp, ts->ebx);
	mov(mv, x86::mem(0x0, 4), ts->ecx);
	add(&ts->esp, 0x10);
	retn(mv, &ts->esp);

unknown_libname_73:
	mov(mv, &ts->ecx, x86::mem(ts->ebp - 0x10, 4));
	goto sub_4DEF30;

loc_7789A8:
	mov(mv, &ts->ecx, x86::mem(ts->ebp - 0x10, 4));
	add(&ts->ecx, 0x8);
	goto sub_4CBAF0;

loc_7789B3:
	mov(&ts->eax, 0x7E3FEC);
	goto ___CxxFrameHandler;
}

void unknown_libname_228(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x86A5E8);
	goto sub_4DEF30;
}

void unknown_libname_229(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x86A5F4);
	goto sub_4DEF30;
}

void unknown_libname_230(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x86A758);
	goto sub_58A1D0;
}

void unknown_libname_231(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x86A834);
	goto loc_58F560;

loc_58F560:
	push(mv, &ts->esp, 0xFFFFFFFF);
	push(mv, &ts->esp, 0x778AE6);
	mov(mv, &ts->eax, x86::mem(0x0, 4));
	push(mv, &ts->esp, ts->eax);
	mov(mv, x86::mem(0x0, 4), ts->esp);
	push(mv, &ts->esp, ts->ecx);
	push(mv, &ts->esp, ts->esi);
	mov(&ts->esi, ts->ecx);
	mov(mv, x86::mem(ts->esp + 0x4, 4), ts->esi);
	mov(mv, x86::mem(ts->esp + 0x10, 4), 0x1);
	game::sub_58F2A0(ts, mv);
	lea(mv, &ts->ecx, x86::mem(ts->esi + 0x10, 4));
	mov(mv, x86::mem(ts->esp + 0x10, 1), 0x0);
	game::sub_5884A0(ts, mv);
	lea(mv, &ts->ecx, x86::mem(ts->esi + 0x8, 4));
	mov(mv, x86::mem(ts->esp + 0x10, 4), 0xFFFFFFFF);
	game::sub_5884A0(ts, mv);
	mov(mv, &ts->ecx, x86::mem(ts->esp + 0x8, 4));
	pop(mv, &ts->esp, ts->esi);
	mov(mv, x86::mem(0x0, 4), ts->ecx);
	add(&ts->esp, 0x10);
	retn(mv, &ts->esp);

loc_778AD0:
	mov(mv, &ts->ecx, x86::mem(ts->ebp - 0x10, 4));
	add(&ts->ecx, 0x8);
	goto sub_5884A0;

loc_778ADB:
	mov(mv, &ts->ecx, x86::mem(ts->ebp - 0x10, 4));
	add(&ts->ecx, 0x10);
	goto sub_5884A0;

loc_778AE6:
	mov(&ts->eax, 0x7E4140);
	goto ___CxxFrameHandler;
}

void unknown_libname_232(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x86A858);
	goto loc_58F5C0;

loc_58F5C0:
	push(mv, &ts->esp, 0xFFFFFFFF);
	push(mv, &ts->esp, 0x778AF8);
	mov(mv, &ts->eax, x86::mem(0x0, 4));
	push(mv, &ts->esp, ts->eax);
	mov(mv, x86::mem(0x0, 4), ts->esp);
	push(mv, &ts->esp, ts->ecx);
	push(mv, &ts->esp, ts->esi);
	mov(&ts->esi, ts->ecx);
	mov(mv, x86::mem(ts->esp + 0x4, 4), ts->esi);
	mov(mv, x86::mem(ts->esp + 0x10, 4), 0x0);
	game::sub_58F360(ts, mv);
	mov(mv, &ts->eax, x86::mem(ts->esi, 4));
	cmp(&ts->eflags, ts->eax, ts->esi);
	mov(mv, x86::mem(ts->esp + 0x10, 4), 0xFFFFFFFF);
	if (ts->eflags.zero) {
        goto loc_58F611;
    }

loc_58F5F8:
	mov(mv, &ts->ecx, x86::mem(ts->eax, 4));
	mov(mv, &ts->edx, x86::mem(ts->eax + 0x4, 4));
	mov(mv, x86::mem(ts->edx, 4), ts->ecx);
	push(mv, &ts->esp, ts->eax);
	mov(mv, x86::mem(ts->ecx + 0x4, 4), ts->edx);
	game::j__free(ts, mv);
	mov(mv, &ts->eax, x86::mem(ts->esi, 4));
	add(&ts->esp, 0x4);
	cmp(&ts->eflags, ts->eax, ts->esi);
	if (!ts->eflags.zero) {
        goto loc_58F5F8;
    }

loc_58F611:
	mov(mv, &ts->ecx, x86::mem(ts->esp + 0x8, 4));
	pop(mv, &ts->esp, ts->esi);
	mov(mv, x86::mem(0x0, 4), ts->ecx);
	add(&ts->esp, 0x10);
	retn(mv, &ts->esp);

loc_778AF0:
	mov(mv, &ts->ecx, x86::mem(ts->ebp - 0x10, 4));
	goto sub_4DEF30;

SEH_586700:
	mov(&ts->eax, 0x7E4164);
	goto ___CxxFrameHandler;
}

void unknown_libname_233(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x86B4C8);
	goto sub_4358E0;
}

void unknown_libname_234(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x86B490);
	goto loc_5A8FD0;

loc_5A8FD0:
	push(mv, &ts->esp, ts->esi);
	mov(&ts->esi, ts->ecx);
	mov(mv, &ts->eax, x86::mem(ts->esi, 4));
	cmp(&ts->eflags, ts->eax, ts->esi);
	if (ts->eflags.zero) {
        goto loc_5A9000;
    }
	lea(mv, &ts->esp, x86::mem(ts->esp, 4));

loc_5A8FE0:
	mov(mv, &ts->ecx, x86::mem(ts->eax, 4));
	mov(mv, &ts->edx, x86::mem(ts->eax + 0x4, 4));
	mov(mv, x86::mem(ts->edx, 4), ts->ecx);
	mov(mv, x86::mem(ts->ecx + 0x4, 4), ts->edx);
	lea(mv, &ts->ecx, x86::mem(ts->eax - 0x230, 4));
	test(&ts->eflags, ts->ecx, ts->ecx);
	if (ts->eflags.zero) {
        goto loc_5A8FFA;
    }
	mov(mv, &ts->eax, x86::mem(ts->ecx, 4));
	push(mv, &ts->esp, 0x1);
	call(ts, mv, x86::mem(ts->eax, 4));

loc_5A8FFA:
	mov(mv, &ts->eax, x86::mem(ts->esi, 4));
	cmp(&ts->eflags, ts->eax, ts->esi);
	if (!ts->eflags.zero) {
        goto loc_5A8FE0;
    }

loc_5A9000:
	pop(mv, &ts->esp, ts->esi);
	retn(mv, &ts->esp);
}

void unknown_libname_235(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x86B598);
	goto loc_5E0800;

loc_5E0800:
	push(mv, &ts->esp, ts->esi);
	mov(&ts->esi, ts->ecx);
	mov(mv, &ts->ecx, x86::mem(ts->esi, 4));
	cmp(&ts->eflags, ts->ecx, ts->esi);
	if (ts->eflags.zero) {
        goto loc_5E082E;
    }
	lea(mv, &ts->esp, x86::mem(ts->esp, 4));

loc_5E0810:
	mov(mv, &ts->eax, x86::mem(ts->ecx, 4));
	mov(mv, &ts->edx, x86::mem(ts->ecx + 0x4, 4));
	mov(mv, x86::mem(ts->edx, 4), ts->eax);
	mov(mv, x86::mem(ts->eax + 0x4, 4), ts->edx);
	game::nullsub_1(ts, mv);
	push(mv, &ts->esp, ts->ecx);
	game::j__free(ts, mv);
	mov(mv, &ts->ecx, x86::mem(ts->esi, 4));
	add(&ts->esp, 0x4);
	cmp(&ts->eflags, ts->ecx, ts->esi);
	if (!ts->eflags.zero) {
        goto loc_5E0810;
    }

loc_5E082E:
	pop(mv, &ts->esp, ts->esi);
	retn(mv, &ts->esp);
}

void unknown_libname_236(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x86B5A0);
	goto sub_4835C0;
}

void unknown_libname_237(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x86B4C0);
	goto sub_4DEF30;
}

void unknown_libname_238(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x86B5A8);
	goto loc_5B3320;

loc_5B3320:
	push(mv, &ts->esp, ts->esi);
	push(mv, &ts->esp, ts->edi);
	mov(&ts->edi, ts->ecx);
	mov(mv, &ts->esi, x86::mem(ts->edi, 4));
	cmp(&ts->eflags, ts->esi, ts->edi);
	if (ts->eflags.zero) {
        goto loc_5B3350;
    }
	lea(mv, &ts->ebx, x86::mem(ts->ebx, 4));

loc_5B3330:
	mov(mv, &ts->ecx, x86::mem(ts->esi + 0x4, 4));
	mov(mv, &ts->eax, x86::mem(ts->esi, 4));
	mov(mv, x86::mem(ts->ecx, 4), ts->eax);
	mov(mv, x86::mem(ts->eax + 0x4, 4), ts->ecx);
	mov(&ts->ecx, ts->esi);
	game::sub_5AE0E0(ts, mv);
	push(mv, &ts->esp, ts->esi);
	game::j__free(ts, mv);
	mov(mv, &ts->esi, x86::mem(ts->edi, 4));
	add(&ts->esp, 0x4);
	cmp(&ts->eflags, ts->esi, ts->edi);
	if (!ts->eflags.zero) {
        goto loc_5B3330;
    }

loc_5B3350:
	pop(mv, &ts->esp, ts->edi);
	pop(mv, &ts->esp, ts->esi);
	retn(mv, &ts->esp);
}

void nullsub_64(x86::thread_state* ts, x86::memory_view* mv) {
	retn(mv, &ts->esp);
}

void nullsub_65(x86::thread_state* ts, x86::memory_view* mv) {
	retn(mv, &ts->esp);
}

void nullsub_66(x86::thread_state* ts, x86::memory_view* mv) {
	retn(mv, &ts->esp);
}

void sub_782470(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x5B8000);
	push(mv, &ts->esp, 0x6);
	push(mv, &ts->esp, 0x370);
	push(mv, &ts->esp, 0x874C40);
	game::_eh_vector_destructor_iterator__void_P_uint_int_void__P__void_P__(ts, mv);
	retn(mv, &ts->esp);
}

void nullsub_67(x86::thread_state* ts, x86::memory_view* mv) {
	retn(mv, &ts->esp);
}

void unknown_libname_239(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x872B4C);
	goto sub_4DEF30;
}

void unknown_libname_240(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8763B0);
	goto sub_4835C0;
}

void unknown_libname_241(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x872ED0);
	goto sub_4DEF30;
}

void unknown_libname_242(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x872B44);
	goto sub_4835C0;
}

void unknown_libname_243(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x870D28);
	goto sub_4835C0;
}

void sub_7824F0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x5CF410);
	push(mv, &ts->esp, 0x10);
	push(mv, &ts->esp, 0xB8);
	push(mv, &ts->esp, 0x870D30);
	game::_eh_vector_destructor_iterator__void_P_uint_int_void__P__void_P__(ts, mv);
	retn(mv, &ts->esp);
}

void nullsub_68(x86::thread_state* ts, x86::memory_view* mv) {
	retn(mv, &ts->esp);
}

void sub_782520(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x605400);
	push(mv, &ts->esp, 0x2);
	push(mv, &ts->esp, 0x30);
	push(mv, &ts->esp, 0x88A2C0);
	game::_eh_vector_destructor_iterator__void_P_uint_int_void__P__void_P__(ts, mv);
	retn(mv, &ts->esp);
}

void sub_782540(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x605400);
	push(mv, &ts->esp, 0x2);
	push(mv, &ts->esp, 0x30);
	push(mv, &ts->esp, 0x88EA08);
	game::_eh_vector_destructor_iterator__void_P_uint_int_void__P__void_P__(ts, mv);
	retn(mv, &ts->esp);
}

void sub_782560(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x605400);
	push(mv, &ts->esp, 0x2);
	push(mv, &ts->esp, 0x30);
	push(mv, &ts->esp, 0x88F210);
	game::_eh_vector_destructor_iterator__void_P_uint_int_void__P__void_P__(ts, mv);
	retn(mv, &ts->esp);
}

void unknown_libname_244(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x88EA68);
	goto sub_4367C0;
}

void unknown_libname_245(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x88EA8C);
	goto sub_5DC590;
}

void unknown_libname_246(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x88E9FC);
	goto loc_5DC5C0;

loc_5DC5C0:
	push(mv, &ts->esp, ts->esi);
	push(mv, &ts->esp, ts->edi);
	mov(&ts->edi, ts->ecx);
	mov(mv, &ts->esi, x86::mem(ts->edi, 4));
	cmp(&ts->eflags, ts->esi, ts->edi);
	if (ts->eflags.zero) {
        goto loc_5DC5F6;
    }
	lea(mv, &ts->ebx, x86::mem(ts->ebx, 4));

loc_5DC5D0:
	mov(mv, &ts->ecx, x86::mem(ts->esi + 0x4, 4));
	mov(mv, &ts->eax, x86::mem(ts->esi, 4));
	mov(mv, x86::mem(ts->ecx, 4), ts->eax);
	mov(mv, x86::mem(ts->eax + 0x4, 4), ts->ecx);
	mov(&ts->ecx, ts->esi);
	game::sub_5DC160(ts, mv);
	mov(mv, &ts->eax, x86::mem(0x883E4C, 4));
	push(mv, &ts->esp, ts->esi);
	push(mv, &ts->esp, ts->eax);
	game::sub_43F920(ts, mv);
	mov(mv, &ts->esi, x86::mem(ts->edi, 4));
	add(&ts->esp, 0x8);
	cmp(&ts->eflags, ts->esi, ts->edi);
	if (!ts->eflags.zero) {
        goto loc_5DC5D0;
    }

loc_5DC5F6:
	pop(mv, &ts->esp, ts->edi);
	pop(mv, &ts->esp, ts->esi);
	retn(mv, &ts->esp);
}

void unknown_libname_247(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x88EA84);
	goto loc_5DC600;

loc_5DC600:
	push(mv, &ts->esp, ts->esi);
	push(mv, &ts->esp, ts->edi);
	mov(&ts->edi, ts->ecx);
	mov(mv, &ts->esi, x86::mem(ts->edi, 4));
	cmp(&ts->eflags, ts->esi, ts->edi);
	if (ts->eflags.zero) {
        goto loc_5DC636;
    }
	lea(mv, &ts->ebx, x86::mem(ts->ebx, 4));

loc_5DC610:
	mov(mv, &ts->ecx, x86::mem(ts->esi + 0x4, 4));
	mov(mv, &ts->eax, x86::mem(ts->esi, 4));
	mov(mv, x86::mem(ts->ecx, 4), ts->eax);
	mov(mv, x86::mem(ts->eax + 0x4, 4), ts->ecx);
	mov(&ts->ecx, ts->esi);
	game::sub_5DC170(ts, mv);
	mov(mv, &ts->eax, x86::mem(0x883E58, 4));
	push(mv, &ts->esp, ts->esi);
	push(mv, &ts->esp, ts->eax);
	game::sub_43F920(ts, mv);
	mov(mv, &ts->esi, x86::mem(ts->edi, 4));
	add(&ts->esp, 0x8);
	cmp(&ts->eflags, ts->esi, ts->edi);
	if (!ts->eflags.zero) {
        goto loc_5DC610;
    }

loc_5DC636:
	pop(mv, &ts->esp, ts->edi);
	pop(mv, &ts->esp, ts->esi);
	retn(mv, &ts->esp);
}

void unknown_libname_248(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x88EADC);
	goto loc_5DC640;

loc_5DC640:
	push(mv, &ts->esp, ts->esi);
	mov(&ts->esi, ts->ecx);
	mov(mv, &ts->eax, x86::mem(ts->esi, 4));
	cmp(&ts->eflags, ts->eax, ts->esi);
	if (ts->eflags.zero) {
        goto loc_5DC66F;
    }
	lea(mv, &ts->esp, x86::mem(ts->esp, 4));

loc_5DC650:
	mov(mv, &ts->ecx, x86::mem(ts->eax, 4));
	mov(mv, &ts->edx, x86::mem(ts->eax + 0x4, 4));
	mov(mv, x86::mem(ts->edx, 4), ts->ecx);
	push(mv, &ts->esp, ts->eax);
	mov(mv, x86::mem(ts->ecx + 0x4, 4), ts->edx);
	mov(mv, &ts->eax, x86::mem(0x883E5C, 4));
	push(mv, &ts->esp, ts->eax);
	game::sub_43F920(ts, mv);
	mov(mv, &ts->eax, x86::mem(ts->esi, 4));
	add(&ts->esp, 0x8);
	cmp(&ts->eflags, ts->eax, ts->esi);
	if (!ts->eflags.zero) {
        goto loc_5DC650;
    }

loc_5DC66F:
	pop(mv, &ts->esp, ts->esi);
	retn(mv, &ts->esp);
}

void unknown_libname_249(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x88F760);
	goto sub_4DEF30;
}

void unknown_libname_250(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x88E9C4);
	goto loc_5E0830;

loc_5E0830:
	push(mv, &ts->esp, ts->esi);
	mov(&ts->esi, ts->ecx);
	mov(mv, &ts->eax, x86::mem(ts->esi, 4));
	cmp(&ts->eflags, ts->eax, ts->esi);
	if (ts->eflags.zero) {
        goto loc_5E085F;
    }
	lea(mv, &ts->esp, x86::mem(ts->esp, 4));

loc_5E0840:
	mov(mv, &ts->ecx, x86::mem(ts->eax, 4));
	mov(mv, &ts->edx, x86::mem(ts->eax + 0x4, 4));
	mov(mv, x86::mem(ts->edx, 4), ts->ecx);
	push(mv, &ts->esp, ts->eax);
	mov(mv, x86::mem(ts->ecx + 0x4, 4), ts->edx);
	mov(mv, &ts->eax, x86::mem(0x883E3C, 4));
	push(mv, &ts->esp, ts->eax);
	game::sub_43F920(ts, mv);
	mov(mv, &ts->eax, x86::mem(ts->esi, 4));
	add(&ts->esp, 0x8);
	cmp(&ts->eflags, ts->eax, ts->esi);
	if (!ts->eflags.zero) {
        goto loc_5E0840;
    }

loc_5E085F:
	pop(mv, &ts->esp, ts->esi);
	retn(mv, &ts->esp);
}

void unknown_libname_251(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x88F208);
	goto loc_5E0870;

loc_5E0870:
	push(mv, &ts->esp, ts->esi);
	mov(&ts->esi, ts->ecx);
	mov(mv, &ts->eax, x86::mem(ts->esi, 4));
	cmp(&ts->eflags, ts->eax, ts->esi);
	if (ts->eflags.zero) {
        goto loc_5E089F;
    }
	lea(mv, &ts->esp, x86::mem(ts->esp, 4));

loc_5E0880:
	mov(mv, &ts->ecx, x86::mem(ts->eax, 4));
	mov(mv, &ts->edx, x86::mem(ts->eax + 0x4, 4));
	mov(mv, x86::mem(ts->edx, 4), ts->ecx);
	push(mv, &ts->esp, ts->eax);
	mov(mv, x86::mem(ts->ecx + 0x4, 4), ts->edx);
	mov(mv, &ts->eax, x86::mem(0x883E38, 4));
	push(mv, &ts->esp, ts->eax);
	game::sub_43F920(ts, mv);
	mov(mv, &ts->eax, x86::mem(ts->esi, 4));
	add(&ts->esp, 0x8);
	cmp(&ts->eflags, ts->eax, ts->esi);
	if (!ts->eflags.zero) {
        goto loc_5E0880;
    }

loc_5E089F:
	pop(mv, &ts->esp, ts->esi);
	retn(mv, &ts->esp);
}

void unknown_libname_252(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x88FF98);
	goto sub_4835C0;
}

void unknown_libname_253(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x88F270);
	goto loc_5E57E0;

loc_5E57E0:
	push(mv, &ts->esp, ts->esi);
	push(mv, &ts->esp, ts->edi);
	mov(&ts->edi, ts->ecx);
	mov(mv, &ts->esi, x86::mem(ts->edi, 4));
	cmp(&ts->eflags, ts->esi, ts->edi);
	if (ts->eflags.zero) {
        goto loc_5E5816;
    }
	lea(mv, &ts->ebx, x86::mem(ts->ebx, 4));

loc_5E57F0:
	mov(mv, &ts->ecx, x86::mem(ts->esi + 0x4, 4));
	mov(mv, &ts->eax, x86::mem(ts->esi, 4));
	mov(mv, x86::mem(ts->ecx, 4), ts->eax);
	mov(mv, x86::mem(ts->eax + 0x4, 4), ts->ecx);
	mov(&ts->ecx, ts->esi);
	game::sub_5E0920(ts, mv);
	mov(mv, &ts->eax, x86::mem(0x883D74, 4));
	push(mv, &ts->esp, ts->esi);
	push(mv, &ts->esp, ts->eax);
	game::sub_43F920(ts, mv);
	mov(mv, &ts->esi, x86::mem(ts->edi, 4));
	add(&ts->esp, 0x8);
	cmp(&ts->eflags, ts->esi, ts->edi);
	if (!ts->eflags.zero) {
        goto loc_5E57F0;
    }

loc_5E5816:
	pop(mv, &ts->esp, ts->edi);
	pop(mv, &ts->esp, ts->esi);
	retn(mv, &ts->esp);
}

void unknown_libname_254(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x88F740);
	goto sub_4DEF30;
}

void unknown_libname_255(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x88F298);
	goto loc_5E48A0;

loc_5E0800:
	push(mv, &ts->esp, ts->esi);
	mov(&ts->esi, ts->ecx);
	mov(mv, &ts->ecx, x86::mem(ts->esi, 4));
	cmp(&ts->eflags, ts->ecx, ts->esi);
	if (ts->eflags.zero) {
        goto loc_5E082E;
    }
	lea(mv, &ts->esp, x86::mem(ts->esp, 4));

loc_5E0810:
	mov(mv, &ts->eax, x86::mem(ts->ecx, 4));
	mov(mv, &ts->edx, x86::mem(ts->ecx + 0x4, 4));
	mov(mv, x86::mem(ts->edx, 4), ts->eax);
	mov(mv, x86::mem(ts->eax + 0x4, 4), ts->edx);
	game::nullsub_1(ts, mv);
	push(mv, &ts->esp, ts->ecx);
	game::j__free(ts, mv);
	mov(mv, &ts->ecx, x86::mem(ts->esi, 4));
	add(&ts->esp, 0x4);
	cmp(&ts->eflags, ts->ecx, ts->esi);
	if (!ts->eflags.zero) {
        goto loc_5E0810;
    }

loc_5E082E:
	pop(mv, &ts->esp, ts->esi);
	retn(mv, &ts->esp);

loc_5E48A0:
	add(&ts->ecx, 0x4A0);
	mov(mv, x86::mem(ts->ecx, 4), ts->ecx);
	mov(mv, x86::mem(ts->ecx + 0x4, 4), ts->ecx);
	goto loc_5E0800;
}

void unknown_libname_256(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x88EAD4);
	goto sub_4DEF30;
}

void sub_782650(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x4DEF30);
	push(mv, &ts->esp, 0x8);
	push(mv, &ts->esp, 0x8);
	push(mv, &ts->esp, 0x88F1C8);
	game::_eh_vector_destructor_iterator__void_P_uint_int_void__P__void_P__(ts, mv);
	retn(mv, &ts->esp);
}

void unknown_libname_257(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x88F28C);
	goto sub_4DEF30;
}

void unknown_libname_258(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x88FFA0);
	goto sub_4DEF30;
}

void unknown_libname_259(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x88F1BC);
	goto loc_5E66A0;

loc_5E66A0:
	push(mv, &ts->esp, ts->esi);
	push(mv, &ts->esp, ts->edi);
	mov(&ts->edi, ts->ecx);
	mov(mv, &ts->esi, x86::mem(ts->edi, 4));
	cmp(&ts->eflags, ts->esi, ts->edi);
	if (ts->eflags.zero) {
        goto loc_5E66D6;
    }
	lea(mv, &ts->ebx, x86::mem(ts->ebx, 4));

loc_5E66B0:
	mov(mv, &ts->ecx, x86::mem(ts->esi + 0x4, 4));
	mov(mv, &ts->eax, x86::mem(ts->esi, 4));
	mov(mv, x86::mem(ts->ecx, 4), ts->eax);
	mov(mv, x86::mem(ts->eax + 0x4, 4), ts->ecx);
	mov(&ts->ecx, ts->esi);
	game::sub_5E0A70(ts, mv);
	mov(mv, &ts->eax, x86::mem(0x883D80, 4));
	push(mv, &ts->esp, ts->esi);
	push(mv, &ts->esp, ts->eax);
	game::sub_43F920(ts, mv);
	mov(mv, &ts->esi, x86::mem(ts->edi, 4));
	add(&ts->esp, 0x8);
	cmp(&ts->eflags, ts->esi, ts->edi);
	if (!ts->eflags.zero) {
        goto loc_5E66B0;
    }

loc_5E66D6:
	pop(mv, &ts->esp, ts->edi);
	pop(mv, &ts->esp, ts->esi);
	retn(mv, &ts->esp);
}

void unknown_libname_260(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x88A320);
	goto loc_5E5B10;

loc_5E5B10:
	push(mv, &ts->esp, 0xFFFFFFFF);
	push(mv, &ts->esp, 0x779593);
	mov(mv, &ts->eax, x86::mem(0x0, 4));
	push(mv, &ts->esp, ts->eax);
	mov(mv, x86::mem(0x0, 4), ts->esp);
	push(mv, &ts->esp, ts->ecx);
	push(mv, &ts->esp, ts->esi);
	mov(&ts->esi, ts->ecx);
	push(mv, &ts->esp, ts->edi);
	mov(mv, x86::mem(ts->esp + 0x8, 4), ts->esi);
	push(mv, &ts->esp, 0x0);
	mov(mv, x86::mem(ts->esp + 0x18, 4), 0x1);
	game::sub_5E3FF0(ts, mv);
	mov(mv, &ts->eax, x86::mem(ts->esi + 0x8, 4));
	lea(mv, &ts->edi, x86::mem(ts->esi + 0x8, 4));
	cmp(&ts->eflags, ts->eax, ts->edi);
	mov(mv, x86::mem(ts->esp + 0x14, 1), 0x0);
	if (ts->eflags.zero) {
        goto loc_5E5B69;
    }
	lea(mv, &ts->esp, x86::mem(ts->esp, 4));

loc_5E5B50:
	mov(mv, &ts->ecx, x86::mem(ts->eax, 4));
	mov(mv, &ts->edx, x86::mem(ts->eax + 0x4, 4));
	mov(mv, x86::mem(ts->edx, 4), ts->ecx);
	push(mv, &ts->esp, ts->eax);
	mov(mv, x86::mem(ts->ecx + 0x4, 4), ts->edx);
	game::j__free(ts, mv);
	mov(mv, &ts->eax, x86::mem(ts->edi, 4));
	add(&ts->esp, 0x4);
	cmp(&ts->eflags, ts->eax, ts->edi);
	if (!ts->eflags.zero) {
        goto loc_5E5B50;
    }

loc_5E5B69:
	mov(mv, &ts->eax, x86::mem(ts->esi, 4));
	cmp(&ts->eflags, ts->eax, ts->esi);
	mov(mv, x86::mem(ts->esp + 0x14, 4), 0xFFFFFFFF);
	if (ts->eflags.zero) {
        goto loc_5E5B90;
    }

loc_5E5B77:
	mov(mv, &ts->ecx, x86::mem(ts->eax, 4));
	mov(mv, &ts->edx, x86::mem(ts->eax + 0x4, 4));
	mov(mv, x86::mem(ts->edx, 4), ts->ecx);
	push(mv, &ts->esp, ts->eax);
	mov(mv, x86::mem(ts->ecx + 0x4, 4), ts->edx);
	game::j__free(ts, mv);
	mov(mv, &ts->eax, x86::mem(ts->esi, 4));
	add(&ts->esp, 0x4);
	cmp(&ts->eflags, ts->eax, ts->esi);
	if (!ts->eflags.zero) {
        goto loc_5E5B77;
    }

loc_5E5B90:
	mov(mv, &ts->ecx, x86::mem(ts->esp + 0xC, 4));
	pop(mv, &ts->esp, ts->edi);
	pop(mv, &ts->esp, ts->esi);
	mov(mv, x86::mem(0x0, 4), ts->ecx);
	add(&ts->esp, 0x10);
	retn(mv, &ts->esp);

unknown_libname_86:
	mov(mv, &ts->ecx, x86::mem(ts->ebp - 0x10, 4));
	goto sub_4DEF30;

loc_779588:
	mov(mv, &ts->ecx, x86::mem(ts->ebp - 0x10, 4));
	add(&ts->ecx, 0x8);
	goto sub_4DEF30;

loc_779593:
	mov(&ts->eax, 0x7E4D6C);
	goto ___CxxFrameHandler;
}

void unknown_libname_261(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x883E70);
	goto loc_5E6490;

loc_5E6490:
	push(mv, &ts->esp, 0xFFFFFFFF);
	push(mv, &ts->esp, 0x779600);
	mov(mv, &ts->eax, x86::mem(0x0, 4));
	push(mv, &ts->esp, ts->eax);
	mov(mv, x86::mem(0x0, 4), ts->esp);
	push(mv, &ts->esp, ts->ecx);
	push(mv, &ts->esp, ts->esi);
	push(mv, &ts->esp, ts->edi);
	mov(&ts->edi, ts->ecx);
	mov(mv, x86::mem(ts->esp + 0x8, 4), ts->edi);
	lea(mv, &ts->esi, x86::mem(ts->edi + 0x6414, 4));
	mov(&ts->eax, ts->esi);
	cmp(&ts->eflags, ts->eax, ts->esi);
	mov(mv, x86::mem(ts->esp + 0x14, 4), 0x8);
	mov(mv, x86::mem(ts->esi, 4), ts->esi);
	mov(mv, x86::mem(ts->esi + 0x4, 4), ts->esi);
	if (ts->eflags.zero) {
        goto loc_5E64E0;
    }

loc_5E64C7:
	mov(mv, &ts->ecx, x86::mem(ts->eax, 4));
	mov(mv, &ts->edx, x86::mem(ts->eax + 0x4, 4));
	mov(mv, x86::mem(ts->edx, 4), ts->ecx);
	push(mv, &ts->esp, ts->eax);
	mov(mv, x86::mem(ts->ecx + 0x4, 4), ts->edx);
	game::j__free(ts, mv);
	mov(mv, &ts->eax, x86::mem(ts->esi, 4));
	add(&ts->esp, 0x4);
	cmp(&ts->eflags, ts->eax, ts->esi);
	if (!ts->eflags.zero) {
        goto loc_5E64C7;
    }

loc_5E64E0:
	mov(mv, &ts->eax, x86::mem(ts->edi + 0x40, 4));
	lea(mv, &ts->esi, x86::mem(ts->edi + 0x40, 4));
	cmp(&ts->eflags, ts->eax, ts->esi);
	mov(mv, x86::mem(ts->esp + 0x14, 1), 0x7);
	if (ts->eflags.zero) {
        goto loc_5E6509;
    }
	nop();

loc_5E64F0:
	mov(mv, &ts->ecx, x86::mem(ts->eax, 4));
	mov(mv, &ts->edx, x86::mem(ts->eax + 0x4, 4));
	mov(mv, x86::mem(ts->edx, 4), ts->ecx);
	push(mv, &ts->esp, ts->eax);
	mov(mv, x86::mem(ts->ecx + 0x4, 4), ts->edx);
	game::j__free(ts, mv);
	mov(mv, &ts->eax, x86::mem(ts->esi, 4));
	add(&ts->esp, 0x4);
	cmp(&ts->eflags, ts->eax, ts->esi);
	if (!ts->eflags.zero) {
        goto loc_5E64F0;
    }

loc_5E6509:
	mov(mv, &ts->eax, x86::mem(ts->edi + 0x38, 4));
	lea(mv, &ts->esi, x86::mem(ts->edi + 0x38, 4));
	cmp(&ts->eflags, ts->eax, ts->esi);
	mov(mv, x86::mem(ts->esp + 0x14, 1), 0x6);
	if (ts->eflags.zero) {
        goto loc_5E6531;
    }

loc_5E6518:
	mov(mv, &ts->ecx, x86::mem(ts->eax, 4));
	mov(mv, &ts->edx, x86::mem(ts->eax + 0x4, 4));
	mov(mv, x86::mem(ts->edx, 4), ts->ecx);
	push(mv, &ts->esp, ts->eax);
	mov(mv, x86::mem(ts->ecx + 0x4, 4), ts->edx);
	game::j__free(ts, mv);
	mov(mv, &ts->eax, x86::mem(ts->esi, 4));
	add(&ts->esp, 0x4);
	cmp(&ts->eflags, ts->eax, ts->esi);
	if (!ts->eflags.zero) {
        goto loc_5E6518;
    }

loc_5E6531:
	mov(mv, &ts->eax, x86::mem(ts->edi + 0x30, 4));
	lea(mv, &ts->esi, x86::mem(ts->edi + 0x30, 4));
	cmp(&ts->eflags, ts->eax, ts->esi);
	mov(mv, x86::mem(ts->esp + 0x14, 1), 0x5);
	if (ts->eflags.zero) {
        goto loc_5E6559;
    }

loc_5E6540:
	mov(mv, &ts->ecx, x86::mem(ts->eax, 4));
	mov(mv, &ts->edx, x86::mem(ts->eax + 0x4, 4));
	mov(mv, x86::mem(ts->edx, 4), ts->ecx);
	push(mv, &ts->esp, ts->eax);
	mov(mv, x86::mem(ts->ecx + 0x4, 4), ts->edx);
	game::j__free(ts, mv);
	mov(mv, &ts->eax, x86::mem(ts->esi, 4));
	add(&ts->esp, 0x4);
	cmp(&ts->eflags, ts->eax, ts->esi);
	if (!ts->eflags.zero) {
        goto loc_5E6540;
    }

loc_5E6559:
	mov(mv, &ts->eax, x86::mem(ts->edi + 0x28, 4));
	lea(mv, &ts->esi, x86::mem(ts->edi + 0x28, 4));
	cmp(&ts->eflags, ts->eax, ts->esi);
	mov(mv, x86::mem(ts->esp + 0x14, 1), 0x4);
	if (ts->eflags.zero) {
        goto loc_5E6581;
    }

loc_5E6568:
	mov(mv, &ts->ecx, x86::mem(ts->eax, 4));
	mov(mv, &ts->edx, x86::mem(ts->eax + 0x4, 4));
	mov(mv, x86::mem(ts->edx, 4), ts->ecx);
	push(mv, &ts->esp, ts->eax);
	mov(mv, x86::mem(ts->ecx + 0x4, 4), ts->edx);
	game::j__free(ts, mv);
	mov(mv, &ts->eax, x86::mem(ts->esi, 4));
	add(&ts->esp, 0x4);
	cmp(&ts->eflags, ts->eax, ts->esi);
	if (!ts->eflags.zero) {
        goto loc_5E6568;
    }

loc_5E6581:
	mov(mv, &ts->eax, x86::mem(ts->edi + 0x20, 4));
	lea(mv, &ts->esi, x86::mem(ts->edi + 0x20, 4));
	cmp(&ts->eflags, ts->eax, ts->esi);
	mov(mv, x86::mem(ts->esp + 0x14, 1), 0x3);
	if (ts->eflags.zero) {
        goto loc_5E65A9;
    }

loc_5E6590:
	mov(mv, &ts->ecx, x86::mem(ts->eax, 4));
	mov(mv, &ts->edx, x86::mem(ts->eax + 0x4, 4));
	mov(mv, x86::mem(ts->edx, 4), ts->ecx);
	push(mv, &ts->esp, ts->eax);
	mov(mv, x86::mem(ts->ecx + 0x4, 4), ts->edx);
	game::j__free(ts, mv);
	mov(mv, &ts->eax, x86::mem(ts->esi, 4));
	add(&ts->esp, 0x4);
	cmp(&ts->eflags, ts->eax, ts->esi);
	if (!ts->eflags.zero) {
        goto loc_5E6590;
    }

loc_5E65A9:
	mov(mv, &ts->eax, x86::mem(ts->edi + 0x18, 4));
	lea(mv, &ts->esi, x86::mem(ts->edi + 0x18, 4));
	cmp(&ts->eflags, ts->eax, ts->esi);
	mov(mv, x86::mem(ts->esp + 0x14, 1), 0x2);
	if (ts->eflags.zero) {
        goto loc_5E65D1;
    }

loc_5E65B8:
	mov(mv, &ts->ecx, x86::mem(ts->eax, 4));
	mov(mv, &ts->edx, x86::mem(ts->eax + 0x4, 4));
	mov(mv, x86::mem(ts->edx, 4), ts->ecx);
	push(mv, &ts->esp, ts->eax);
	mov(mv, x86::mem(ts->ecx + 0x4, 4), ts->edx);
	game::j__free(ts, mv);
	mov(mv, &ts->eax, x86::mem(ts->esi, 4));
	add(&ts->esp, 0x4);
	cmp(&ts->eflags, ts->eax, ts->esi);
	if (!ts->eflags.zero) {
        goto loc_5E65B8;
    }

loc_5E65D1:
	mov(mv, &ts->eax, x86::mem(ts->edi + 0x10, 4));
	lea(mv, &ts->esi, x86::mem(ts->edi + 0x10, 4));
	cmp(&ts->eflags, ts->eax, ts->esi);
	mov(mv, x86::mem(ts->esp + 0x14, 1), 0x1);
	if (ts->eflags.zero) {
        goto loc_5E65F9;
    }

loc_5E65E0:
	mov(mv, &ts->ecx, x86::mem(ts->eax, 4));
	mov(mv, &ts->edx, x86::mem(ts->eax + 0x4, 4));
	mov(mv, x86::mem(ts->edx, 4), ts->ecx);
	push(mv, &ts->esp, ts->eax);
	mov(mv, x86::mem(ts->ecx + 0x4, 4), ts->edx);
	game::j__free(ts, mv);
	mov(mv, &ts->eax, x86::mem(ts->esi, 4));
	add(&ts->esp, 0x4);
	cmp(&ts->eflags, ts->eax, ts->esi);
	if (!ts->eflags.zero) {
        goto loc_5E65E0;
    }

loc_5E65F9:
	mov(mv, &ts->eax, x86::mem(ts->edi + 0x8, 4));
	lea(mv, &ts->esi, x86::mem(ts->edi + 0x8, 4));
	cmp(&ts->eflags, ts->eax, ts->esi);
	mov(mv, x86::mem(ts->esp + 0x14, 1), 0x0);
	if (ts->eflags.zero) {
        goto loc_5E6621;
    }

loc_5E6608:
	mov(mv, &ts->ecx, x86::mem(ts->eax, 4));
	mov(mv, &ts->edx, x86::mem(ts->eax + 0x4, 4));
	mov(mv, x86::mem(ts->edx, 4), ts->ecx);
	push(mv, &ts->esp, ts->eax);
	mov(mv, x86::mem(ts->ecx + 0x4, 4), ts->edx);
	game::j__free(ts, mv);
	mov(mv, &ts->eax, x86::mem(ts->esi, 4));
	add(&ts->esp, 0x4);
	cmp(&ts->eflags, ts->eax, ts->esi);
	if (!ts->eflags.zero) {
        goto loc_5E6608;
    }

loc_5E6621:
	mov(mv, &ts->eax, x86::mem(ts->edi, 4));
	cmp(&ts->eflags, ts->eax, ts->edi);
	mov(mv, x86::mem(ts->esp + 0x14, 4), 0xFFFFFFFF);
	if (ts->eflags.zero) {
        goto loc_5E6649;
    }
	nop();

loc_5E6630:
	mov(mv, &ts->ecx, x86::mem(ts->eax, 4));
	mov(mv, &ts->edx, x86::mem(ts->eax + 0x4, 4));
	mov(mv, x86::mem(ts->edx, 4), ts->ecx);
	push(mv, &ts->esp, ts->eax);
	mov(mv, x86::mem(ts->ecx + 0x4, 4), ts->edx);
	game::j__free(ts, mv);
	mov(mv, &ts->eax, x86::mem(ts->edi, 4));
	add(&ts->esp, 0x4);
	cmp(&ts->eflags, ts->eax, ts->edi);
	if (!ts->eflags.zero) {
        goto loc_5E6630;
    }

loc_5E6649:
	mov(mv, &ts->ecx, x86::mem(ts->esp + 0xC, 4));
	pop(mv, &ts->esp, ts->edi);
	pop(mv, &ts->esp, ts->esi);
	mov(mv, x86::mem(0x0, 4), ts->ecx);
	add(&ts->esp, 0x10);
	retn(mv, &ts->esp);

loc_7795A0:
	mov(mv, &ts->ecx, x86::mem(ts->ebp - 0x10, 4));
	goto sub_4DEF30;

loc_7795A8:
	mov(mv, &ts->ecx, x86::mem(ts->ebp - 0x10, 4));
	add(&ts->ecx, 0x8);
	goto sub_4DEF30;

loc_7795B3:
	mov(mv, &ts->ecx, x86::mem(ts->ebp - 0x10, 4));
	add(&ts->ecx, 0x10);
	goto sub_4DEF30;

loc_7795BE:
	mov(mv, &ts->ecx, x86::mem(ts->ebp - 0x10, 4));
	add(&ts->ecx, 0x18);
	goto sub_4DEF30;

loc_7795C9:
	mov(mv, &ts->ecx, x86::mem(ts->ebp - 0x10, 4));
	add(&ts->ecx, 0x20);
	goto sub_4DEF30;

loc_7795D4:
	mov(mv, &ts->ecx, x86::mem(ts->ebp - 0x10, 4));
	add(&ts->ecx, 0x28);
	goto sub_4DEF30;

loc_7795DF:
	mov(mv, &ts->ecx, x86::mem(ts->ebp - 0x10, 4));
	add(&ts->ecx, 0x30);
	goto sub_4DEF30;

loc_7795EA:
	mov(mv, &ts->ecx, x86::mem(ts->ebp - 0x10, 4));
	add(&ts->ecx, 0x38);
	goto sub_4DEF30;

loc_7795F5:
	mov(mv, &ts->ecx, x86::mem(ts->ebp - 0x10, 4));
	add(&ts->ecx, 0x40);
	goto sub_4DEF30;

loc_779600:
	mov(&ts->eax, 0x7E4DD0);
	goto ___CxxFrameHandler;
}

void unknown_libname_262(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x88F768);
	goto loc_5E8200;

loc_5E7E30:
	push(mv, &ts->esp, ts->esi);
	push(mv, &ts->esp, ts->edi);
	mov(&ts->edi, ts->ecx);
	mov(mv, &ts->esi, x86::mem(ts->edi, 4));
	cmp(&ts->eflags, ts->esi, ts->edi);
	if (ts->eflags.zero) {
        goto loc_5E7E66;
    }
	lea(mv, &ts->ebx, x86::mem(ts->ebx, 4));

loc_5E7E40:
	mov(mv, &ts->ecx, x86::mem(ts->esi + 0x4, 4));
	mov(mv, &ts->eax, x86::mem(ts->esi, 4));
	mov(mv, x86::mem(ts->ecx, 4), ts->eax);
	mov(mv, x86::mem(ts->eax + 0x4, 4), ts->ecx);
	mov(&ts->ecx, ts->esi);
	game::sub_5E69F0(ts, mv);
	mov(mv, &ts->eax, x86::mem(0x883D98, 4));
	push(mv, &ts->esp, ts->esi);
	push(mv, &ts->esp, ts->eax);
	game::sub_43F920(ts, mv);
	mov(mv, &ts->esi, x86::mem(ts->edi, 4));
	add(&ts->esp, 0x8);
	cmp(&ts->eflags, ts->esi, ts->edi);
	if (!ts->eflags.zero) {
        goto loc_5E7E40;
    }

loc_5E7E66:
	pop(mv, &ts->esp, ts->edi);
	pop(mv, &ts->esp, ts->esi);
	retn(mv, &ts->esp);

loc_5E8200:
	mov(mv, x86::mem(ts->ecx, 4), ts->ecx);
	mov(mv, x86::mem(ts->ecx + 0x4, 4), ts->ecx);
	goto loc_5E7E30;
}

void sub_7826D0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x50F7D0);
	push(mv, &ts->esp, 0x16);
	push(mv, &ts->esp, 0x940);
	push(mv, &ts->esp, 0x890160);
	game::_eh_vector_destructor_iterator__void_P_uint_int_void__P__void_P__(ts, mv);
	retn(mv, &ts->esp);
}

void unknown_libname_263(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x89CF48);
	goto loc_5EFCB0;

loc_5EFCB0:
	push(mv, &ts->esp, 0xFFFFFFFF);
	push(mv, &ts->esp, 0x7798AC);
	mov(mv, &ts->eax, x86::mem(0x0, 4));
	push(mv, &ts->esp, ts->eax);
	mov(mv, x86::mem(0x0, 4), ts->esp);
	push(mv, &ts->esp, ts->ecx);
	push(mv, &ts->esp, ts->esi);
	mov(&ts->esi, ts->ecx);
	mov(mv, x86::mem(ts->esp + 0x4, 4), ts->esi);
	mov(mv, &ts->eax, x86::mem(ts->esi + 0x60, 4));
	test(&ts->eflags, ts->eax, ts->eax);
	mov(mv, x86::mem(ts->esp + 0x10, 4), 0x11);
	if (ts->eflags.zero) {
        goto loc_5EFCF6;
    }
	push(mv, &ts->esp, 0x3);
	game::sub_43FB80(ts, mv);
	mov(mv, &ts->eax, x86::mem(ts->esi + 0x60, 4));
	push(mv, &ts->esp, ts->eax);
	game::sub_440540(ts, mv);
	add(&ts->esp, 0x8);
	mov(mv, x86::mem(ts->esi + 0x60, 4), 0x0);

loc_5EFCF6:
	lea(mv, &ts->ecx, x86::mem(ts->esi + 0x1700, 4));
	mov(mv, x86::mem(ts->esp + 0x10, 1), 0x10);
	game::nullsub_1(ts, mv);
	lea(mv, &ts->ecx, x86::mem(ts->esi + 0x15B4, 4));
	mov(mv, x86::mem(ts->esp + 0x10, 1), 0xF);
	game::nullsub_1(ts, mv);
	lea(mv, &ts->ecx, x86::mem(ts->esi + 0x1468, 4));
	mov(mv, x86::mem(ts->esp + 0x10, 1), 0xE);
	game::nullsub_1(ts, mv);
	lea(mv, &ts->ecx, x86::mem(ts->esi + 0x131C, 4));
	mov(mv, x86::mem(ts->esp + 0x10, 1), 0xD);
	game::nullsub_1(ts, mv);
	lea(mv, &ts->ecx, x86::mem(ts->esi + 0x11D0, 4));
	mov(mv, x86::mem(ts->esp + 0x10, 1), 0xC);
	game::nullsub_1(ts, mv);
	lea(mv, &ts->ecx, x86::mem(ts->esi + 0x1084, 4));
	mov(mv, x86::mem(ts->esp + 0x10, 1), 0xB);
	game::nullsub_1(ts, mv);
	lea(mv, &ts->ecx, x86::mem(ts->esi + 0xF38, 4));
	mov(mv, x86::mem(ts->esp + 0x10, 1), 0xA);
	game::nullsub_1(ts, mv);
	lea(mv, &ts->ecx, x86::mem(ts->esi + 0xDEC, 4));
	mov(mv, x86::mem(ts->esp + 0x10, 1), 0x9);
	game::nullsub_1(ts, mv);
	lea(mv, &ts->ecx, x86::mem(ts->esi + 0xCA0, 4));
	mov(mv, x86::mem(ts->esp + 0x10, 1), 0x8);
	game::nullsub_1(ts, mv);
	lea(mv, &ts->ecx, x86::mem(ts->esi + 0xB54, 4));
	mov(mv, x86::mem(ts->esp + 0x10, 1), 0x7);
	game::nullsub_1(ts, mv);
	lea(mv, &ts->ecx, x86::mem(ts->esi + 0xA08, 4));
	mov(mv, x86::mem(ts->esp + 0x10, 1), 0x6);
	game::nullsub_1(ts, mv);
	lea(mv, &ts->ecx, x86::mem(ts->esi + 0x8BC, 4));
	mov(mv, x86::mem(ts->esp + 0x10, 1), 0x5);
	game::nullsub_1(ts, mv);
	lea(mv, &ts->ecx, x86::mem(ts->esi + 0x770, 4));
	mov(mv, x86::mem(ts->esp + 0x10, 1), 0x4);
	game::nullsub_1(ts, mv);
	lea(mv, &ts->ecx, x86::mem(ts->esi + 0x62C, 4));
	mov(mv, x86::mem(ts->esp + 0x10, 1), 0x3);
	game::nullsub_1(ts, mv);
	lea(mv, &ts->ecx, x86::mem(ts->esi + 0x4E8, 4));
	mov(mv, x86::mem(ts->esp + 0x10, 1), 0x2);
	game::nullsub_1(ts, mv);
	lea(mv, &ts->ecx, x86::mem(ts->esi + 0x3A4, 4));
	mov(mv, x86::mem(ts->esp + 0x10, 1), 0x1);
	game::nullsub_1(ts, mv);
	lea(mv, &ts->ecx, x86::mem(ts->esi + 0x260, 4));
	mov(mv, x86::mem(ts->esp + 0x10, 1), 0x0);
	game::nullsub_1(ts, mv);
	lea(mv, &ts->ecx, x86::mem(ts->esi + 0x11C, 4));
	mov(mv, x86::mem(ts->esp + 0x10, 4), 0xFFFFFFFF);
	game::nullsub_1(ts, mv);
	mov(mv, &ts->ecx, x86::mem(ts->esp + 0x8, 4));
	pop(mv, &ts->esp, ts->esi);
	mov(mv, x86::mem(0x0, 4), ts->ecx);
	add(&ts->esp, 0x10);
	retn(mv, &ts->esp);

loc_7797B0:
	mov(mv, &ts->ecx, x86::mem(ts->ebp - 0x10, 4));
	add(&ts->ecx, 0x11C);
	goto nullsub_1;

loc_7797BE:
	mov(mv, &ts->ecx, x86::mem(ts->ebp - 0x10, 4));
	add(&ts->ecx, 0x260);
	goto nullsub_1;

loc_7797CC:
	mov(mv, &ts->ecx, x86::mem(ts->ebp - 0x10, 4));
	add(&ts->ecx, 0x3A4);
	goto nullsub_1;

loc_7797DA:
	mov(mv, &ts->ecx, x86::mem(ts->ebp - 0x10, 4));
	add(&ts->ecx, 0x4E8);
	goto nullsub_1;

loc_7797E8:
	mov(mv, &ts->ecx, x86::mem(ts->ebp - 0x10, 4));
	add(&ts->ecx, 0x62C);
	goto nullsub_1;

loc_7797F6:
	mov(mv, &ts->ecx, x86::mem(ts->ebp - 0x10, 4));
	add(&ts->ecx, 0x770);
	goto nullsub_1;

loc_779804:
	mov(mv, &ts->ecx, x86::mem(ts->ebp - 0x10, 4));
	add(&ts->ecx, 0x8BC);
	goto nullsub_1;

loc_779812:
	mov(mv, &ts->ecx, x86::mem(ts->ebp - 0x10, 4));
	add(&ts->ecx, 0xA08);
	goto nullsub_1;

loc_779820:
	mov(mv, &ts->ecx, x86::mem(ts->ebp - 0x10, 4));
	add(&ts->ecx, 0xB54);
	goto nullsub_1;

loc_77982E:
	mov(mv, &ts->ecx, x86::mem(ts->ebp - 0x10, 4));
	add(&ts->ecx, 0xCA0);
	goto nullsub_1;

loc_77983C:
	mov(mv, &ts->ecx, x86::mem(ts->ebp - 0x10, 4));
	add(&ts->ecx, 0xDEC);
	goto nullsub_1;

loc_77984A:
	mov(mv, &ts->ecx, x86::mem(ts->ebp - 0x10, 4));
	add(&ts->ecx, 0xF38);
	goto nullsub_1;

loc_779858:
	mov(mv, &ts->ecx, x86::mem(ts->ebp - 0x10, 4));
	add(&ts->ecx, 0x1084);
	goto nullsub_1;

loc_779866:
	mov(mv, &ts->ecx, x86::mem(ts->ebp - 0x10, 4));
	add(&ts->ecx, 0x11D0);
	goto nullsub_1;

loc_779874:
	mov(mv, &ts->ecx, x86::mem(ts->ebp - 0x10, 4));
	add(&ts->ecx, 0x131C);
	goto nullsub_1;

loc_779882:
	mov(mv, &ts->ecx, x86::mem(ts->ebp - 0x10, 4));
	add(&ts->ecx, 0x1468);
	goto nullsub_1;

loc_779890:
	mov(mv, &ts->ecx, x86::mem(ts->ebp - 0x10, 4));
	add(&ts->ecx, 0x15B4);
	goto nullsub_1;

loc_77989E:
	mov(mv, &ts->ecx, x86::mem(ts->ebp - 0x10, 4));
	add(&ts->ecx, 0x1700);
	goto nullsub_1;

SEH_5F9050:
	mov(&ts->eax, 0x7E5248);
	goto ___CxxFrameHandler;
}

void unknown_libname_264(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x89E838);
	goto sub_4358E0;
}

void unknown_libname_265(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x89E844);
	goto loc_60B2F0;

loc_60B2F0:
	push(mv, &ts->esp, 0xFFFFFFFF);
	push(mv, &ts->esp, 0x77A143);
	mov(mv, &ts->eax, x86::mem(0x0, 4));
	push(mv, &ts->esp, ts->eax);
	mov(mv, x86::mem(0x0, 4), ts->esp);
	sub(&ts->esp, 0x8);
	push(mv, &ts->esp, ts->ebp);
	mov(&ts->ebp, ts->ecx);
	push(mv, &ts->esp, ts->esi);
	mov(mv, x86::mem(ts->esp + 0x8, 4), ts->ebp);
	mov(mv, &ts->esi, x86::mem(ts->ebp, 4));
	cmp(&ts->eflags, ts->esi, ts->ebp);
	mov(mv, x86::mem(ts->esp + 0x18, 4), 0x0);
	if (ts->eflags.zero) {
        goto loc_60B37E;
    }
	push(mv, &ts->esp, ts->edi);

loc_60B320:
	mov(mv, &ts->eax, x86::mem(ts->esi, 4));
	mov(mv, &ts->ecx, x86::mem(ts->esi + 0x4, 4));
	mov(mv, x86::mem(ts->ecx, 4), ts->eax);
	mov(mv, x86::mem(ts->eax + 0x4, 4), ts->ecx);
	mov(mv, x86::mem(ts->esp + 0x10, 4), ts->esi);
	mov(&ts->ecx, ts->esi);
	mov(mv, x86::mem(ts->esp + 0x1C, 1), 0x1);
	game::sub_605320(ts, mv);
	mov(mv, &ts->eax, x86::mem(ts->esi + 0x20, 4));
	lea(mv, &ts->edi, x86::mem(ts->esi + 0x20, 4));
	cmp(&ts->eflags, ts->eax, ts->edi);
	mov(mv, x86::mem(ts->esp + 0x1C, 1), 0x0);
	if (ts->eflags.zero) {
        goto loc_60B36D;
    }
	lea(mv, &ts->esp, x86::mem(ts->esp, 4));

loc_60B350:
	mov(mv, &ts->ecx, x86::mem(ts->eax, 4));
	mov(mv, &ts->edx, x86::mem(ts->eax + 0x4, 4));
	mov(mv, x86::mem(ts->edx, 4), ts->ecx);
	mov(mv, x86::mem(ts->ecx + 0x4, 4), ts->edx);
	lea(mv, &ts->ecx, x86::mem(ts->eax - 0x4, 4));
	test(&ts->eflags, ts->ecx, ts->ecx);
	if (ts->eflags.zero) {
        goto loc_60B367;
    }
	mov(mv, &ts->eax, x86::mem(ts->ecx, 4));
	push(mv, &ts->esp, 0x1);
	call(ts, mv, x86::mem(ts->eax, 4));

loc_60B367:
	mov(mv, &ts->eax, x86::mem(ts->edi, 4));
	cmp(&ts->eflags, ts->eax, ts->edi);
	if (!ts->eflags.zero) {
        goto loc_60B350;
    }

loc_60B36D:
	push(mv, &ts->esp, ts->esi);
	game::j__free(ts, mv);
	mov(mv, &ts->esi, x86::mem(ts->ebp, 4));
	add(&ts->esp, 0x4);
	cmp(&ts->eflags, ts->esi, ts->ebp);
	if (!ts->eflags.zero) {
        goto loc_60B320;
    }
	pop(mv, &ts->esp, ts->edi);

loc_60B37E:
	mov(&ts->ecx, ts->ebp);
	mov(mv, x86::mem(ts->esp + 0x18, 4), 0xFFFFFFFF);
	game::sub_609CA0(ts, mv);
	mov(mv, &ts->ecx, x86::mem(ts->esp + 0x10, 4));
	pop(mv, &ts->esp, ts->esi);
	pop(mv, &ts->esp, ts->ebp);
	mov(mv, x86::mem(0x0, 4), ts->ecx);
	add(&ts->esp, 0x14);
	retn(mv, &ts->esp);

loc_77A130:
	mov(mv, &ts->ecx, x86::mem(ts->ebp - 0x14, 4));
	goto sub_609CA0;

unknown_libname_90:
	mov(mv, &ts->ecx, x86::mem(ts->ebp - 0x10, 4));
	add(&ts->ecx, 0x20);
	goto sub_4358E0;

loc_77A143:
	mov(&ts->eax, 0x7E5730);
	goto ___CxxFrameHandler;
}

void nullsub_69(x86::thread_state* ts, x86::memory_view* mv) {
	retn(mv, &ts->esp);
}

void unknown_libname_266(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8A1F28);
	goto sub_605390;
}

void sub_782740(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x605400);
	push(mv, &ts->esp, 0x2);
	push(mv, &ts->esp, 0x30);
	push(mv, &ts->esp, 0x8A3180);
	game::_eh_vector_destructor_iterator__void_P_uint_int_void__P__void_P__(ts, mv);
	retn(mv, &ts->esp);
}

void sub_782760(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x605400);
	push(mv, &ts->esp, 0x2);
	push(mv, &ts->esp, 0x30);
	push(mv, &ts->esp, 0x8A1E90);
	game::_eh_vector_destructor_iterator__void_P_uint_int_void__P__void_P__(ts, mv);
	retn(mv, &ts->esp);
}

void sub_782780(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x605400);
	push(mv, &ts->esp, 0x2);
	push(mv, &ts->esp, 0x30);
	push(mv, &ts->esp, 0x8A31F0);
	game::_eh_vector_destructor_iterator__void_P_uint_int_void__P__void_P__(ts, mv);
	retn(mv, &ts->esp);
}

void sub_7827A0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x605400);
	push(mv, &ts->esp, 0x2);
	push(mv, &ts->esp, 0x30);
	push(mv, &ts->esp, 0x8A1E30);
	game::_eh_vector_destructor_iterator__void_P_uint_int_void__P__void_P__(ts, mv);
	retn(mv, &ts->esp);
}

void sub_7827C0(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x605390);
	push(mv, &ts->esp, 0x2);
	push(mv, &ts->esp, 0x1C);
	push(mv, &ts->esp, 0x8A3250);
	game::_eh_vector_destructor_iterator__void_P_uint_int_void__P__void_P__(ts, mv);
	retn(mv, &ts->esp);
}

void unknown_libname_267(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8A1DE4);
	goto sub_4903B0;
}

void unknown_libname_268(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8A3168);
	goto sub_4903B0;
}

void unknown_libname_269(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8A1DFC);
	goto sub_4903B0;
}

void unknown_libname_270(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8A1F10);
	goto sub_4903B0;
}

void sub_782820(x86::thread_state* ts, x86::memory_view* mv) {
	push(mv, &ts->esp, 0x4022C0);
	push(mv, &ts->esp, 0x1);
	push(mv, &ts->esp, 0x64);
	push(mv, &ts->esp, 0x8A42C0);
	game::_eh_vector_destructor_iterator__void_P_uint_int_void__P__void_P__(ts, mv);
	retn(mv, &ts->esp);
}

void unknown_libname_271(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8A2B50);
	goto sub_637ED0;
}

void unknown_libname_272(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8A2B68);
	goto sub_4DEF30;
}

void unknown_libname_273(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8A31E4);
	goto sub_4DEF30;
}

void unknown_libname_274(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8A3288);
	goto loc_6379B0;

loc_6379B0:
	push(mv, &ts->esp, 0xFFFFFFFF);
	push(mv, &ts->esp, 0x77A37D);
	mov(mv, &ts->eax, x86::mem(0x0, 4));
	push(mv, &ts->esp, ts->eax);
	mov(mv, x86::mem(0x0, 4), ts->esp);
	push(mv, &ts->esp, ts->ecx);
	push(mv, &ts->esp, ts->esi);
	push(mv, &ts->esp, ts->edi);
	mov(&ts->edi, ts->ecx);
	mov(mv, x86::mem(ts->esp + 0x8, 4), ts->edi);
	mov(mv, &ts->eax, x86::mem(ts->edi + 0x60, 4));
	test(&ts->eflags, ts->eax, ts->eax);
	mov(mv, x86::mem(ts->esp + 0x14, 4), 0x6);
	if (ts->eflags.zero) {
        goto loc_637A18;
    }
	mov(mv, &ts->eax, x86::mem(ts->eax + 0x54, 4));
	test(&ts->eflags, ts->eax, ts->eax);
	if (ts->eflags.zero) {
        goto loc_637A08;
    }
	push(mv, &ts->esp, ts->eax);
	game::sub_580E90(ts, mv);
	mov(mv, &ts->eax, x86::mem(ts->edi + 0x60, 4));
	mov(mv, x86::mem(ts->eax + 0x54, 4), 0x0);
	mov(mv, &ts->ecx, x86::mem(ts->edi + 0x60, 4));
	push(mv, &ts->esp, 0x0);
	mov(mv, x86::mem(ts->ecx + 0x5C, 4), 0x0);
	game::sub_438140(ts, mv);
	add(&ts->esp, 0x8);

loc_637A08:
	mov(mv, &ts->eax, x86::mem(ts->edi + 0x60, 4));
	test(&ts->eflags, ts->eax, ts->eax);
	if (ts->eflags.zero) {
        goto loc_637A18;
    }
	push(mv, &ts->esp, ts->eax);
	game::j__free(ts, mv);
	add(&ts->esp, 0x4);

loc_637A18:
	lea(mv, &ts->ecx, x86::mem(ts->edi + 0x58, 4));
	mov(mv, x86::mem(ts->esp + 0x14, 1), 0x5);
	game::sub_6344E0(ts, mv);
	mov(mv, &ts->eax, x86::mem(ts->edi + 0x50, 4));
	lea(mv, &ts->esi, x86::mem(ts->edi + 0x50, 4));
	cmp(&ts->eflags, ts->eax, ts->esi);
	mov(mv, x86::mem(ts->esp + 0x14, 1), 0x4);
	if (ts->eflags.zero) {
        goto loc_637A4D;
    }

loc_637A34:
	mov(mv, &ts->ecx, x86::mem(ts->eax, 4));
	mov(mv, &ts->edx, x86::mem(ts->eax + 0x4, 4));
	mov(mv, x86::mem(ts->edx, 4), ts->ecx);
	push(mv, &ts->esp, ts->eax);
	mov(mv, x86::mem(ts->ecx + 0x4, 4), ts->edx);
	game::j__free(ts, mv);
	mov(mv, &ts->eax, x86::mem(ts->esi, 4));
	add(&ts->esp, 0x4);
	cmp(&ts->eflags, ts->eax, ts->esi);
	if (!ts->eflags.zero) {
        goto loc_637A34;
    }

loc_637A4D:
	mov(mv, &ts->eax, x86::mem(ts->edi + 0x48, 4));
	lea(mv, &ts->esi, x86::mem(ts->edi + 0x48, 4));
	cmp(&ts->eflags, ts->eax, ts->esi);
	mov(mv, x86::mem(ts->esp + 0x14, 1), 0x3);
	if (ts->eflags.zero) {
        goto loc_637A79;
    }
	lea(mv, &ts->esp, x86::mem(ts->esp, 4));

loc_637A60:
	mov(mv, &ts->ecx, x86::mem(ts->eax, 4));
	mov(mv, &ts->edx, x86::mem(ts->eax + 0x4, 4));
	mov(mv, x86::mem(ts->edx, 4), ts->ecx);
	push(mv, &ts->esp, ts->eax);
	mov(mv, x86::mem(ts->ecx + 0x4, 4), ts->edx);
	game::j__free(ts, mv);
	mov(mv, &ts->eax, x86::mem(ts->esi, 4));
	add(&ts->esp, 0x4);
	cmp(&ts->eflags, ts->eax, ts->esi);
	if (!ts->eflags.zero) {
        goto loc_637A60;
    }

loc_637A79:
	mov(mv, &ts->eax, x86::mem(ts->edi + 0x40, 4));
	lea(mv, &ts->esi, x86::mem(ts->edi + 0x40, 4));
	cmp(&ts->eflags, ts->eax, ts->esi);
	mov(mv, x86::mem(ts->esp + 0x14, 1), 0x2);
	if (ts->eflags.zero) {
        goto loc_637AA1;
    }

loc_637A88:
	mov(mv, &ts->ecx, x86::mem(ts->eax, 4));
	mov(mv, &ts->edx, x86::mem(ts->eax + 0x4, 4));
	mov(mv, x86::mem(ts->edx, 4), ts->ecx);
	push(mv, &ts->esp, ts->eax);
	mov(mv, x86::mem(ts->ecx + 0x4, 4), ts->edx);
	game::j__free(ts, mv);
	mov(mv, &ts->eax, x86::mem(ts->esi, 4));
	add(&ts->esp, 0x4);
	cmp(&ts->eflags, ts->eax, ts->esi);
	if (!ts->eflags.zero) {
        goto loc_637A88;
    }

loc_637AA1:
	lea(mv, &ts->ecx, x86::mem(ts->edi + 0x38, 4));
	mov(mv, x86::mem(ts->esp + 0x14, 1), 0x1);
	game::sub_6344A0(ts, mv);
	lea(mv, &ts->ecx, x86::mem(ts->edi + 0x30, 4));
	mov(mv, x86::mem(ts->esp + 0x14, 1), 0x0);
	game::sub_634460(ts, mv);
	lea(mv, &ts->ecx, x86::mem(ts->edi + 0x28, 4));
	mov(mv, x86::mem(ts->esp + 0x14, 4), 0xFFFFFFFF);
	game::sub_634420(ts, mv);
	mov(mv, &ts->ecx, x86::mem(ts->esp + 0xC, 4));
	pop(mv, &ts->esp, ts->edi);
	pop(mv, &ts->esp, ts->esi);
	mov(mv, x86::mem(0x0, 4), ts->ecx);
	add(&ts->esp, 0x10);
	retn(mv, &ts->esp);

loc_77A330:
	mov(mv, &ts->ecx, x86::mem(ts->ebp - 0x10, 4));
	add(&ts->ecx, 0x28);
	goto sub_634420;

loc_77A33B:
	mov(mv, &ts->ecx, x86::mem(ts->ebp - 0x10, 4));
	add(&ts->ecx, 0x30);
	goto sub_634460;

loc_77A346:
	mov(mv, &ts->ecx, x86::mem(ts->ebp - 0x10, 4));
	add(&ts->ecx, 0x38);
	goto sub_6344A0;

loc_77A351:
	mov(mv, &ts->ecx, x86::mem(ts->ebp - 0x10, 4));
	add(&ts->ecx, 0x40);
	goto sub_4DEF30;

loc_77A35C:
	mov(mv, &ts->ecx, x86::mem(ts->ebp - 0x10, 4));
	add(&ts->ecx, 0x48);
	goto sub_4DEF30;

loc_77A367:
	mov(mv, &ts->ecx, x86::mem(ts->ebp - 0x10, 4));
	add(&ts->ecx, 0x50);
	goto sub_4DEF30;

loc_77A372:
	mov(mv, &ts->ecx, x86::mem(ts->ebp - 0x10, 4));
	add(&ts->ecx, 0x58);
	goto sub_6344E0;

loc_77A37D:
	mov(&ts->eax, 0x7E592C);
	goto ___CxxFrameHandler;
}

void unknown_libname_275(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8A3148);
	goto sub_4DEF30;
}

void unknown_libname_276(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8A4260);
	goto loc_637F10;

loc_637F10:
	push(mv, &ts->esp, ts->esi);
	push(mv, &ts->esp, ts->edi);
	mov(&ts->edi, ts->ecx);
	mov(mv, &ts->esi, x86::mem(ts->edi, 4));
	cmp(&ts->eflags, ts->esi, ts->edi);
	if (ts->eflags.zero) {
        goto loc_637F46;
    }
	lea(mv, &ts->ebx, x86::mem(ts->ebx, 4));

loc_637F20:
	mov(mv, &ts->ecx, x86::mem(ts->esi + 0x4, 4));
	mov(mv, &ts->eax, x86::mem(ts->esi, 4));
	mov(mv, x86::mem(ts->ecx, 4), ts->eax);
	mov(mv, x86::mem(ts->eax + 0x4, 4), ts->ecx);
	mov(&ts->ecx, ts->esi);
	game::sub_633FD0(ts, mv);
	mov(mv, &ts->eax, x86::mem(0x8A1D08, 4));
	push(mv, &ts->esp, ts->esi);
	push(mv, &ts->esp, ts->eax);
	game::sub_43F920(ts, mv);
	mov(mv, &ts->esi, x86::mem(ts->edi, 4));
	add(&ts->esp, 0x8);
	cmp(&ts->eflags, ts->esi, ts->edi);
	if (!ts->eflags.zero) {
        goto loc_637F20;
    }

loc_637F46:
	pop(mv, &ts->esp, ts->edi);
	pop(mv, &ts->esp, ts->esi);
	retn(mv, &ts->esp);
}

void unknown_libname_277(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8A2CA4);
	goto loc_63B4D0;

loc_63B4D0:
	push(mv, &ts->esp, ts->esi);
	push(mv, &ts->esp, ts->edi);
	mov(&ts->edi, ts->ecx);
	mov(mv, &ts->esi, x86::mem(ts->edi, 4));
	cmp(&ts->eflags, ts->esi, ts->edi);
	if (ts->eflags.zero) {
        goto loc_63B500;
    }
	lea(mv, &ts->ebx, x86::mem(ts->ebx, 4));

loc_63B4E0:
	mov(mv, &ts->ecx, x86::mem(ts->esi + 0x4, 4));
	mov(mv, &ts->eax, x86::mem(ts->esi, 4));
	mov(mv, x86::mem(ts->ecx, 4), ts->eax);
	mov(mv, x86::mem(ts->eax + 0x4, 4), ts->ecx);
	mov(&ts->ecx, ts->esi);
	game::sub_63A550(ts, mv);
	push(mv, &ts->esp, ts->esi);
	game::j__free(ts, mv);
	mov(mv, &ts->esi, x86::mem(ts->edi, 4));
	add(&ts->esp, 0x4);
	cmp(&ts->eflags, ts->esi, ts->edi);
	if (!ts->eflags.zero) {
        goto loc_63B4E0;
    }

loc_63B500:
	pop(mv, &ts->esp, ts->edi);
	pop(mv, &ts->esp, ts->esi);
	retn(mv, &ts->esp);
}

void unknown_libname_278(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8A30F0);
	goto loc_63B510;

loc_63B510:
	push(mv, &ts->esp, ts->esi);
	push(mv, &ts->esp, ts->edi);
	mov(&ts->edi, ts->ecx);
	mov(mv, &ts->esi, x86::mem(ts->edi, 4));
	cmp(&ts->eflags, ts->esi, ts->edi);
	if (ts->eflags.zero) {
        goto loc_63B540;
    }
	lea(mv, &ts->ebx, x86::mem(ts->ebx, 4));

loc_63B520:
	mov(mv, &ts->ecx, x86::mem(ts->esi + 0x4, 4));
	mov(mv, &ts->eax, x86::mem(ts->esi, 4));
	mov(mv, x86::mem(ts->ecx, 4), ts->eax);
	mov(mv, x86::mem(ts->eax + 0x4, 4), ts->ecx);
	mov(&ts->ecx, ts->esi);
	game::sub_6380E0(ts, mv);
	push(mv, &ts->esp, ts->esi);
	game::j__free(ts, mv);
	mov(mv, &ts->esi, x86::mem(ts->edi, 4));
	add(&ts->esp, 0x4);
	cmp(&ts->eflags, ts->esi, ts->edi);
	if (!ts->eflags.zero) {
        goto loc_63B520;
    }

loc_63B540:
	pop(mv, &ts->esp, ts->edi);
	pop(mv, &ts->esp, ts->esi);
	retn(mv, &ts->esp);
}

void unknown_libname_279(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8A2C9C);
	goto loc_63B550;

loc_63B550:
	push(mv, &ts->esp, ts->esi);
	push(mv, &ts->esp, ts->edi);
	mov(&ts->edi, ts->ecx);
	mov(mv, &ts->esi, x86::mem(ts->edi, 4));
	cmp(&ts->eflags, ts->esi, ts->edi);
	if (ts->eflags.zero) {
        goto loc_63B580;
    }
	lea(mv, &ts->ebx, x86::mem(ts->ebx, 4));

loc_63B560:
	mov(mv, &ts->ecx, x86::mem(ts->esi + 0x4, 4));
	mov(mv, &ts->eax, x86::mem(ts->esi, 4));
	mov(mv, x86::mem(ts->ecx, 4), ts->eax);
	mov(mv, x86::mem(ts->eax + 0x4, 4), ts->ecx);
	mov(&ts->ecx, ts->esi);
	game::sub_63A320(ts, mv);
	push(mv, &ts->esp, ts->esi);
	game::j__free(ts, mv);
	mov(mv, &ts->esi, x86::mem(ts->edi, 4));
	add(&ts->esp, 0x4);
	cmp(&ts->eflags, ts->esi, ts->edi);
	if (!ts->eflags.zero) {
        goto loc_63B560;
    }

loc_63B580:
	pop(mv, &ts->esp, ts->edi);
	pop(mv, &ts->esp, ts->esi);
	retn(mv, &ts->esp);
}

void unknown_libname_280(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8A7114);
	goto sub_6D86E0;
}

void unknown_libname_281(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8A7168);
	goto loc_6D87C0;

loc_6D87C0:
	push(mv, &ts->esp, ts->esi);
	push(mv, &ts->esp, ts->edi);
	mov(&ts->esi, ts->ecx);
	game::sub_6D86E0(ts, mv);
	lea(mv, &ts->edi, x86::mem(ts->esi + 0x14, 4));
	mov(&ts->ecx, ts->edi);
	game::sub_6D86E0(ts, mv);
	mov(&ts->ecx, ts->edi);
	game::sub_6D86E0(ts, mv);
	pop(mv, &ts->esp, ts->edi);
	mov(&ts->ecx, ts->esi);
	pop(mv, &ts->esp, ts->esi);
	goto sub_6D86E0;
}

void unknown_libname_282(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8A7140);
	goto loc_6D87C0;

loc_6D87C0:
	push(mv, &ts->esp, ts->esi);
	push(mv, &ts->esp, ts->edi);
	mov(&ts->esi, ts->ecx);
	game::sub_6D86E0(ts, mv);
	lea(mv, &ts->edi, x86::mem(ts->esi + 0x14, 4));
	mov(&ts->ecx, ts->edi);
	game::sub_6D86E0(ts, mv);
	mov(&ts->ecx, ts->edi);
	game::sub_6D86E0(ts, mv);
	pop(mv, &ts->esp, ts->edi);
	mov(&ts->ecx, ts->esi);
	pop(mv, &ts->esp, ts->esi);
	goto sub_6D86E0;
}

void unknown_libname_283(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8A7BF8);
	goto nullsub_1;
}

void unknown_libname_284(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8A7E38);
	goto nullsub_1;
}

void nullsub_70(x86::thread_state* ts, x86::memory_view* mv) {
	retn(mv, &ts->esp);
}

void unknown_libname_285(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8A85F0);
	goto loc_6DE3A0;

loc_6DE3A0:
	mov(mv, &ts->eax, x86::mem(0x8A85CC, 4));
	cmp(&ts->eflags, ts->eax, ts->ecx);
	if (!ts->eflags.zero) {
        goto loc_6DE3B5;
    }
	mov(mv, &ts->eax, x86::mem(ts->ecx + 0x124, 4));
	mov(mv, x86::mem(0x8A85CC, 4), ts->eax);
	retn(mv, &ts->esp);

loc_6DE3B5:
	cmp(mv, &ts->eflags, x86::mem(ts->eax + 0x124, 4), ts->ecx);
	if (ts->eflags.zero) {
        goto loc_6DE3DC;
    }
	lea(mv, &ts->ecx, x86::mem(ts->ecx, 4));

loc_6DE3C0:
	mov(mv, &ts->edx, x86::mem(ts->eax + 0x124, 4));
	test(&ts->eflags, ts->edx, ts->edx);
	if (ts->eflags.zero) {
        goto loc_6DE3D4;
    }
	mov(&ts->eax, ts->edx);
	cmp(mv, &ts->eflags, x86::mem(ts->eax + 0x124, 4), ts->ecx);
	if (!ts->eflags.zero) {
        goto loc_6DE3C0;
    }

loc_6DE3D4:
	cmp(mv, &ts->eflags, x86::mem(ts->eax + 0x124, 4), ts->ecx);
	if (!ts->eflags.zero) {
        goto locret_6DE3E8;
    }

loc_6DE3DC:
	mov(mv, &ts->ecx, x86::mem(ts->ecx + 0x124, 4));
	mov(mv, x86::mem(ts->eax + 0x124, 4), ts->ecx);

locret_6DE3E8:
	retn(mv, &ts->esp);
}

void unknown_libname_286(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8A8738);
	goto loc_6DE3A0;

loc_6DE3A0:
	mov(mv, &ts->eax, x86::mem(0x8A85CC, 4));
	cmp(&ts->eflags, ts->eax, ts->ecx);
	if (!ts->eflags.zero) {
        goto loc_6DE3B5;
    }
	mov(mv, &ts->eax, x86::mem(ts->ecx + 0x124, 4));
	mov(mv, x86::mem(0x8A85CC, 4), ts->eax);
	retn(mv, &ts->esp);

loc_6DE3B5:
	cmp(mv, &ts->eflags, x86::mem(ts->eax + 0x124, 4), ts->ecx);
	if (ts->eflags.zero) {
        goto loc_6DE3DC;
    }
	lea(mv, &ts->ecx, x86::mem(ts->ecx, 4));

loc_6DE3C0:
	mov(mv, &ts->edx, x86::mem(ts->eax + 0x124, 4));
	test(&ts->eflags, ts->edx, ts->edx);
	if (ts->eflags.zero) {
        goto loc_6DE3D4;
    }
	mov(&ts->eax, ts->edx);
	cmp(mv, &ts->eflags, x86::mem(ts->eax + 0x124, 4), ts->ecx);
	if (!ts->eflags.zero) {
        goto loc_6DE3C0;
    }

loc_6DE3D4:
	cmp(mv, &ts->eflags, x86::mem(ts->eax + 0x124, 4), ts->ecx);
	if (!ts->eflags.zero) {
        goto locret_6DE3E8;
    }

loc_6DE3DC:
	mov(mv, &ts->ecx, x86::mem(ts->ecx + 0x124, 4));
	mov(mv, x86::mem(ts->eax + 0x124, 4), ts->ecx);

locret_6DE3E8:
	retn(mv, &ts->esp);
}

void unknown_libname_287(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8A8718);
	goto sub_6DE650;
}

void unknown_libname_288(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8AAAD8);
	goto nullsub_1;
}

void unknown_libname_289(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8AB668);
	goto loc_6DAE70;

loc_6DAE70:
	mov(mv, &ts->eax, x86::mem(ts->ecx + 0x1C, 4));
	test(&ts->eflags, ts->eax, ts->eax);
	if (ts->eflags.zero) {
        goto locret_6DAE83;
    }
	cmp(mv, &ts->eflags, x86::mem(ts->ecx, 4), 0x0);
	if (ts->eflags.zero) {
        goto locret_6DAE83;
    }
	push(mv, &ts->esp, ts->ecx);
	game::sub_6DABE0(ts, mv);
	pop(mv, &ts->esp, ts->ecx);

locret_6DAE83:
	retn(mv, &ts->esp);
}

void unknown_libname_290(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8AB6B8);
	goto loc_6DAE70;

loc_6DAE70:
	mov(mv, &ts->eax, x86::mem(ts->ecx + 0x1C, 4));
	test(&ts->eflags, ts->eax, ts->eax);
	if (ts->eflags.zero) {
        goto locret_6DAE83;
    }
	cmp(mv, &ts->eflags, x86::mem(ts->ecx, 4), 0x0);
	if (ts->eflags.zero) {
        goto locret_6DAE83;
    }
	push(mv, &ts->esp, ts->ecx);
	game::sub_6DABE0(ts, mv);
	pop(mv, &ts->esp, ts->ecx);

locret_6DAE83:
	retn(mv, &ts->esp);
}

void sub_782990(x86::thread_state* ts, x86::memory_view* mv) {
	mov(mv, x86::mem(0x8AD618, 4), 0x7A0358);
	retn(mv, &ts->esp);
}

void sub_78299B(x86::thread_state* ts, x86::memory_view* mv) {
	mov(&ts->ecx, 0x8AD69C);
	goto sub_6F6B35;
}

void sub_7829A5(x86::thread_state* ts, x86::memory_view* mv) {
	mov(mv, x86::mem(0x8AD74C, 4), 0x7A0358);
	retn(mv, &ts->esp);
}

void sub_7829B0(x86::thread_state* ts, x86::memory_view* mv) {
	mov(mv, x86::mem(0x8AD7B0, 4), 0x7A0358);
	retn(mv, &ts->esp);
}

void sub_7829BB(x86::thread_state* ts, x86::memory_view* mv) {
	mov(mv, x86::mem(0x8AD7D8, 4), 0x7A0358);
	retn(mv, &ts->esp);
}

void sub_7829C6(x86::thread_state* ts, x86::memory_view* mv) {
	mov(mv, x86::mem(0x8AD710, 4), 0x7A0358);
	retn(mv, &ts->esp);
}

void sub_7829D1(x86::thread_state* ts, x86::memory_view* mv) {
	mov(mv, x86::mem(0x8AD800, 4), 0x7A0358);
	retn(mv, &ts->esp);
}

void sub_7829DC(x86::thread_state* ts, x86::memory_view* mv) {
	mov(mv, x86::mem(0x8AD760, 4), 0x7A0358);
	retn(mv, &ts->esp);
}

void sub_7829E7(x86::thread_state* ts, x86::memory_view* mv) {
	mov(mv, x86::mem(0x8AD850, 4), 0x7A0358);
	retn(mv, &ts->esp);
}

void sub_7829F2(x86::thread_state* ts, x86::memory_view* mv) {
	mov(mv, x86::mem(0x8AD724, 4), 0x7A0358);
	retn(mv, &ts->esp);
}

void sub_7829FD(x86::thread_state* ts, x86::memory_view* mv) {
	mov(mv, x86::mem(0x8AD83C, 4), 0x7A0358);
	retn(mv, &ts->esp);
}

void sub_782A08(x86::thread_state* ts, x86::memory_view* mv) {
	mov(mv, x86::mem(0x8AD788, 4), 0x7A0358);
	retn(mv, &ts->esp);
}

void sub_782A13(x86::thread_state* ts, x86::memory_view* mv) {
	mov(mv, x86::mem(0x8AD814, 4), 0x7A0358);
	retn(mv, &ts->esp);
}

void sub_782A1E(x86::thread_state* ts, x86::memory_view* mv) {
	mov(mv, x86::mem(0x8AD8B4, 4), 0x7A0358);
	retn(mv, &ts->esp);
}

void sub_782A29(x86::thread_state* ts, x86::memory_view* mv) {
	mov(mv, x86::mem(0x8AD904, 4), 0x7A0358);
	retn(mv, &ts->esp);
}

void sub_782A34(x86::thread_state* ts, x86::memory_view* mv) {
	mov(mv, x86::mem(0x8AD878, 4), 0x7A0358);
	retn(mv, &ts->esp);
}

void sub_782A3F(x86::thread_state* ts, x86::memory_view* mv) {
	mov(mv, x86::mem(0x8AD864, 4), 0x7A0358);
	retn(mv, &ts->esp);
}

void sub_782A4A(x86::thread_state* ts, x86::memory_view* mv) {
	mov(mv, x86::mem(0x8AD8C8, 4), 0x7A0358);
	retn(mv, &ts->esp);
}

void sub_782A55(x86::thread_state* ts, x86::memory_view* mv) {
	mov(mv, x86::mem(0x8AD738, 4), 0x7A0358);
	retn(mv, &ts->esp);
}

void sub_782A60(x86::thread_state* ts, x86::memory_view* mv) {
	mov(mv, x86::mem(0x8AD828, 4), 0x7A0358);
	retn(mv, &ts->esp);
}

void sub_782A6B(x86::thread_state* ts, x86::memory_view* mv) {
	mov(mv, x86::mem(0x8AD774, 4), 0x7A0358);
	retn(mv, &ts->esp);
}

void sub_782A76(x86::thread_state* ts, x86::memory_view* mv) {
	mov(mv, x86::mem(0x8AD8A0, 4), 0x7A0358);
	retn(mv, &ts->esp);
}

void sub_782A81(x86::thread_state* ts, x86::memory_view* mv) {
	mov(mv, x86::mem(0x8AD8DC, 4), 0x7A0358);
	retn(mv, &ts->esp);
}

void sub_782A8C(x86::thread_state* ts, x86::memory_view* mv) {
	mov(mv, x86::mem(0x8AD8F0, 4), 0x7A0358);
	retn(mv, &ts->esp);
}

void sub_782A97(x86::thread_state* ts, x86::memory_view* mv) {
	mov(mv, x86::mem(0x8AD7C4, 4), 0x7A0358);
	retn(mv, &ts->esp);
}

void sub_782AA2(x86::thread_state* ts, x86::memory_view* mv) {
	mov(mv, x86::mem(0x8AD88C, 4), 0x7A0358);
	retn(mv, &ts->esp);
}

void sub_782AAD(x86::thread_state* ts, x86::memory_view* mv) {
	mov(mv, x86::mem(0x8AD79C, 4), 0x7A0358);
	retn(mv, &ts->esp);
}

void sub_782AB8(x86::thread_state* ts, x86::memory_view* mv) {
	mov(mv, x86::mem(0x8AD7EC, 4), 0x7A0358);
	retn(mv, &ts->esp);
}

void sub_782AC3(x86::thread_state* ts, x86::memory_view* mv) {
	mov(mv, x86::mem(0x8161E8, 4), 0x7C3508);
	retn(mv, &ts->esp);
}

void sub_782ACE(x86::thread_state* ts, x86::memory_view* mv) {
	mov(mv, x86::mem(0x8161F8, 4), 0x786DBC);
	retn(mv, &ts->esp);
}

} // namespace game 
