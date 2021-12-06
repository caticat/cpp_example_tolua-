function log_print(str)
    print("[lua]"..str)
end

log_print("lua_map 开始")

function TestLuaMapIntInt(p)
    local m = ToLuaMapIntInt(p)
    local size = m:size()
    log_print("map size:"..tostring(size))
    log_print(tostring(1).."="..tostring(m[1]))
    log_print(tostring(3).."="..tostring(m[3]))
    log_print(tostring(5).."="..tostring(m[5]))
    log_print(tostring(7).."="..tostring(m[7]))

    log_print("change map value")
    m[5] = 55555
    m[7] = 777

    log_print("loop")
    --for it = m:lua_begin(),m:lua_end(), m:lua_end(it) do
    --    log_print("loop->"..tostring(it))
    --end
    local it = m:lua_begin()
    while not m:lua_end(it) do
        local k = m:lua_first(it)
        local v = m:lua_second(it)
        log_print("loop,"..tostring(k).."="..tostring(v))
        it = m:lua_next(it)
    end
end

function TestLuaMapIntLuaData(p)
    local m = ToLuaMapIntLuaData(p)
    local size = m:size()
    log_print("map size:"..tostring(size))
    log_print(tostring(1).."="..tostring(m[1].m_i)..","..tostring(m[1].m_s))
    log_print(tostring(3).."="..tostring(m[3].m_i)..","..tostring(m[3].m_s))
    log_print(tostring(5).."="..tostring(m[5].m_i)..","..tostring(m[5].m_s))
    log_print(tostring(7).."="..tostring(m[7].m_i)..","..tostring(m[7].m_s))
    
    log_print("change map value")
    -- 这些修改都无效
    -- m[5].m_i = 55555
    -- m[5].m_s = "5s"
    -- m[7].m_i = 77777
    -- m[7].m_s = "7s"
    -- 这些修改有效
    local d = LuaData:new()
    d.m_i = 888
    d.m_s = "8s"
    m[8] = d
    d.m_i = 999
    m[9] = d
    d.m_s = "3s"
    m[3] = d
    d:delete()

    local g = m:get(1)
    g.m_i = 9111
    g.m_s = "abcdefg"
end

log_print("lua_map 结束")