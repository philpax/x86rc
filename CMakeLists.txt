# project setup
cmake_minimum_required(VERSION 3.9)
project(x86rc LANGUAGES CXX)

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
file(GLOB_RECURSE X86RC_HEADERS CONFIGURE_DEPENDS "include/*.hpp")
file(GLOB_RECURSE X86RC_SOURCES CONFIGURE_DEPENDS "src/*.cpp")

# configure target contents
add_executable(x86rc ${X86RC_SOURCES} ${X86RC_HEADERS})
set_property(TARGET x86rc PROPERTY VS_DEBUGGER_WORKING_DIRECTORY "${CMAKE_SOURCE_DIR}/release")
set_target_properties(x86rc PROPERTIES OUTPUT_NAME "x86rc")
target_include_directories(x86rc PRIVATE "include")
target_link_libraries(x86rc PRIVATE spdlog::spdlog)