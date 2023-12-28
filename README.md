# ArduinoFake with cpputest

Minimal example demonstrating the error encountered when trying to include ArduinoFake using cpputest to hopefully resolve the following:

 - https://github.com/FabioBatSilva/ArduinoFake/issues/56
 - https://github.com/cpputest/cpputest/issues/1768

Currently it fails on the same issue

to run: 
 - `mkdir build && cd build`
 - `cmake ..`
 - `cmake --build .`
 - `./first_test`

the comment out the `#include "ArduinoFake.h"
` on line 4 of *MyFirstTest.cpp*, rebuild and re-run via:

- `cmake --build .`
 - `./first_test`

 and watch the test-runner complete successfully