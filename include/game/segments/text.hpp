// clang-format off
#pragma once

#include <array>
#include "x86/defs.hpp"

namespace game::segments::text {

extern x86::ptr base_address;
extern std::array<uint8_t, 0x382000> data;

} // namespace game
