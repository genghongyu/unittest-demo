cmake_minimum_required(VERSION 3.10)
project(CiCdUnitTestDemo)

# 开启测试功能
enable_testing()

# 添加子目录
add_subdirectory(src)
add_subdirectory(tests)
