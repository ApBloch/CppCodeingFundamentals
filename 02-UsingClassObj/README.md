Project Generation Instructions:
cmake -S . -B build

Build Instructions, Must be run each time a change is made
cmake --build ./build

Running Test Instructions:
ctest --test-dir ./build --output-on-failure

Running Bootstart Instruction:
./build/bin/bootstrap

