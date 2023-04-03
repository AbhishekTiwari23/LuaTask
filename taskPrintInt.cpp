#include <iostream>

// include Lua header
extern "C" {
    #include <lua.h>
    #include <lualib.h>
    #include <lauxlib.h>
}

/*
    ----------------------------------
        Task 1 - Create Lua object in C++. Print “[your name] says hello” from within Lua.
    ----------------------------------
*/

int printName(lua_State* L) {
    std::cout << "Abhishek says hello!" << std::endl;
    std::cout<<std::endl;
    return 0;
}

/*
    ----------------------------------
        Task 2 - Change value of an int variable in Lua and print it out in C++
    ----------------------------------
*/


static int PrintLuatoCpp(lua_State* L){
    const int num = (int)lua_tonumber(L,1); // get first param from stack
    const char* str = lua_tostring(L,2); // get second param from stack
    std::cout<<"Hello from Cpp"<<std::endl;
    std::cout << "num = " << num << ", str = " << str << std::endl;
    std::cout<<std::endl;
    return 0; // how many params we're passing to Lua
}





int main() {

    lua_State* L = luaL_newstate(); // create Lua state
    luaL_openlibs(L); // Give Lua access to basic library

    // register printName function with Lua
    lua_pushcfunction(L, printName);
    lua_setglobal(L, "printName");

    // run Lua code that calls printName
    luaL_dostring(L, "printName()");

    lua_register(L, "PrintLuatoCpp", PrintLuatoCpp); // register our C++ function with Lua
    luaL_dofile(L, "taskPrintInt.lua"); // loads the Lua script

    /*
    ----------------------------------
        Task 3 - Pass an int variable to Lua and print out the value in Lua
    ----------------------------------
*/


    // *** call Lua function from C++ ***
    lua_getglobal(L, "PrintCpptoLua"); // find the Lua function
    lua_pushnumber(L, 73); // push number as first param
    lua_pushstring(L, "From C++ to Lua"); // push string as second param
    lua_pcall(L, 2, 0, 0); // call the function passing 2 params
    lua_close(L);
    return 0;
}
