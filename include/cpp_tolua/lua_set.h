#pragma once

#include <set>

using std::set;

template <class T>
class lua_set : public set<T>
{
public:
	bool has(T t) const
	{
		return (this->find(t) != this->end());
	}

	typename set<T>::iterator lua_begin()
	{
		return this->begin();
	}

	bool lua_end(typename set<T>::iterator it)
	{
		return (it == this->end());
	}

	typename set<T>::iterator lua_next(typename set<T>::iterator it)
	{
		return (++it);
	}

	const T& lua_value(typename set<T>::iterator it)
	{
		return (*it);
	}
};

extern lua_set<int>* ToLuaSetInt(void* p);
extern lua_set<LuaData>* ToLuaSetLuaData(void* p);