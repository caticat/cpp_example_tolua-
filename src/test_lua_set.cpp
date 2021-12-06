#include <iostream>

extern "C"
{
#include "lua.h"
#include "lauxlib.h"
#include "lualib.h"
}

#include "cpp_tolua/lua_data.h"
#include "cpp_tolua/lua_set.h"

using namespace std;

int tolua_lua_interface_open(lua_State* tolua_S);
void handleError(lua_State* ptrLS, int status);

void TestLuaSetInt()
{
	cout << "[cpp]TestLuaSetInt" << endl;

	lua_State* ptrLS = lua_open();
	luaopen_base(ptrLS);
	tolua_lua_interface_open(ptrLS);
	int status = luaL_dofile(ptrLS, "/home/pan/clion/cpp_tolua++_v2/lua/lua_set.lua");
	handleError(ptrLS, status);

	set<int> s;
	s.insert(1);
	s.insert(3);
	s.insert(5);

	lua_getglobal(ptrLS, "TestLuaSetInt");
	lua_pushlightuserdata(ptrLS, &s);
	status = lua_pcall(ptrLS, 1, 0, 0);
	handleError(ptrLS, status);

	lua_close(ptrLS);

	cout << "[cpp]脚本调用完成,size:" << s.size() << endl;
	for (set<int>::iterator it = s.begin(); it != s.end(); ++it)
	{
		cout << "[cpp]" << *it << endl;
	}
}

void TestLuaSetLuaData()
{
	cout << "[cpp]TestLuaSetLuaData" << endl;

	lua_State* ptrLS = lua_open();
	luaopen_base(ptrLS);
	tolua_lua_interface_open(ptrLS);
	int status = luaL_dofile(ptrLS, "/home/pan/clion/cpp_tolua++_v2/lua/lua_set.lua");
	handleError(ptrLS, status);

	set<LuaData> s;
	s.insert(LuaData(1, "aaa"));
	s.insert(LuaData(3, "bbb"));
	s.insert(LuaData(5, "ccc"));

	lua_getglobal(ptrLS, "TestLuaSetLuaData");
	lua_pushlightuserdata(ptrLS, &s);
	status = lua_pcall(ptrLS, 1, 0, 0);
	handleError(ptrLS, status);

	lua_close(ptrLS);

	cout << "[cpp]脚本调用完成,size:" << s.size() << endl;
	for (set<LuaData>::iterator it = s.begin(); it != s.end(); ++it)
	{
		cout << "[cpp]" << it->toString() << endl;
	}
}

void TestLuaSet()
{
	TestLuaSetInt();
//	TestLuaSetLuaData();
}
