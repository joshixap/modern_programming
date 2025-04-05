#include <gtest/gtest.h>
#include "long_number.hpp"

using IShitov::LongNumber;

TEST(LongNumberTest, DefaultConstructor) {
    LongNumber num;
    EXPECT_EQ(num.get_digits_number(), 1);
    EXPECT_EQ(num.get_rank_number(1), 0);
    EXPECT_EQ(num.is_negative(), false);
}

TEST(LongNumberTest, ConstructorWithString) {
    LongNumber num("12345");
    EXPECT_EQ(num.get_digits_number(), 5);
    EXPECT_EQ(num.get_rank_number(1), 1);
    EXPECT_EQ(num.get_rank_number(5), 5);
    EXPECT_EQ(num.is_negative(), false);
}

TEST(LongNumberTest, ConstructorWithNegativeString) {
    LongNumber num("-12345");
    EXPECT_EQ(num.get_digits_number(), 5);
    EXPECT_EQ(num.get_rank_number(1), 1);
    EXPECT_EQ(num.get_rank_number(5), 5);
    EXPECT_EQ(num.is_negative(), true);
}

TEST(LongNumberTest, CopyConstructor) {
    LongNumber num("12345");
    LongNumber copy(num);
    EXPECT_EQ(copy.get_digits_number(), 5);
    EXPECT_EQ(copy.get_rank_number(1), 1);
    EXPECT_EQ(copy.get_rank_number(5), 5);
    EXPECT_EQ(copy.is_negative(), false);
}

TEST(LongNumberTest, MoveConstructor) {
    LongNumber num("12345");
    LongNumber moved(std::move(num));
    EXPECT_EQ(moved.get_digits_number(), 5);
    EXPECT_EQ(moved.get_rank_number(1), 1);
    EXPECT_EQ(moved.get_rank_number(5), 5);
    EXPECT_EQ(moved.is_negative(), false);
    EXPECT_EQ(num.get_digits_number(), 1); // num should be empty
}

TEST(LongNumberTest, AssignmentOperatorWithString) {
    LongNumber num;
    num = "12345";
    EXPECT_EQ(num.get_digits_number(), 5);
    EXPECT_EQ(num.get_rank_number(1), 1);
    EXPECT_EQ(num.get_rank_number(5), 5);
    EXPECT_EQ(num.is_negative(), false);
}

TEST(LongNumberTest, AssignmentOperatorWithLongNumber) {
    LongNumber num("12345");
    LongNumber assigned;
    assigned = num;
    EXPECT_EQ(assigned.get_digits_number(), 5);
    EXPECT_EQ(assigned.get_rank_number(1), 1);
    EXPECT_EQ(assigned.get_rank_number(5), 5);
    EXPECT_EQ(assigned.is_negative(), false);
}

TEST(LongNumberTest, EqualityOperator) {
    LongNumber num1("12345");
    LongNumber num2("12345");
    LongNumber num3("54321");
    EXPECT_TRUE(num1 == num2);
    EXPECT_FALSE(num1 == num3);
}

TEST(LongNumberTest, InequalityOperator) {
    LongNumber num1("12345");
    LongNumber num2("54321");
    EXPECT_TRUE(num1 != num2);
}

TEST(LongNumberTest, GreaterThanOperator) {
    LongNumber num1("12345");
    LongNumber num2("54321");
    EXPECT_FALSE(num1 > num2);
    EXPECT_TRUE(num2 > num1);
}

TEST(LongNumberTest, LessThanOperator) {
    LongNumber num1("12345");
    LongNumber num2("54321");
    EXPECT_TRUE(num1 < num2);
    EXPECT_FALSE(num2 < num1);
}

TEST(LongNumberTest, AddOperator) {
    LongNumber num1("12345");
    LongNumber num2("6789");
    LongNumber result = num1 + num2;
    EXPECT_EQ(result.get_digits_number(), 5);
    EXPECT_EQ(result.get_rank_number(1), 2);
    EXPECT_EQ(result.get_rank_number(5), 4);
}

TEST(LongNumberTest, SubtractOperator) {
    LongNumber num1("12345");
    LongNumber num2("6789");
    LongNumber result = num1 - num2;
    EXPECT_EQ(result.get_digits_number(), 5);
    EXPECT_EQ(result.get_rank_number(1), 5);
    EXPECT_EQ(result.get_rank_number(5), 6);
}

TEST(LongNumberTest, MultiplyOperator) {
    LongNumber num1("123");
    LongNumber num2("456");
    LongNumber result = num1 * num2;
    EXPECT_EQ(result.get_digits_number(), 5);
    EXPECT_EQ(result.get_rank_number(1), 5);
    EXPECT_EQ(result.get_rank_number(5), 8);
}

TEST(LongNumberTest, DivideOperator) {
    LongNumber num1("12345");
    LongNumber num2("5");
    LongNumber result = num1 / num2;
    EXPECT_EQ(result.get_digits_number(), 4);
    EXPECT_EQ(result.get_rank_number(1), 2);
    EXPECT_EQ(result.get_rank_number(4), 9);
}

TEST(LongNumberTest, ModuloOperator) {
    LongNumber num1("12345");
    LongNumber num2("5");
    LongNumber result = num1 % num2;
    EXPECT_EQ(result.get_digits_number(), 1);
    EXPECT_EQ(result.get_rank_number(1), 0);
}

TEST(LongNumberTest, ZeroDivision) {
    LongNumber num("12345");
    LongNumber num_zero("0");
    EXPECT_THROW(num / num_zero, std::invalid_argument);
}

TEST(LongNumberTest, NegativeNumbers) {
    LongNumber num1("-12345");
    LongNumber num2("6789");
    LongNumber result = num1 + num2;
    EXPECT_EQ(result.get_digits_number(), 5);
    EXPECT_EQ(result.get_rank_number(1), 4);
    EXPECT_EQ(result.get_rank_number(5), 6);
}
