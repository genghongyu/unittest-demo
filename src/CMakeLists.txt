# 创建静态库 math
add_library(math STATIC math.cpp)

# 指定头文件路径
target_include_directories(math PUBLIC ../include)
