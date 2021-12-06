#pragma once

// stl数组封装

#include <vector>
#include <string>

#include "lua_data.h"

using std::vector;
using std::string;

template<class T>
class lua_vector : public vector<T>
{
public:
	T& get(int index)
	{
		return (*this)[index];
	}
};

extern lua_vector<int>* ToLuaVectorInt(void* p);
extern lua_vector<LuaData>* ToLuaVectorLuaData(void* p);
