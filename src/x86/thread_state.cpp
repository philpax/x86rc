#include "x86/thread_state.hpp"

namespace x86 {

thread_state::thread_state() {
    this->eax = 0;
    this->ebx = 0;
    this->ecx = 0;
    this->edx = 0;
    this->esi = 0;
    this->edi = 0;
    this->ebp = 0;
    this->esp = 0;

    this->eflags = x86::eflags_reg();

    this->cs = 0;
    this->ds = 0;
    this->es = 0;
    this->fs = 0;
    this->gs = 0;
    this->ss = 0;

    std::fill(std::begin(this->mm), std::end(this->mm), x86::mm_reg());
    std::fill(std::begin(this->xmm), std::end(this->xmm), x86::xmm_reg());
}

}