#include <memory>

#include "app/segments.hpp"
#include "x86/memory_view.hpp"
#include "x86/thread_state.hpp"

namespace app {
extern void start(x86::thread_state* ts, x86::memory_view* mv);
}

int main(int argc, char** argv) {
    auto thread_state = std::make_unique<x86::thread_state>();
    auto memory_view = std::make_unique<x86::memory_view>();

    for (auto const& [name, base_address, data] : app::segments::segments) {
        memory_view->map(name, base_address, data.size());
        memory_view->write(base_address, data);
    }

    app::start(thread_state.get(), memory_view.get());
}