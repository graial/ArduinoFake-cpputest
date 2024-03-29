# ArduinoFake with cpputest

Minimal example demonstrating CppuTest using ArduinoFake & CMake:

to run: 
 - `mkdir test/build && cd test/build`
 - `cmake ..`
 - `cmake --build .`
 - `./first_test`

The example currently fails because it appears to be trying to call `loop` from `fakeit` rather than `src/blink.cpp`