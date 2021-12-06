#include <iostream>
#include <unistd.h>

extern "C"
{
#include "lua.h"
#include "lauxlib.h"
#include "lualib.h"
}

using namespace std;

extern void TestLuaVector();
extern void TestLuaMap();
extern void TestLuaSet();
extern void TestLuaData();

int main()
{
	char pwd[255] = {0};
	getcwd(pwd, 255);
	cout << "主函数 开始" << pwd << endl;

//	TestLuaVector();
//	TestLuaMap();
	TestLuaSet();
//	TestLuaData();

	cout << "主函数 结束" << endl;

	return 0;
}

void handleError(lua_State* ptrLS, int status)
{
	if (status == 0)
		return;
	const char* msg = lua_tostring(ptrLS, -1);
	lua_pop(ptrLS, 1);
	cout << "运行报错,错误号:" << status << ",内容:" << msg << endl;
}
