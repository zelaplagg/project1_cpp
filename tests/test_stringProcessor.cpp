#include "stringProcessor.h"
#include <gtest/gtest.h>
TEST(StringProcessorTest, ValidStringReturnsTrue) {
    EXPECT_TRUE(isValidString("Hello"));
}
TEST(StringProcessorTest, EmptyStringReturnsFalse) {
    EXPECT_FALSE(isValidString(""));
}
TEST(StringProcessorTest, InvalidCharsReturnsFalse) {
    EXPECT_FALSE(isValidString("Hello123"));
    EXPECT_FALSE(isValidString("!@#"));
}
