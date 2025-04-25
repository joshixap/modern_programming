#include <gtest/gtest.h>
#include "doubly_linked_list.hpp"

using biv::DoublyLinkedList;

TEST(DoublyLinkedListTest, Initially_Empty) {
    DoublyLinkedList<int> list;
    EXPECT_EQ(list.get_size(), 0);
    EXPECT_FALSE(list.has_item(1));
}

TEST(DoublyLinkedListTest, Push_Back_Increases_Size) {
    DoublyLinkedList<int> list;
    list.push_back(10);
    EXPECT_EQ(list.get_size(), 1);
    EXPECT_TRUE(list.has_item(10));
}

TEST(DoublyLinkedListTest, Remove_First_Existing) {
    DoublyLinkedList<int> list;
    list.push_back(1);
    list.push_back(2);
    list.push_back(3);
    EXPECT_TRUE(list.remove_first(2));
    EXPECT_EQ(list.get_size(), 2);
    EXPECT_FALSE(list.has_item(2));
}

TEST(DoublyLinkedListTest, Remove_First_Non_Existing) {
    DoublyLinkedList<int> list;
    list.push_back(100);
    EXPECT_FALSE(list.remove_first(200));
    EXPECT_EQ(list.get_size(), 1);
}
