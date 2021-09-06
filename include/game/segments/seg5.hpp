// clang-format off
#pragma once

#include <array>
#include "x86/defs.hpp"

namespace game::segments::seg5 {

extern x86::ptr base_address;
extern std::array<uint8_t, 0x2000> data;

} // namespace game
