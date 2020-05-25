#include <iostream>
#include <string>
#include <lua.hpp>

bool interpret_string(const std::string& str)
{
    auto L = luaL_newstate();
    luaL_openlibs(L);
    auto error = luaL_dostring(L, str.c_str());
    if (error) {
        auto msg = lua_tostring(L, -1);
        std::cout << "Lua error: " << msg;
    }

    lua_close(L);
    return !error;
}

int main()  
{
    auto result = interpret_string("print(1)");
    return 0;
}