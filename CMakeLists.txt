cmake_minimum_required(VERSION 3.5)

project(cpp_tolua)

set(CMAKE_CXX_COMPILER clang++)

add_executable(${PROJECT_NAME}
        src/main.cpp
        src/lua_data.cpp
        src/lua_type.cpp
        src/lua_interface.cpp
        src/test_lua_vector.cpp
        src/test_lua_map.cpp
        src/test_lua_set.cpp
        src/test_lua_data.cpp
        )

target_include_directories(${PROJECT_NAME}
        PRIVATE
        ${PROJECT_SOURCE_DIR}/include
        /home/pan/gitlab/phoenix/Phoenix/Depend/Linux/include/lua-5.1.4/include
        /home/pan/gitlab/phoenix/Phoenix/Depend/Linux/include/tolua++-1.0.93/include
        )

target_link_directories(${PROJECT_NAME}
        PRIVATE
        /home/pan/lib
        )

target_link_libraries(${PROJECT_NAME}
        PRIVATE
        lua
        tolua++
        )
