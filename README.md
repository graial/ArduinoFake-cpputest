# ArduinoFake with cpputest

Minimal example demonstrating the error encountered when trying to include ArduinoFake using cpputest to hopefully resolve the following:

 - https://github.com/FabioBatSilva/ArduinoFake/issues/56
 - https://github.com/cpputest/cpputest/issues/1768

Initially, it should compile and run a single passing test successfully.

to run: 
 - `mkdir test/build && cd test/build`
 - `cmake ..`
 - `cmake --build .`
 - `./first_test`

To see the error, uncomment any of the 3 `#include` statements in *test/includes/MyMemoryLeakDetectorNewMacrosFile.h*, rebuild and re-run via:

- `cmake --build .`
 - `./first_test`