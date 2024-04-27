add_library(datatypes STATIC DataTypes.cpp run.cpp)
target_include_directories(datatypes PUBLIC .)

add_executable(bootstrap bootstrap.cpp)
target_link_libraries(bootstrap PRIVATE datatypes)
