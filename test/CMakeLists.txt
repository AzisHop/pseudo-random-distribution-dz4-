add_executable(test tests.cpp)

target_link_libraries(test ${GTEST_LIBRARIES} pthread)