#include "unity.h"
#include "../src/calculator.h"

void setUp(void) {}    // Chạy trước mỗi bài test
void tearDown(void) {} // Chạy sau mỗi bài test

void test_multiply_logic(void) {
    TEST_ASSERT_EQUAL_INT(20, multiply(4, 5));
    TEST_ASSERT_EQUAL_INT(-10, multiply(2, -5));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_multiply_logic);
    return UNITY_END();
}
