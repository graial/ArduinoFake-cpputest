# ArduinoFake with cpputest

Minimal example demonstrating CppuTest using ArduinoFake & CMake:

to run: 
 - `mkdir test/build && cd test/build`
 - `cmake ..`
 - `cmake --build .`
 - `./first_test`

 *if you need to rebuild the blink object, you can run `g++ -c src/blink.cpp -o test/objs/blink.o  -D UNIT_TEST -I test/build/_deps/arduinofake-src/src/`*

The example currently fails with 'fakeit::UnexpectedMethodCallException' because it is apparently trying to call `loop()` from `fakeit` rather than `src/blink.cpp`
