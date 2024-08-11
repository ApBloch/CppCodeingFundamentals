add_library(motor STATIC UsingClassObj.cpp Motor.cpp run.cpp)
target_include_directories(motor PUBLIC .)

add_executable(bootstrap bootstrap.cpp)
target_link_libraries(bootstrap PRIVATE motor)
