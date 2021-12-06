#include <iostream>

extern "C"
{
#include "lua.h"
#include "lauxlib.h"
#include "lualib.h"
}

#include "cpp_tolua/lua_data.h"
#include "cpp_tolua/lua_map.h"

using namespace std;

int tolua_lua_interface_open(lua_State* tolua_S);
void handleError(lua_State* ptrLS, int status);

void TestLuaMapIntInt()
{
	cout << "[cpp]TestLuaMapIntInt" << endl;

	lua_State* ptrLS = lua_open();
	luaopen_base(ptrLS);
	tolua_lua_interface_open(ptrLS);
	int status = luaL_dofile(ptrLS, "/home/pan/clion/cpp_tolua++_v2/lua/lua_map.lua");
	handleError(ptrLS, status);

	map<int, int> m;
	m[1] = 111;
	m[3] = 333;
	m[5] = 555;

	lua_getglobal(ptrLS, "TestLuaMapIntInt");
	lua_pushlightuserdata(ptrLS, &m);
	status = lua_pcall(ptrLS, 1, 0, 0);
	handleError(ptrLS, status);

	lua_close(ptrLS);

	cout << "[cpp]脚本调用完成,size:" << m.size() << endl;
	for (map<int, int>::iterator it = m.begin(); it != m.end(); ++it)
	{
		cout << "[cpp]" << it->first << "=" << it->second << endl;
	}
}

void TestLuaMapIntLuaData()
{
	cout << "[cpp]TestLuaMapIntLuaData" << endl;

	lua_State* ptrLS = lua_open();
	luaopen_base(ptrLS);
	tolua_lua_interface_open(ptrLS);
	int status = luaL_dofile(ptrLS, "/home/pan/clion/cpp_tolua++_v2/lua/lua_map.lua");
	handleError(ptrLS, status);

	map<int, LuaData> m;
	m[1] = LuaData(111, "1a");
	m[3] = LuaData(333, "3a");
	m[5] = LuaData(555, "5a");

	lua_getglobal(ptrLS, "TestLuaMapIntLuaData");
	lua_pushlightuserdata(ptrLS, &m);
	status = lua_pcall(ptrLS, 1, 0, 0);
	handleError(ptrLS, status);

	lua_close(ptrLS);

	cout << "[cpp]脚本调用完成,size:" << m.size() << endl;
	for (map<int, LuaData>::iterator it = m.begin(); it != m.end(); ++it)
	{
		cout << "[cpp]" << it->first << "=" << it->second.m_i << "_" << it->second.m_s << endl;
	}
}

void TestLuaMap()
{
	TestLuaMapIntInt();
//	TestLuaMapIntLuaData();
}
