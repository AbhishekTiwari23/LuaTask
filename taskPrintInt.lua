PrintLuatoCpp(42,'From lua to cpp')

-- define Lua function --
function PrintCpptoLua(num, str)
    print("Hello from Lua!")
    print("num = "..tostring(num)..", str = "..str)
end