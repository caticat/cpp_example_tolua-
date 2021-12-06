function log_print(str)
    print("[lua]"..str)
end

log_print("lua_data 开始")

function TestLuaData(p)
    local d = ToLuaData(p)
    log_print(d:toString())

    d.m_i = d.m_i * 10
    d.m_s = d.m_s .. "_"
    v = ToLuaVectorInt(d.m_vec)
    v:push_back(7)

    d.m_p.m_i = d.m_p.m_i * 10
    d.m_p.m_s = d.m_p.m_s .. "_"
    dv = ToLuaVectorInt(d.m_p.m_vec)
    dv:push_back(77)

    log_print(d:toString())
end

log_print("lua_data 结束")
