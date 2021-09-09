#include <memory>

#include "game/segments/text.hpp"
#include "game/segments/data.hpp"
#include "game/segments/rdata.hpp"
#include "game/segments/seg4.hpp"
#include "game/segments/seg5.hpp"
#include "x86/memory_view.hpp"
#include "x86/thread_state.hpp"

namespace game {
extern void start(x86::thread_state* ts, x86::memory_view* mv);
}

int main(int argc, char** argv) {
    auto thread_state = std::make_unique<x86::thread_state>();
    auto memory_view = std::make_unique<x86::memory_view>();

    // map in segments
    {
        // The text segment is currently necessary as the additional state associated
        // with functions (jump tables, etc) are currently not captured. It'd be great
        // to get rid of this at some point!
        namespace text = game::segments::text;
        memory_view->map(".text", text::base_address, text::data.size());
        memory_view->write(text::base_address, text::data);
    }
    {
        namespace data = game::segments::data;
        memory_view->map(".data", data::base_address, data::data.size());
        memory_view->write(data::base_address, data::data);
    }
    {
        namespace rdata = game::segments::rdata;
        memory_view->map(".rdata", rdata::base_address, rdata::data.size());
        memory_view->write(rdata::base_address, rdata::data);
    }
    {
        namespace seg4 = game::segments::seg4;
        memory_view->map(".seg4", seg4::base_address, seg4::data.size());
        memory_view->write(seg4::base_address, seg4::data);
    }
    {
        namespace seg5 = game::segments::seg5;
        memory_view->map(".seg5", seg5::base_address, seg5::data.size());
        memory_view->write(seg5::base_address, seg5::data);
    }

    game::start(thread_state.get(), memory_view.get());
}