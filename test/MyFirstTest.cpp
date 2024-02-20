#include "MyMemoryLeakDetectorNewMacrosFile.h"
#include "CppUTest/TestHarness.h"

//Compile error Failure occurs when uncommenting this line
// #include "ArduinoFake.h"

// using namespace fakeit;

extern "C"
{
    /*
     * Add your c-only include files here
     */
}

TEST_GROUP(MyCode)
{
    void setup()
    {
        // When(Method(ArduinoFake(), pinMode)).Return();

        // setup();

        // Verify(Method(ArduinoFake(), pinMode).Using(LED_BUILTIN, OUTPUT)).Once();
    }

    void teardown()
    {
    }
};

TEST(MyCode, test1)
{
    CHECK_EQUAL(1,1);
     /*
     * Instantiate your class, or call the function, you want to test.
     * Then delete this comment
     */
}
