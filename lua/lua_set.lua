function log_print(str)
    print("[lua]"..str)
end

log_print("lua_set 开始")

function TestLuaSetInt(p)
    local s = ToLuaSetInt(p)
    local size = s:size()
    log_print("set size:"..tostring(size))
    log_print(tostring(1).."="..tostring(s:has(1)))
    log_print(tostring(3).."="..tostring(s:has(3)))
    log_print(tostring(5).."="..tostring(s:has(5)))
    log_print(tostring(7).."="..tostring(s:has(7)))

    log_print("change set value")
    s:insert(7)

    log_print("loop")
    local it = s:lua_begin();
    while not s:lua_end(it) do
        local v = s:lua_value(it)
        log_print("value:"..tostring(v))
        it = s:lua_next(it)
    end
end

function TestLuaSetLuaData(p)
    local s = ToLuaSetLuaData(p)
    local size = s:size()
    log_print("set size:"..tostring(size))

    local data = LuaData:new()
    data.m_i = 1
    data.m_s = "aaa"

    log_print(tostring(1).."="..tostring(s:has(data)))

    data.m_i = 2
    log_print(tostring(2).."="..tostring(s:has(data)))

    data.m_i = 3
    data.m_s = "bbb"
    log_print(tostring(3).."="..tostring(s:has(data)))

    log_print("change set value")
    data.m_i = 7
    data.m_s = "ddd"
    s:insert(data)

    data:delete()
end

log_print("lua_set 结束")