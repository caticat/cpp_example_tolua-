#include <iostream>

extern "C"
{
#include "lua.h"
#include "lauxlib.h"
#include "lualib.h"
}

#include "cpp_tolua/lua_vector.h"

using namespace std;

int tolua_lua_interface_open(lua_State* tolua_S);
void handleError(lua_State* ptrLS, int status);

void TestLuaVectorInt()
{
	cout << "[cpp]TestLuaVectorInt" << endl;

	lua_State* ptrLS = lua_open();
	luaopen_base(ptrLS);
	tolua_lua_interface_open(ptrLS);
	int status = luaL_dofile(ptrLS, "/home/pan/clion/cpp_tolua++_v2/lua/lua_vector.lua");
	handleError(ptrLS, status);

	vector<int> v;
	v.push_back(1);
	v.push_back(3);
	v.push_back(5);

	lua_getglobal(ptrLS, "TestLuaVectorInt");
	lua_pushlightuserdata(ptrLS, &v);
	status = lua_pcall(ptrLS, 1, 0, 0);
	handleError(ptrLS, status);

	lua_close(ptrLS);

	cout << "[cpp]脚本调用完成,size:" << v.size() << endl;
	for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
	{
		cout << "[cpp]val:" << (*it) << endl;
	}
}

void TestLuaVectorLuaData()
{
	cout << "[cpp]TestLuaVectorLuaData" << endl;

	lua_State* ptrLS = lua_open();
	luaopen_base(ptrLS);
	tolua_lua_interface_open(ptrLS);
	int status = luaL_dofile(ptrLS, "/home/pan/clion/cpp_tolua++_v2/lua/lua_vector.lua");
	handleError(ptrLS, status);

	vector<LuaData> v;
	v.push_back(LuaData(1, "aaa"));
	v.push_back(LuaData(2, "bbb"));
	v.push_back(LuaData(3, "ccc"));

	lua_getglobal(ptrLS, "TestLuaVectorLuaData");
	lua_pushlightuserdata(ptrLS, &v);
	status = lua_pcall(ptrLS, 1, 0, 0);
	handleError(ptrLS, status);

	lua_close(ptrLS);

	cout << "[cpp]脚本调用完成,size:" << v.size() << endl;
	for (vector<LuaData>::iterator it = v.begin(); it != v.end(); ++it)
	{
		cout << "[cpp]val,i:" << it->m_i << ",s:" << it->m_s << endl;
	}
}

void TestLuaVector()
{
//	TestLuaVectorInt();
	TestLuaVectorLuaData();
}
