#include "MyMemoryLeakDetectorNewMacrosFile.h"
#include "CppUTest/TestHarness.h"

//Compile error Failure occurs when uncommenting this line
// #include "ArduinoFake.h"

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
