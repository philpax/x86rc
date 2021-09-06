#pragma once

#include "game/stubs/advapi32.hpp"
#include "game/stubs/d3d9.hpp"
#include "game/stubs/ddraw.hpp"
#include "game/stubs/dinput8.hpp"
#include "game/stubs/dsound.hpp"
#include "game/stubs/gdi32.hpp"
#include "game/stubs/kernel32.hpp"
#include "game/stubs/netapi32.hpp"
#include "game/stubs/shell32.hpp"
#include "game/stubs/shfolder.hpp"
#include "game/stubs/tapi32.hpp"
#include "game/stubs/user32.hpp"
#include "game/stubs/winmm.hpp"
#include "game/stubs/ws2_32.hpp"

// temporary stubs to make code compile
namespace game {

GAME_UNIMPLEMENTED_STUB(__SEH_prolog);
GAME_UNIMPLEMENTED_STUB(__alloca_probe);
GAME_UNIMPLEMENTED_STUB(__heap_init);
GAME_UNIMPLEMENTED_STUB(sub_762018);
GAME_UNIMPLEMENTED_STUB(_fast_error_exit);
GAME_UNIMPLEMENTED_STUB(sub_761D83);
GAME_UNIMPLEMENTED_STUB(__ioinit);
GAME_UNIMPLEMENTED_STUB(__amsg_exit);
GAME_UNIMPLEMENTED_STUB(___crtGetEnvironmentStringsA);
GAME_UNIMPLEMENTED_STUB(sub_7619C1);
GAME_UNIMPLEMENTED_STUB(__setenvp);
GAME_UNIMPLEMENTED_STUB(sub_75D45B);
GAME_UNIMPLEMENTED_STUB(sub_580E00);
GAME_UNIMPLEMENTED_STUB(_exit);
GAME_UNIMPLEMENTED_STUB(__cexit);
GAME_UNIMPLEMENTED_STUB(__XcptFilter);
GAME_UNIMPLEMENTED_STUB(__exit);
GAME_UNIMPLEMENTED_STUB(__c_exit);
GAME_UNIMPLEMENTED_STUB(__SEH_epilog);

} // namespace game