#include "cpp_tolua/lua_data.h"
#include "cpp_tolua/lua_vector.h"
#include "cpp_tolua/lua_map.h"
#include "cpp_tolua/lua_set.h"

LuaData* ToLuaData(void* p)
{
	return (LuaData*)p;
}

lua_vector<int>* ToLuaVectorInt(void* p)
{
	return (lua_vector<int>*)p;
}

lua_vector<LuaData>* ToLuaVectorLuaData(void* p)
{
	return (lua_vector<LuaData>*)p;
}

lua_map<int, int>* ToLuaMapIntInt(void* p)
{
	return (lua_map<int, int>*)p;
}

lua_map<int, LuaData>* ToLuaMapIntLuaData(void* p)
{
	return (lua_map<int, LuaData>*)p;
}

lua_set<int>* ToLuaSetInt(void* p)
{
	return (lua_set<int>*)p;
}

lua_set<LuaData>* ToLuaSetLuaData(void* p)
{
	return (lua_set<LuaData>*)p;
}
