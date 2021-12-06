#include <sstream>
#include <iostream>

#include "cpp_tolua/lua_data.h"

using namespace std;

bool LuaData::operator<(const LuaData& data) const
{
	if (m_i < data.m_i)
	{
		return true;
	}
	if (m_i == data.m_i)
	{
		if (m_s < data.m_s)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return false;
}

string LuaData::toString() const
{
	stringstream ss;
	ss << "i:" << m_i << ",s:" << m_s << ",vecsize:" << m_vec.size() << "[";
	for (vector<int>::const_iterator it = m_vec.begin(); it != m_vec.end(); ++it)
	{
		ss << (*it) << ",";
	}
	ss << "],p.i:" << m_p.m_i << ",p.s" << m_p.m_s << ",pvecsize:" << m_p.m_vec.size() << "[";
	for (vector<int>::const_iterator it = m_p.m_vec.begin(); it != m_p.m_vec.end(); ++it)
	{
		ss << (*it) << ",";
	}
	ss << "]";
	return ss.str();
}
