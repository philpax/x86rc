// clang-format off
#pragma once

#include <array>
#include "x86/defs.hpp"

namespace game::segments::seg4 {

extern x86::ptr base_address;
extern std::array<uint8_t, 0x3B000> data;

} // namespace game
