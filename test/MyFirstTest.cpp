#include <ArduinoFake.h>
#include "MyMemoryLeakDetectorNewMacrosFile.h"
#include "CppUTest/TestHarness.h"
#include "blink.hpp"

extern "C"
{
    /*
     * Add your c-only include files here
     */
}

TEST_GROUP(MyCode)
{
    void test_setup()
    {
        ArduinoFakeReset();

        When(Method(ArduinoFake(), pinMode)).Return();

        setup();

        Verify(Method(ArduinoFake(), pinMode).Using(LED_BUILTIN, OUTPUT)).Once();
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

TEST(MyCode, test_loop)
{
    // When(Method(ArduinoFake(), digitalWrite)).AlwaysReturn();
    // When(Method(ArduinoFake(), delay)).AlwaysReturn();

    loop();

    // Verify(Method(ArduinoFake(), digitalWrite).Using(LED_BUILTIN, HIGH)).Once();
    // Verify(Method(ArduinoFake(), digitalWrite).Using(LED_BUILTIN, LOW)).Once();
    // Verify(Method(ArduinoFake(), delay).Using(100)).Exactly(2_Times);
}
