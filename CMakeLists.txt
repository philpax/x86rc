# project setup
cmake_minimum_required(VERSION 3.9)
project(u2rc LANGUAGES CXX)

# global properties
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED on)
set_property(GLOBAL PROPERTY USE_FOLDERS ON)

# compiler-specific settings
if(MSVC)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /MP")
endif()

# dependencies
add_subdirectory(external/spdlog)

# define our source files
file(GLOB_RECURSE U2RC_HEADERS CONFIGURE_DEPENDS "include/*.hpp")
file(GLOB_RECURSE U2RC_SOURCES CONFIGURE_DEPENDS "src/*.cpp")

# configure target contents
add_executable(u2rc ${U2RC_SOURCES} ${U2RC_HEADERS})
set_property(TARGET u2rc PROPERTY VS_DEBUGGER_WORKING_DIRECTORY "${CMAKE_SOURCE_DIR}/release")
set_target_properties(u2rc PROPERTIES OUTPUT_NAME "u2rc")
target_include_directories(u2rc PRIVATE "include")
target_link_libraries(u2rc PRIVATE spdlog::spdlog)