add_executable(unit_tests
               unit_tests.cpp
               dataTypes_test.cpp)
target_link_libraries(unit_tests PRIVATE datatypes)

add_test(NAME TestMultiplyInts COMMAND unit_tests 1)
add_test(NAME TestMultiplyFloats COMMAND unit_tests 2)
add_test(NAME TestGetCircumference COMMAND unit_tests 3)
add_test(NAME TestAverageFloats COMMAND unit_tests 4)
add_test(NAME TestAverageInts COMMAND unit_tests 5)
add_test(NAME TestGetRPM COMMAND unit_tests 6)
add_test(NAME TestGetDistanceTraveled COMMAND unit_tests 7)