#pragma once

#include <map>

using std::map;
using std::iterator;

template<class K, class V>
class lua_map : public map<K, V>
{
public:
	V& get(K k)
	{
		return (*this)[k];
	}

	typename map<K, V>::iterator lua_begin()
	{
		return this->begin();
	}

	bool lua_end(typename map<K, V>::iterator it)
	{
		return (it == this->end());
	}

	typename map<K, V>::iterator lua_next(typename map<K, V>::iterator it)
	{
		return (++it);
	}

	const K& lua_first(typename map<K, V>::iterator it)
	{
		return it->first;
	}

	V& lua_second(typename map<K, V>::iterator it)
	{
		return it->second;
	}
};

extern lua_map<int, int>* ToLuaMapIntInt(void* p);
extern lua_map<int, LuaData>* ToLuaMapIntLuaData(void* p);