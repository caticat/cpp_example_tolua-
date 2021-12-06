function log_print(str)
    print("[lua]"..str)
end

log_print("lua_vector 开始")

function TestLuaVectorInt(p)
    local v = ToLuaVectorInt(p)
    local size = v:size()
    local i = 0
    log_print("vector size:"..tostring(size))
    for i = 0, size - 1 do
        log_print(tostring(i).."="..tostring(v[i]))
    end

    log_print("double vector value")
    for i = 0, size - 1 do
        v[i] = v[i] * 2
    end
end

function TestLuaVectorLuaData(p)
    local v = ToLuaVectorLuaData(p)
    local size = v:size()
    local i = 0
    log_print("vector size:"..tostring(size))
    for i = 0, size - 1 do
        log_print("i:"..tostring(v[i].m_i)..",s:"..v[i].m_s)
    end

    log_print("change data")
    for i = 0, size - 1 do
        local d = v:get(i)
        d.m_i = v[i].m_i + 10
        d.m_s = v[i].m_s.."==="
    end

    -- 这样写改变不了cpp中的数据(指针可以这样写)
    -- log_print("change data")
    -- for i = 0, size - 1 do
    --     v[i].m_i = v[i].m_i + 10
    --     v[i].m_s = v[i].m_s.."==="
    -- end
end

log_print("lua_vector 结束")