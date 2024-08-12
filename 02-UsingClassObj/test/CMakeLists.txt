add_executable(unit_tests
               unit_tests.cpp
               tests.cpp
               UsingClassObjAnswer.cpp)
target_link_libraries(unit_tests PRIVATE motor)

add_test(NAME ConstructRedMotor COMMAND unit_tests 1)
add_test(NAME ConstructWithPortNumber COMMAND unit_tests 2)
add_test(NAME ConstructOppositeDirection COMMAND unit_tests 3)
add_test(NAME SetMotorToMaxVoltage COMMAND unit_tests 4)
add_test(NAME SetMotorToVoltage COMMAND unit_tests 5)
add_test(NAME SpinMotorWithMaxVel COMMAND unit_tests 6)
add_test(NAME SpinMotorForwardAndBack COMMAND unit_tests 7)
add_test(NAME SpinMotorForEncoderCounts COMMAND unit_tests 8)
add_test(NAME CalculateFeetPerSecond COMMAND unit_tests 9)