cmake_minimum_required(VERSION 3.1...3.16)
project(LuaDebugInterpreter VERSION 1.0 LANGUAGES CXX)

include(FindLua)

find_package(lua REQUIRED)
find_package(Catch2 CONFIG REQUIRED)

# Adding something we can run - Output name matches target name

add_executable(LuaDebugInterpreter src/interpreter.cpp)


target_link_libraries(LuaDebugInterpreter PRIVATE Catch2::Catch2)
target_link_libraries(LuaDebugInterpreter PRIVATE ${LUA_LIBRARIES})
target_include_directories(LuaDebugInterpreter PRIVATE ${LUA_INCLUDE_DIR})