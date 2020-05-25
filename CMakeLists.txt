cmake_minimum_required(VERSION 3.1...3.16)
project(LuaDebugInterpreter VERSION 1.0 LANGUAGES CXX)

# Adding something we can run - Output name matches target name
add_executable(LuaDebugInterpreter src/interpreter.cpp)