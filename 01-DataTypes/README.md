Build Instructions:

cmake -S . -B build
cmake --build ./build

Running Test Instructions:

ctest --test-dir ./build

Running Bootstart Instruction:
./build/bin/bootstrap