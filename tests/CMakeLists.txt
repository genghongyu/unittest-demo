find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS} ../include)

add_executable(runTests test_math.cpp)
target_link_libraries(runTests math ${GTEST_LIBRARIES} gtest_main pthread)

add_test(NAME MathTests COMMAND runTests)
