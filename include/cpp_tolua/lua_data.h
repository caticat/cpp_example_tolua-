#pragma once

#include <string>
#include <vector>

using std::string;
using std::vector;

struct LuaDataP
{
public:
	int m_i = 0;
	string m_s = "";
	vector<int> m_vec;
};

class LuaData
{
public:
	LuaData() {}
	LuaData(int i, const string& s) : m_i(i), m_s(s) {}
//	LuaData(const LuaData& ld) { m_i = ld.m_i; m_s = ld.m_s; }
	~LuaData() {}
	bool operator<(const LuaData& data) const;
	string toString() const;
public:
	int m_i = 0;
	string m_s = "";
	vector<int> m_vec;
	LuaDataP m_p;
};

extern LuaData* ToLuaData(void* p);
