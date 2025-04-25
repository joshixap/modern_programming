#include <gtest/gtest.h>
#include "vector.hpp"

using biv::Vector;

TEST(VectorTest, Initially_Empty) {
    Vector<int> vec;
    EXPECT_EQ(vec.get_size(), 0);
}

TEST(VectorTest, Push_Back_Increases_Size) {
    Vector<int> vec;
    vec.push_back(42);
    EXPECT_EQ(vec.get_size(), 1);
    EXPECT_TRUE(vec.has_item(42));
}

TEST(VectorTest, Insert_At_Valid_Position) {
    Vector<int> vec;
    vec.push_back(1);
    vec.push_back(3);
    EXPECT_TRUE(vec.insert(1, 2));
    EXPECT_EQ(vec.get_size(), 3);
    EXPECT_TRUE(vec.has_item(2));
}

TEST(VectorTest, Insert_At_Invalid_Position) {
    Vector<int> vec;
    vec.push_back(10);
    EXPECT_FALSE(vec.insert(2, 99));
}

TEST(VectorTest, Remove_First_Existing) {
    Vector<int> vec;
    vec.push_back(5);
    vec.push_back(6);
    EXPECT_TRUE(vec.remove_first(5));
    EXPECT_EQ(vec.get_size(), 1);
    EXPECT_FALSE(vec.has_item(5));
}

TEST(VectorTest, Remove_FirstNon_Existing) {
    Vector<int> vec;
    vec.push_back(1);
    EXPECT_FALSE(vec.remove_first(42));
}
