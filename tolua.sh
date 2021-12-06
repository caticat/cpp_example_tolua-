#!/bin/bash

# 生成cpp代码

tolua++.exe -o src/lua_interface.cpp pkg/lua_interface.pkg

#arrPkgName=(
#  "lua_vector"
#)
#
#pathPkg="pkg"
#pathSrc="src"
#
#for pkgName in ${arrPkgName[@]}; do
#  tolua++.exe -o "$pathSrc/$pkgName.cpp" "$pathPkg/$pkgName.pkg"
#done
