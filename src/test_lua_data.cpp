#include <iostream>

extern "C"
{
#include "lua.h"
#include "lauxlib.h"
#include "lualib.h"
}

#include "cpp_tolua/lua_data.h"

using namespace std;

int tolua_lua_interface_open(lua_State* tolua_S);
void handleError(lua_State* ptrLS, int status);

void TestLuaData()
{
	cout << "[cpp]TestLuaData" << endl;

	lua_State* ptrLS = lua_open();
	luaopen_base(ptrLS);
	tolua_lua_interface_open(ptrLS);
	int status = luaL_dofile(ptrLS, "/home/pan/clion/cpp_tolua++_v2/lua/lua_data.lua");
	handleError(ptrLS, status);

	LuaData d;
	d.m_i = 1;
	d.m_s = "aaa";
	d.m_vec.push_back(1);
	d.m_vec.push_back(3);
	d.m_vec.push_back(5);
	LuaDataP& p = d.m_p;
	p.m_i = 11;
	p.m_s = "aaaaaa";
	p.m_vec.push_back(11);
	p.m_vec.push_back(33);
	p.m_vec.push_back(55);

	lua_getglobal(ptrLS, "TestLuaData");
	lua_pushlightuserdata(ptrLS, &d);
	status = lua_pcall(ptrLS, 1, 0, 0);
	handleError(ptrLS, status);

	lua_close(ptrLS);

	cout << "[cpp]脚本调用完成" << endl;
	cout << "[cpp]" << d.toString() << endl;
}