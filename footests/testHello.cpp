#include <Hello.h>
#include "catch.h"

SCENARIO("successfully importing from foolib") {

    GIVEN("an instance from the imported library") {
        Hello h;

        WHEN("a function from the library is called") {
            int value = h.foo();

            THEN("the expected value was returned") {
                REQUIRE(value == 17);
            }
        }
    }
}