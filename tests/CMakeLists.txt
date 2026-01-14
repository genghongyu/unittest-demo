# 找到 GTest 和 GMock
find_package(GTest REQUIRED)
find_package(GMock REQUIRED)

# 添加 include 目录
include_directories(
    ../include
    ${GTEST_INCLUDE_DIRS}  # gtest include，如果 find_package 找不到，可以保留
)

# 添加测试源文件
set(TEST_SOURCES
    test_math.cpp
)

# 创建测试可执行文件
add_executable(runTests ${TEST_SOURCES})

# 链接 gtest / gmock / 正式库 / pthread
target_link_libraries(runTests PRIVATE
    math                # 你的正式库
    GTest::GTest
    GTest::Main
    GMock::GMock
    GMock::Main
    pthread
)

# 添加 CTest 测试
add_test(NAME MathTests COMMAND runTests)
