/*
** Lua binding: lua_interface
** Generated automatically by tolua++-1.0.92 on Mon Dec  6 13:54:54 2021.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_lua_interface_open (lua_State* tolua_S);

#include "cpp_tolua/lua_data.h"
#include "cpp_tolua/lua_data.h"
#include "cpp_tolua/lua_vector.h"
#include "cpp_tolua/lua_data.h"
#include "cpp_tolua/lua_map.h"
#include "cpp_tolua/lua_data.h"
#include "cpp_tolua/lua_set.h"

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_LuaData (lua_State* tolua_S)
{
 LuaData* self = (LuaData*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_map_int_LuaData___iterator (lua_State* tolua_S)
{
 map<int,LuaData>::iterator* self = (map<int,LuaData>::iterator*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_set_int___iterator (lua_State* tolua_S)
{
 set<int>::iterator* self = (set<int>::iterator*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_set_LuaData___iterator (lua_State* tolua_S)
{
 set<LuaData>::iterator* self = (set<LuaData>::iterator*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_map_int_int___iterator (lua_State* tolua_S)
{
 map<int,int>::iterator* self = (map<int,int>::iterator*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"map<int,int>::iterator");
 tolua_usertype(tolua_S,"std::pair<int,LuaData>");
 tolua_usertype(tolua_S,"set<LuaData>::iterator");
 tolua_usertype(tolua_S,"lua_map<int,LuaData>");
 tolua_usertype(tolua_S,"LuaData");
 tolua_usertype(tolua_S,"lua_set<LuaData>");
 tolua_usertype(tolua_S,"lua_vector<int>");
 tolua_usertype(tolua_S,"map");
 tolua_usertype(tolua_S,"set<int>::iterator");
 tolua_usertype(tolua_S,"set");
 tolua_usertype(tolua_S,"lua_set<int>");
 tolua_usertype(tolua_S,"std::pair<int,int>");
 tolua_usertype(tolua_S,"lua_vector<LuaData>");
 tolua_usertype(tolua_S,"vector<int>");
 tolua_usertype(tolua_S,"map<int,LuaData>::iterator");
 tolua_usertype(tolua_S,"LuaDataP");
 tolua_usertype(tolua_S,"lua_map<int,int>");
 tolua_usertype(tolua_S,"vector");
}

/* get function: m_i of class  LuaDataP */
#ifndef TOLUA_DISABLE_tolua_get_LuaDataP_m_i
static int tolua_get_LuaDataP_m_i(lua_State* tolua_S)
{
  LuaDataP* self = (LuaDataP*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'm_i'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->m_i);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: m_i of class  LuaDataP */
#ifndef TOLUA_DISABLE_tolua_set_LuaDataP_m_i
static int tolua_set_LuaDataP_m_i(lua_State* tolua_S)
{
  LuaDataP* self = (LuaDataP*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'm_i'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->m_i = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: m_s of class  LuaDataP */
#ifndef TOLUA_DISABLE_tolua_get_LuaDataP_m_s
static int tolua_get_LuaDataP_m_s(lua_State* tolua_S)
{
  LuaDataP* self = (LuaDataP*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'm_s'",NULL);
#endif
  tolua_pushcppstring(tolua_S,(const char*)self->m_s);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: m_s of class  LuaDataP */
#ifndef TOLUA_DISABLE_tolua_set_LuaDataP_m_s
static int tolua_set_LuaDataP_m_s(lua_State* tolua_S)
{
  LuaDataP* self = (LuaDataP*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'm_s'",NULL);
  if (!tolua_iscppstring(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->m_s = ((string)  tolua_tocppstring(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: m_vec of class  LuaDataP */
#ifndef TOLUA_DISABLE_tolua_get_LuaDataP_m_vec
static int tolua_get_LuaDataP_m_vec(lua_State* tolua_S)
{
  LuaDataP* self = (LuaDataP*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'm_vec'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->m_vec,"vector<int>");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: m_vec of class  LuaDataP */
#ifndef TOLUA_DISABLE_tolua_set_LuaDataP_m_vec
static int tolua_set_LuaDataP_m_vec(lua_State* tolua_S)
{
  LuaDataP* self = (LuaDataP*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'm_vec'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"vector<int>",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->m_vec = *((vector<int>*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  LuaData */
#ifndef TOLUA_DISABLE_tolua_lua_interface_LuaData_new00
static int tolua_lua_interface_LuaData_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"LuaData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   LuaData* tolua_ret = (LuaData*)  Mtolua_new((LuaData)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"LuaData");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  LuaData */
#ifndef TOLUA_DISABLE_tolua_lua_interface_LuaData_new00_local
static int tolua_lua_interface_LuaData_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"LuaData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   LuaData* tolua_ret = (LuaData*)  Mtolua_new((LuaData)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"LuaData");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  LuaData */
#ifndef TOLUA_DISABLE_tolua_lua_interface_LuaData_delete00
static int tolua_lua_interface_LuaData_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"LuaData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  LuaData* self = (LuaData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: toString of class  LuaData */
#ifndef TOLUA_DISABLE_tolua_lua_interface_LuaData_toString00
static int tolua_lua_interface_LuaData_toString00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const LuaData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const LuaData* self = (const LuaData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'toString'", NULL);
#endif
  {
   string tolua_ret = (string)  self->toString();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'toString'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: m_i of class  LuaData */
#ifndef TOLUA_DISABLE_tolua_get_LuaData_m_i
static int tolua_get_LuaData_m_i(lua_State* tolua_S)
{
  LuaData* self = (LuaData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'm_i'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->m_i);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: m_i of class  LuaData */
#ifndef TOLUA_DISABLE_tolua_set_LuaData_m_i
static int tolua_set_LuaData_m_i(lua_State* tolua_S)
{
  LuaData* self = (LuaData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'm_i'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->m_i = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: m_s of class  LuaData */
#ifndef TOLUA_DISABLE_tolua_get_LuaData_m_s
static int tolua_get_LuaData_m_s(lua_State* tolua_S)
{
  LuaData* self = (LuaData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'm_s'",NULL);
#endif
  tolua_pushcppstring(tolua_S,(const char*)self->m_s);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: m_s of class  LuaData */
#ifndef TOLUA_DISABLE_tolua_set_LuaData_m_s
static int tolua_set_LuaData_m_s(lua_State* tolua_S)
{
  LuaData* self = (LuaData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'm_s'",NULL);
  if (!tolua_iscppstring(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->m_s = ((string)  tolua_tocppstring(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: m_vec of class  LuaData */
#ifndef TOLUA_DISABLE_tolua_get_LuaData_m_vec
static int tolua_get_LuaData_m_vec(lua_State* tolua_S)
{
  LuaData* self = (LuaData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'm_vec'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->m_vec,"vector<int>");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: m_vec of class  LuaData */
#ifndef TOLUA_DISABLE_tolua_set_LuaData_m_vec
static int tolua_set_LuaData_m_vec(lua_State* tolua_S)
{
  LuaData* self = (LuaData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'm_vec'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"vector<int>",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->m_vec = *((vector<int>*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: m_p of class  LuaData */
#ifndef TOLUA_DISABLE_tolua_get_LuaData_m_p
static int tolua_get_LuaData_m_p(lua_State* tolua_S)
{
  LuaData* self = (LuaData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'm_p'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->m_p,"LuaDataP");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: m_p of class  LuaData */
#ifndef TOLUA_DISABLE_tolua_set_LuaData_m_p
static int tolua_set_LuaData_m_p(lua_State* tolua_S)
{
  LuaData* self = (LuaData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'm_p'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"LuaDataP",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->m_p = *((LuaDataP*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* function: ToLuaData */
#ifndef TOLUA_DISABLE_tolua_lua_interface_ToLuaData00
static int tolua_lua_interface_ToLuaData00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isuserdata(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  void* p = ((void*)  tolua_touserdata(tolua_S,1,0));
  {
   LuaData* tolua_ret = (LuaData*)  ToLuaData(p);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"LuaData");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ToLuaData'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: get of class  lua_vector<int> */
#ifndef TOLUA_DISABLE_tolua_lua_interface_lua_vector_int__get00
static int tolua_lua_interface_lua_vector_int__get00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"lua_vector<int>",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  lua_vector<int>* self = (lua_vector<int>*)  tolua_tousertype(tolua_S,1,0);
  int index = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'get'", NULL);
#endif
  {
   int tolua_ret = (int)  self->get(index);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'get'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: size of class  lua_vector<int> */
#ifndef TOLUA_DISABLE_tolua_lua_interface_lua_vector_int__size00
static int tolua_lua_interface_lua_vector_int__size00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const lua_vector<int>",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const lua_vector<int>* self = (const lua_vector<int>*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'size'", NULL);
#endif
  {
   int tolua_ret = (int)  self->size();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'size'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: push_back of class  lua_vector<int> */
#ifndef TOLUA_DISABLE_tolua_lua_interface_lua_vector_int__push_back00
static int tolua_lua_interface_lua_vector_int__push_back00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"lua_vector<int>",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  lua_vector<int>* self = (lua_vector<int>*)  tolua_tousertype(tolua_S,1,0);
  const int tolua_var_1 = ((const int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'push_back'", NULL);
#endif
  {
   self->push_back(tolua_var_1);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_var_1);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'push_back'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator&[] of class  lua_vector<int> */
#ifndef TOLUA_DISABLE_tolua_lua_interface_lua_vector_int___seti00
static int tolua_lua_interface_lua_vector_int___seti00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"lua_vector<int>",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  lua_vector<int>* self = (lua_vector<int>*)  tolua_tousertype(tolua_S,1,0);
  int tolua_var_3 = ((int)  tolua_tonumber(tolua_S,2,0));
  int tolua_value = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator&[]'", NULL);
#endif
  self->operator[](tolua_var_3) =  tolua_value;
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.seti'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator[] of class  lua_vector<int> */
#ifndef TOLUA_DISABLE_tolua_lua_interface_lua_vector_int___geti00
static int tolua_lua_interface_lua_vector_int___geti00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"lua_vector<int>",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  lua_vector<int>* self = (lua_vector<int>*)  tolua_tousertype(tolua_S,1,0);
  int tolua_var_2 = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator[]'", NULL);
#endif
  {
   int tolua_ret = (int)  self->operator[](tolua_var_2);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.geti'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: get of class  lua_vector<LuaData> */
#ifndef TOLUA_DISABLE_tolua_lua_interface_lua_vector_LuaData__get00
static int tolua_lua_interface_lua_vector_LuaData__get00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"lua_vector<LuaData>",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  lua_vector<LuaData>* self = (lua_vector<LuaData>*)  tolua_tousertype(tolua_S,1,0);
  int index = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'get'", NULL);
#endif
  {
   LuaData& tolua_ret = (LuaData&)  self->get(index);
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"LuaData");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'get'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: size of class  lua_vector<LuaData> */
#ifndef TOLUA_DISABLE_tolua_lua_interface_lua_vector_LuaData__size00
static int tolua_lua_interface_lua_vector_LuaData__size00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const lua_vector<LuaData>",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const lua_vector<LuaData>* self = (const lua_vector<LuaData>*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'size'", NULL);
#endif
  {
   int tolua_ret = (int)  self->size();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'size'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: push_back of class  lua_vector<LuaData> */
#ifndef TOLUA_DISABLE_tolua_lua_interface_lua_vector_LuaData__push_back00
static int tolua_lua_interface_lua_vector_LuaData__push_back00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"lua_vector<LuaData>",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const LuaData",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  lua_vector<LuaData>* self = (lua_vector<LuaData>*)  tolua_tousertype(tolua_S,1,0);
  const LuaData* tolua_var_4 = ((const LuaData*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'push_back'", NULL);
#endif
  {
   self->push_back(*tolua_var_4);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'push_back'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator&[] of class  lua_vector<LuaData> */
#ifndef TOLUA_DISABLE_tolua_lua_interface_lua_vector_LuaData___seti00
static int tolua_lua_interface_lua_vector_LuaData___seti00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"lua_vector<LuaData>",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"LuaData",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  lua_vector<LuaData>* self = (lua_vector<LuaData>*)  tolua_tousertype(tolua_S,1,0);
  int tolua_var_6 = ((int)  tolua_tonumber(tolua_S,2,0));
  LuaData tolua_value = *((LuaData*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator&[]'", NULL);
#endif
  self->operator[](tolua_var_6) =  tolua_value;
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.seti'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator[] of class  lua_vector<LuaData> */
#ifndef TOLUA_DISABLE_tolua_lua_interface_lua_vector_LuaData___geti00
static int tolua_lua_interface_lua_vector_LuaData___geti00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"lua_vector<LuaData>",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  lua_vector<LuaData>* self = (lua_vector<LuaData>*)  tolua_tousertype(tolua_S,1,0);
  int tolua_var_5 = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator[]'", NULL);
#endif
  {
   LuaData tolua_ret = (LuaData)  self->operator[](tolua_var_5);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((LuaData)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"LuaData");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(LuaData));
     tolua_pushusertype(tolua_S,tolua_obj,"LuaData");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.geti'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: ToLuaVectorInt */
#ifndef TOLUA_DISABLE_tolua_lua_interface_ToLuaVectorInt00
static int tolua_lua_interface_ToLuaVectorInt00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isuserdata(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  void* p = ((void*)  tolua_touserdata(tolua_S,1,0));
  {
   lua_vector<int>* tolua_ret = (lua_vector<int>*)  ToLuaVectorInt(p);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"lua_vector<int>");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ToLuaVectorInt'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: ToLuaVectorLuaData */
#ifndef TOLUA_DISABLE_tolua_lua_interface_ToLuaVectorLuaData00
static int tolua_lua_interface_ToLuaVectorLuaData00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isuserdata(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  void* p = ((void*)  tolua_touserdata(tolua_S,1,0));
  {
   lua_vector<LuaData>* tolua_ret = (lua_vector<LuaData>*)  ToLuaVectorLuaData(p);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"lua_vector<LuaData>");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ToLuaVectorLuaData'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: get of class  lua_map<int,int> */
#ifndef TOLUA_DISABLE_tolua_lua_interface_lua_map_int_int__get00
static int tolua_lua_interface_lua_map_int_int__get00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"lua_map<int,int>",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  lua_map<int,int>* self = (lua_map<int,int>*)  tolua_tousertype(tolua_S,1,0);
  int k = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'get'", NULL);
#endif
  {
   int tolua_ret = (int)  self->get(k);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'get'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: lua_begin of class  lua_map<int,int> */
#ifndef TOLUA_DISABLE_tolua_lua_interface_lua_map_int_int__lua_begin00
static int tolua_lua_interface_lua_map_int_int__lua_begin00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"lua_map<int,int>",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  lua_map<int,int>* self = (lua_map<int,int>*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'lua_begin'", NULL);
#endif
  {
   map<int,int>::iterator tolua_ret = (map<int,int>::iterator)  self->lua_begin();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((map<int,int>::iterator)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"map<int,int>::iterator");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(map<int,int>::iterator));
     tolua_pushusertype(tolua_S,tolua_obj,"map<int,int>::iterator");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'lua_begin'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: lua_end of class  lua_map<int,int> */
#ifndef TOLUA_DISABLE_tolua_lua_interface_lua_map_int_int__lua_end00
static int tolua_lua_interface_lua_map_int_int__lua_end00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"lua_map<int,int>",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"map<int,int>::iterator",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  lua_map<int,int>* self = (lua_map<int,int>*)  tolua_tousertype(tolua_S,1,0);
  map<int,int>::iterator tolua_var_7 = *((map<int,int>::iterator*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'lua_end'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->lua_end(tolua_var_7);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'lua_end'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: lua_next of class  lua_map<int,int> */
#ifndef TOLUA_DISABLE_tolua_lua_interface_lua_map_int_int__lua_next00
static int tolua_lua_interface_lua_map_int_int__lua_next00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"lua_map<int,int>",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"map<int,int>::iterator",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  lua_map<int,int>* self = (lua_map<int,int>*)  tolua_tousertype(tolua_S,1,0);
  map<int,int>::iterator tolua_var_8 = *((map<int,int>::iterator*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'lua_next'", NULL);
#endif
  {
   map<int,int>::iterator tolua_ret = (map<int,int>::iterator)  self->lua_next(tolua_var_8);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((map<int,int>::iterator)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"map<int,int>::iterator");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(map<int,int>::iterator));
     tolua_pushusertype(tolua_S,tolua_obj,"map<int,int>::iterator");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'lua_next'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: lua_first of class  lua_map<int,int> */
#ifndef TOLUA_DISABLE_tolua_lua_interface_lua_map_int_int__lua_first00
static int tolua_lua_interface_lua_map_int_int__lua_first00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"lua_map<int,int>",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"map<int,int>::iterator",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  lua_map<int,int>* self = (lua_map<int,int>*)  tolua_tousertype(tolua_S,1,0);
  map<int,int>::iterator tolua_var_9 = *((map<int,int>::iterator*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'lua_first'", NULL);
#endif
  {
   const int tolua_ret = (const int)  self->lua_first(tolua_var_9);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'lua_first'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: lua_second of class  lua_map<int,int> */
#ifndef TOLUA_DISABLE_tolua_lua_interface_lua_map_int_int__lua_second00
static int tolua_lua_interface_lua_map_int_int__lua_second00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"lua_map<int,int>",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"map<int,int>::iterator",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  lua_map<int,int>* self = (lua_map<int,int>*)  tolua_tousertype(tolua_S,1,0);
  map<int,int>::iterator tolua_var_10 = *((map<int,int>::iterator*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'lua_second'", NULL);
#endif
  {
   int tolua_ret = (int)  self->lua_second(tolua_var_10);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'lua_second'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: size of class  lua_map<int,int> */
#ifndef TOLUA_DISABLE_tolua_lua_interface_lua_map_int_int__size00
static int tolua_lua_interface_lua_map_int_int__size00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const lua_map<int,int>",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const lua_map<int,int>* self = (const lua_map<int,int>*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'size'", NULL);
#endif
  {
   int tolua_ret = (int)  self->size();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'size'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator&[] of class  lua_map<int,int> */
#ifndef TOLUA_DISABLE_tolua_lua_interface_lua_map_int_int___seti00
static int tolua_lua_interface_lua_map_int_int___seti00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"lua_map<int,int>",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  lua_map<int,int>* self = (lua_map<int,int>*)  tolua_tousertype(tolua_S,1,0);
  int k = ((int)  tolua_tonumber(tolua_S,2,0));
  int tolua_value = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator&[]'", NULL);
#endif
  self->operator[](k) =  tolua_value;
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.seti'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator[] of class  lua_map<int,int> */
#ifndef TOLUA_DISABLE_tolua_lua_interface_lua_map_int_int___geti00
static int tolua_lua_interface_lua_map_int_int___geti00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"lua_map<int,int>",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  lua_map<int,int>* self = (lua_map<int,int>*)  tolua_tousertype(tolua_S,1,0);
  int k = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator[]'", NULL);
#endif
  {
   int tolua_ret = (int)  self->operator[](k);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.geti'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: insert of class  lua_map<int,int> */
#ifndef TOLUA_DISABLE_tolua_lua_interface_lua_map_int_int__insert00
static int tolua_lua_interface_lua_map_int_int__insert00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"lua_map<int,int>",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"std::pair<int,int>",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  lua_map<int,int>* self = (lua_map<int,int>*)  tolua_tousertype(tolua_S,1,0);
  std::pair<int,int> tolua_var_11 = *((std::pair<int,int>*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'insert'", NULL);
#endif
  {
   self->insert(tolua_var_11);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'insert'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: get of class  lua_map<int,LuaData> */
#ifndef TOLUA_DISABLE_tolua_lua_interface_lua_map_int_LuaData__get00
static int tolua_lua_interface_lua_map_int_LuaData__get00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"lua_map<int,LuaData>",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  lua_map<int,LuaData>* self = (lua_map<int,LuaData>*)  tolua_tousertype(tolua_S,1,0);
  int k = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'get'", NULL);
#endif
  {
   LuaData& tolua_ret = (LuaData&)  self->get(k);
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"LuaData");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'get'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: lua_begin of class  lua_map<int,LuaData> */
#ifndef TOLUA_DISABLE_tolua_lua_interface_lua_map_int_LuaData__lua_begin00
static int tolua_lua_interface_lua_map_int_LuaData__lua_begin00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"lua_map<int,LuaData>",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  lua_map<int,LuaData>* self = (lua_map<int,LuaData>*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'lua_begin'", NULL);
#endif
  {
   map<int,LuaData>::iterator tolua_ret = (map<int,LuaData>::iterator)  self->lua_begin();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((map<int,LuaData>::iterator)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"map<int,LuaData>::iterator");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(map<int,LuaData>::iterator));
     tolua_pushusertype(tolua_S,tolua_obj,"map<int,LuaData>::iterator");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'lua_begin'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: lua_end of class  lua_map<int,LuaData> */
#ifndef TOLUA_DISABLE_tolua_lua_interface_lua_map_int_LuaData__lua_end00
static int tolua_lua_interface_lua_map_int_LuaData__lua_end00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"lua_map<int,LuaData>",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"map<int,LuaData>::iterator",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  lua_map<int,LuaData>* self = (lua_map<int,LuaData>*)  tolua_tousertype(tolua_S,1,0);
  map<int,LuaData>::iterator tolua_var_12 = *((map<int,LuaData>::iterator*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'lua_end'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->lua_end(tolua_var_12);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'lua_end'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: lua_next of class  lua_map<int,LuaData> */
#ifndef TOLUA_DISABLE_tolua_lua_interface_lua_map_int_LuaData__lua_next00
static int tolua_lua_interface_lua_map_int_LuaData__lua_next00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"lua_map<int,LuaData>",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"map<int,LuaData>::iterator",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  lua_map<int,LuaData>* self = (lua_map<int,LuaData>*)  tolua_tousertype(tolua_S,1,0);
  map<int,LuaData>::iterator tolua_var_13 = *((map<int,LuaData>::iterator*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'lua_next'", NULL);
#endif
  {
   map<int,LuaData>::iterator tolua_ret = (map<int,LuaData>::iterator)  self->lua_next(tolua_var_13);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((map<int,LuaData>::iterator)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"map<int,LuaData>::iterator");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(map<int,LuaData>::iterator));
     tolua_pushusertype(tolua_S,tolua_obj,"map<int,LuaData>::iterator");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'lua_next'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: lua_first of class  lua_map<int,LuaData> */
#ifndef TOLUA_DISABLE_tolua_lua_interface_lua_map_int_LuaData__lua_first00
static int tolua_lua_interface_lua_map_int_LuaData__lua_first00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"lua_map<int,LuaData>",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"map<int,LuaData>::iterator",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  lua_map<int,LuaData>* self = (lua_map<int,LuaData>*)  tolua_tousertype(tolua_S,1,0);
  map<int,LuaData>::iterator tolua_var_14 = *((map<int,LuaData>::iterator*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'lua_first'", NULL);
#endif
  {
   const int tolua_ret = (const int)  self->lua_first(tolua_var_14);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'lua_first'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: lua_second of class  lua_map<int,LuaData> */
#ifndef TOLUA_DISABLE_tolua_lua_interface_lua_map_int_LuaData__lua_second00
static int tolua_lua_interface_lua_map_int_LuaData__lua_second00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"lua_map<int,LuaData>",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"map<int,LuaData>::iterator",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  lua_map<int,LuaData>* self = (lua_map<int,LuaData>*)  tolua_tousertype(tolua_S,1,0);
  map<int,LuaData>::iterator tolua_var_15 = *((map<int,LuaData>::iterator*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'lua_second'", NULL);
#endif
  {
   LuaData& tolua_ret = (LuaData&)  self->lua_second(tolua_var_15);
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"LuaData");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'lua_second'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: size of class  lua_map<int,LuaData> */
#ifndef TOLUA_DISABLE_tolua_lua_interface_lua_map_int_LuaData__size00
static int tolua_lua_interface_lua_map_int_LuaData__size00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const lua_map<int,LuaData>",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const lua_map<int,LuaData>* self = (const lua_map<int,LuaData>*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'size'", NULL);
#endif
  {
   int tolua_ret = (int)  self->size();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'size'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator&[] of class  lua_map<int,LuaData> */
#ifndef TOLUA_DISABLE_tolua_lua_interface_lua_map_int_LuaData___seti00
static int tolua_lua_interface_lua_map_int_LuaData___seti00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"lua_map<int,LuaData>",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"LuaData",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  lua_map<int,LuaData>* self = (lua_map<int,LuaData>*)  tolua_tousertype(tolua_S,1,0);
  int k = ((int)  tolua_tonumber(tolua_S,2,0));
  LuaData tolua_value = *((LuaData*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator&[]'", NULL);
#endif
  self->operator[](k) =  tolua_value;
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.seti'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator[] of class  lua_map<int,LuaData> */
#ifndef TOLUA_DISABLE_tolua_lua_interface_lua_map_int_LuaData___geti00
static int tolua_lua_interface_lua_map_int_LuaData___geti00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"lua_map<int,LuaData>",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  lua_map<int,LuaData>* self = (lua_map<int,LuaData>*)  tolua_tousertype(tolua_S,1,0);
  int k = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator[]'", NULL);
#endif
  {
   LuaData tolua_ret = (LuaData)  self->operator[](k);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((LuaData)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"LuaData");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(LuaData));
     tolua_pushusertype(tolua_S,tolua_obj,"LuaData");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.geti'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: insert of class  lua_map<int,LuaData> */
#ifndef TOLUA_DISABLE_tolua_lua_interface_lua_map_int_LuaData__insert00
static int tolua_lua_interface_lua_map_int_LuaData__insert00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"lua_map<int,LuaData>",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"std::pair<int,LuaData>",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  lua_map<int,LuaData>* self = (lua_map<int,LuaData>*)  tolua_tousertype(tolua_S,1,0);
  std::pair<int,LuaData> tolua_var_16 = *((std::pair<int,LuaData>*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'insert'", NULL);
#endif
  {
   self->insert(tolua_var_16);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'insert'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: ToLuaMapIntInt */
#ifndef TOLUA_DISABLE_tolua_lua_interface_ToLuaMapIntInt00
static int tolua_lua_interface_ToLuaMapIntInt00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isuserdata(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  void* p = ((void*)  tolua_touserdata(tolua_S,1,0));
  {
   lua_map<int,int>* tolua_ret = (lua_map<int,int>*)  ToLuaMapIntInt(p);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"lua_map<int,int>");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ToLuaMapIntInt'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: ToLuaMapIntLuaData */
#ifndef TOLUA_DISABLE_tolua_lua_interface_ToLuaMapIntLuaData00
static int tolua_lua_interface_ToLuaMapIntLuaData00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isuserdata(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  void* p = ((void*)  tolua_touserdata(tolua_S,1,0));
  {
   lua_map<int,LuaData>* tolua_ret = (lua_map<int,LuaData>*)  ToLuaMapIntLuaData(p);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"lua_map<int,LuaData>");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ToLuaMapIntLuaData'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: has of class  lua_set<int> */
#ifndef TOLUA_DISABLE_tolua_lua_interface_lua_set_int__has00
static int tolua_lua_interface_lua_set_int__has00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const lua_set<int>",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const lua_set<int>* self = (const lua_set<int>*)  tolua_tousertype(tolua_S,1,0);
  int tolua_var_17 = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'has'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->has(tolua_var_17);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'has'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: lua_begin of class  lua_set<int> */
#ifndef TOLUA_DISABLE_tolua_lua_interface_lua_set_int__lua_begin00
static int tolua_lua_interface_lua_set_int__lua_begin00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"lua_set<int>",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  lua_set<int>* self = (lua_set<int>*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'lua_begin'", NULL);
#endif
  {
   set<int>::iterator tolua_ret = (set<int>::iterator)  self->lua_begin();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((set<int>::iterator)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"set<int>::iterator");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(set<int>::iterator));
     tolua_pushusertype(tolua_S,tolua_obj,"set<int>::iterator");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'lua_begin'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: lua_end of class  lua_set<int> */
#ifndef TOLUA_DISABLE_tolua_lua_interface_lua_set_int__lua_end00
static int tolua_lua_interface_lua_set_int__lua_end00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"lua_set<int>",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"set<int>::iterator",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  lua_set<int>* self = (lua_set<int>*)  tolua_tousertype(tolua_S,1,0);
  set<int>::iterator tolua_var_18 = *((set<int>::iterator*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'lua_end'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->lua_end(tolua_var_18);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'lua_end'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: lua_next of class  lua_set<int> */
#ifndef TOLUA_DISABLE_tolua_lua_interface_lua_set_int__lua_next00
static int tolua_lua_interface_lua_set_int__lua_next00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"lua_set<int>",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"set<int>::iterator",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  lua_set<int>* self = (lua_set<int>*)  tolua_tousertype(tolua_S,1,0);
  set<int>::iterator tolua_var_19 = *((set<int>::iterator*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'lua_next'", NULL);
#endif
  {
   set<int>::iterator tolua_ret = (set<int>::iterator)  self->lua_next(tolua_var_19);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((set<int>::iterator)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"set<int>::iterator");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(set<int>::iterator));
     tolua_pushusertype(tolua_S,tolua_obj,"set<int>::iterator");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'lua_next'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: lua_value of class  lua_set<int> */
#ifndef TOLUA_DISABLE_tolua_lua_interface_lua_set_int__lua_value00
static int tolua_lua_interface_lua_set_int__lua_value00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"lua_set<int>",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"set<int>::iterator",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  lua_set<int>* self = (lua_set<int>*)  tolua_tousertype(tolua_S,1,0);
  set<int>::iterator tolua_var_20 = *((set<int>::iterator*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'lua_value'", NULL);
#endif
  {
   const int tolua_ret = (const int)  self->lua_value(tolua_var_20);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'lua_value'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: size of class  lua_set<int> */
#ifndef TOLUA_DISABLE_tolua_lua_interface_lua_set_int__size00
static int tolua_lua_interface_lua_set_int__size00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const lua_set<int>",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const lua_set<int>* self = (const lua_set<int>*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'size'", NULL);
#endif
  {
   int tolua_ret = (int)  self->size();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'size'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: insert of class  lua_set<int> */
#ifndef TOLUA_DISABLE_tolua_lua_interface_lua_set_int__insert00
static int tolua_lua_interface_lua_set_int__insert00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"lua_set<int>",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  lua_set<int>* self = (lua_set<int>*)  tolua_tousertype(tolua_S,1,0);
  int tolua_var_21 = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'insert'", NULL);
#endif
  {
   self->insert(tolua_var_21);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'insert'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: has of class  lua_set<LuaData> */
#ifndef TOLUA_DISABLE_tolua_lua_interface_lua_set_LuaData__has00
static int tolua_lua_interface_lua_set_LuaData__has00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const lua_set<LuaData>",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"LuaData",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const lua_set<LuaData>* self = (const lua_set<LuaData>*)  tolua_tousertype(tolua_S,1,0);
  LuaData tolua_var_22 = *((LuaData*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'has'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->has(tolua_var_22);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'has'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: lua_begin of class  lua_set<LuaData> */
#ifndef TOLUA_DISABLE_tolua_lua_interface_lua_set_LuaData__lua_begin00
static int tolua_lua_interface_lua_set_LuaData__lua_begin00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"lua_set<LuaData>",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  lua_set<LuaData>* self = (lua_set<LuaData>*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'lua_begin'", NULL);
#endif
  {
   set<LuaData>::iterator tolua_ret = (set<LuaData>::iterator)  self->lua_begin();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((set<LuaData>::iterator)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"set<LuaData>::iterator");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(set<LuaData>::iterator));
     tolua_pushusertype(tolua_S,tolua_obj,"set<LuaData>::iterator");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'lua_begin'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: lua_end of class  lua_set<LuaData> */
#ifndef TOLUA_DISABLE_tolua_lua_interface_lua_set_LuaData__lua_end00
static int tolua_lua_interface_lua_set_LuaData__lua_end00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"lua_set<LuaData>",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"set<LuaData>::iterator",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  lua_set<LuaData>* self = (lua_set<LuaData>*)  tolua_tousertype(tolua_S,1,0);
  set<LuaData>::iterator tolua_var_23 = *((set<LuaData>::iterator*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'lua_end'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->lua_end(tolua_var_23);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'lua_end'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: lua_next of class  lua_set<LuaData> */
#ifndef TOLUA_DISABLE_tolua_lua_interface_lua_set_LuaData__lua_next00
static int tolua_lua_interface_lua_set_LuaData__lua_next00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"lua_set<LuaData>",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"set<LuaData>::iterator",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  lua_set<LuaData>* self = (lua_set<LuaData>*)  tolua_tousertype(tolua_S,1,0);
  set<LuaData>::iterator tolua_var_24 = *((set<LuaData>::iterator*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'lua_next'", NULL);
#endif
  {
   set<LuaData>::iterator tolua_ret = (set<LuaData>::iterator)  self->lua_next(tolua_var_24);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((set<LuaData>::iterator)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"set<LuaData>::iterator");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(set<LuaData>::iterator));
     tolua_pushusertype(tolua_S,tolua_obj,"set<LuaData>::iterator");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'lua_next'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: lua_value of class  lua_set<LuaData> */
#ifndef TOLUA_DISABLE_tolua_lua_interface_lua_set_LuaData__lua_value00
static int tolua_lua_interface_lua_set_LuaData__lua_value00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"lua_set<LuaData>",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"set<LuaData>::iterator",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  lua_set<LuaData>* self = (lua_set<LuaData>*)  tolua_tousertype(tolua_S,1,0);
  set<LuaData>::iterator tolua_var_25 = *((set<LuaData>::iterator*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'lua_value'", NULL);
#endif
  {
   const LuaData& tolua_ret = (const LuaData&)  self->lua_value(tolua_var_25);
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const LuaData");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'lua_value'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: size of class  lua_set<LuaData> */
#ifndef TOLUA_DISABLE_tolua_lua_interface_lua_set_LuaData__size00
static int tolua_lua_interface_lua_set_LuaData__size00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const lua_set<LuaData>",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const lua_set<LuaData>* self = (const lua_set<LuaData>*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'size'", NULL);
#endif
  {
   int tolua_ret = (int)  self->size();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'size'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: insert of class  lua_set<LuaData> */
#ifndef TOLUA_DISABLE_tolua_lua_interface_lua_set_LuaData__insert00
static int tolua_lua_interface_lua_set_LuaData__insert00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"lua_set<LuaData>",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"LuaData",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  lua_set<LuaData>* self = (lua_set<LuaData>*)  tolua_tousertype(tolua_S,1,0);
  LuaData tolua_var_26 = *((LuaData*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'insert'", NULL);
#endif
  {
   self->insert(tolua_var_26);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'insert'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: ToLuaSetInt */
#ifndef TOLUA_DISABLE_tolua_lua_interface_ToLuaSetInt00
static int tolua_lua_interface_ToLuaSetInt00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isuserdata(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  void* p = ((void*)  tolua_touserdata(tolua_S,1,0));
  {
   lua_set<int>* tolua_ret = (lua_set<int>*)  ToLuaSetInt(p);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"lua_set<int>");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ToLuaSetInt'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: ToLuaSetLuaData */
#ifndef TOLUA_DISABLE_tolua_lua_interface_ToLuaSetLuaData00
static int tolua_lua_interface_ToLuaSetLuaData00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isuserdata(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  void* p = ((void*)  tolua_touserdata(tolua_S,1,0));
  {
   lua_set<LuaData>* tolua_ret = (lua_set<LuaData>*)  ToLuaSetLuaData(p);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"lua_set<LuaData>");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ToLuaSetLuaData'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_lua_interface_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_cclass(tolua_S,"LuaDataP","LuaDataP","",NULL);
  tolua_beginmodule(tolua_S,"LuaDataP");
   tolua_variable(tolua_S,"m_i",tolua_get_LuaDataP_m_i,tolua_set_LuaDataP_m_i);
   tolua_variable(tolua_S,"m_s",tolua_get_LuaDataP_m_s,tolua_set_LuaDataP_m_s);
   tolua_variable(tolua_S,"m_vec",tolua_get_LuaDataP_m_vec,tolua_set_LuaDataP_m_vec);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"LuaData","LuaData","",tolua_collect_LuaData);
  #else
  tolua_cclass(tolua_S,"LuaData","LuaData","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"LuaData");
   tolua_function(tolua_S,"new",tolua_lua_interface_LuaData_new00);
   tolua_function(tolua_S,"new_local",tolua_lua_interface_LuaData_new00_local);
   tolua_function(tolua_S,".call",tolua_lua_interface_LuaData_new00_local);
   tolua_function(tolua_S,"delete",tolua_lua_interface_LuaData_delete00);
   tolua_function(tolua_S,"toString",tolua_lua_interface_LuaData_toString00);
   tolua_variable(tolua_S,"m_i",tolua_get_LuaData_m_i,tolua_set_LuaData_m_i);
   tolua_variable(tolua_S,"m_s",tolua_get_LuaData_m_s,tolua_set_LuaData_m_s);
   tolua_variable(tolua_S,"m_vec",tolua_get_LuaData_m_vec,tolua_set_LuaData_m_vec);
   tolua_variable(tolua_S,"m_p",tolua_get_LuaData_m_p,tolua_set_LuaData_m_p);
  tolua_endmodule(tolua_S);
  tolua_function(tolua_S,"ToLuaData",tolua_lua_interface_ToLuaData00);
  tolua_cclass(tolua_S,"lua_vector_int_","lua_vector<int>","vector",NULL);
  tolua_beginmodule(tolua_S,"lua_vector_int_");
   tolua_function(tolua_S,"get",tolua_lua_interface_lua_vector_int__get00);
   tolua_function(tolua_S,"size",tolua_lua_interface_lua_vector_int__size00);
   tolua_function(tolua_S,"push_back",tolua_lua_interface_lua_vector_int__push_back00);
   tolua_function(tolua_S,".seti",tolua_lua_interface_lua_vector_int___seti00);
   tolua_function(tolua_S,".geti",tolua_lua_interface_lua_vector_int___geti00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"lua_vector_LuaData_","lua_vector<LuaData>","vector",NULL);
  tolua_beginmodule(tolua_S,"lua_vector_LuaData_");
   tolua_function(tolua_S,"get",tolua_lua_interface_lua_vector_LuaData__get00);
   tolua_function(tolua_S,"size",tolua_lua_interface_lua_vector_LuaData__size00);
   tolua_function(tolua_S,"push_back",tolua_lua_interface_lua_vector_LuaData__push_back00);
   tolua_function(tolua_S,".seti",tolua_lua_interface_lua_vector_LuaData___seti00);
   tolua_function(tolua_S,".geti",tolua_lua_interface_lua_vector_LuaData___geti00);
  tolua_endmodule(tolua_S);
  tolua_function(tolua_S,"ToLuaVectorInt",tolua_lua_interface_ToLuaVectorInt00);
  tolua_function(tolua_S,"ToLuaVectorLuaData",tolua_lua_interface_ToLuaVectorLuaData00);
  tolua_cclass(tolua_S,"lua_map_int_int_","lua_map<int,int>","map",NULL);
  tolua_beginmodule(tolua_S,"lua_map_int_int_");
   tolua_function(tolua_S,"get",tolua_lua_interface_lua_map_int_int__get00);
   tolua_function(tolua_S,"lua_begin",tolua_lua_interface_lua_map_int_int__lua_begin00);
   tolua_function(tolua_S,"lua_end",tolua_lua_interface_lua_map_int_int__lua_end00);
   tolua_function(tolua_S,"lua_next",tolua_lua_interface_lua_map_int_int__lua_next00);
   tolua_function(tolua_S,"lua_first",tolua_lua_interface_lua_map_int_int__lua_first00);
   tolua_function(tolua_S,"lua_second",tolua_lua_interface_lua_map_int_int__lua_second00);
   tolua_function(tolua_S,"size",tolua_lua_interface_lua_map_int_int__size00);
   tolua_function(tolua_S,".seti",tolua_lua_interface_lua_map_int_int___seti00);
   tolua_function(tolua_S,".geti",tolua_lua_interface_lua_map_int_int___geti00);
   tolua_function(tolua_S,"insert",tolua_lua_interface_lua_map_int_int__insert00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"lua_map_int_LuaData_","lua_map<int,LuaData>","map",NULL);
  tolua_beginmodule(tolua_S,"lua_map_int_LuaData_");
   tolua_function(tolua_S,"get",tolua_lua_interface_lua_map_int_LuaData__get00);
   tolua_function(tolua_S,"lua_begin",tolua_lua_interface_lua_map_int_LuaData__lua_begin00);
   tolua_function(tolua_S,"lua_end",tolua_lua_interface_lua_map_int_LuaData__lua_end00);
   tolua_function(tolua_S,"lua_next",tolua_lua_interface_lua_map_int_LuaData__lua_next00);
   tolua_function(tolua_S,"lua_first",tolua_lua_interface_lua_map_int_LuaData__lua_first00);
   tolua_function(tolua_S,"lua_second",tolua_lua_interface_lua_map_int_LuaData__lua_second00);
   tolua_function(tolua_S,"size",tolua_lua_interface_lua_map_int_LuaData__size00);
   tolua_function(tolua_S,".seti",tolua_lua_interface_lua_map_int_LuaData___seti00);
   tolua_function(tolua_S,".geti",tolua_lua_interface_lua_map_int_LuaData___geti00);
   tolua_function(tolua_S,"insert",tolua_lua_interface_lua_map_int_LuaData__insert00);
  tolua_endmodule(tolua_S);
  tolua_function(tolua_S,"ToLuaMapIntInt",tolua_lua_interface_ToLuaMapIntInt00);
  tolua_function(tolua_S,"ToLuaMapIntLuaData",tolua_lua_interface_ToLuaMapIntLuaData00);
  tolua_cclass(tolua_S,"lua_set_int_","lua_set<int>","set",NULL);
  tolua_beginmodule(tolua_S,"lua_set_int_");
   tolua_function(tolua_S,"has",tolua_lua_interface_lua_set_int__has00);
   tolua_function(tolua_S,"lua_begin",tolua_lua_interface_lua_set_int__lua_begin00);
   tolua_function(tolua_S,"lua_end",tolua_lua_interface_lua_set_int__lua_end00);
   tolua_function(tolua_S,"lua_next",tolua_lua_interface_lua_set_int__lua_next00);
   tolua_function(tolua_S,"lua_value",tolua_lua_interface_lua_set_int__lua_value00);
   tolua_function(tolua_S,"size",tolua_lua_interface_lua_set_int__size00);
   tolua_function(tolua_S,"insert",tolua_lua_interface_lua_set_int__insert00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"lua_set_LuaData_","lua_set<LuaData>","set",NULL);
  tolua_beginmodule(tolua_S,"lua_set_LuaData_");
   tolua_function(tolua_S,"has",tolua_lua_interface_lua_set_LuaData__has00);
   tolua_function(tolua_S,"lua_begin",tolua_lua_interface_lua_set_LuaData__lua_begin00);
   tolua_function(tolua_S,"lua_end",tolua_lua_interface_lua_set_LuaData__lua_end00);
   tolua_function(tolua_S,"lua_next",tolua_lua_interface_lua_set_LuaData__lua_next00);
   tolua_function(tolua_S,"lua_value",tolua_lua_interface_lua_set_LuaData__lua_value00);
   tolua_function(tolua_S,"size",tolua_lua_interface_lua_set_LuaData__size00);
   tolua_function(tolua_S,"insert",tolua_lua_interface_lua_set_LuaData__insert00);
  tolua_endmodule(tolua_S);
  tolua_function(tolua_S,"ToLuaSetInt",tolua_lua_interface_ToLuaSetInt00);
  tolua_function(tolua_S,"ToLuaSetLuaData",tolua_lua_interface_ToLuaSetLuaData00);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_lua_interface (lua_State* tolua_S) {
 return tolua_lua_interface_open(tolua_S);
};
#endif

