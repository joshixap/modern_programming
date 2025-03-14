#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "insertion_sort.hpp"

TEST(SortArrayTest, VerifySorting) {
    std::vector<int> actual = {7, 31, 9, 35, 2, 8, 4, 15};
    insertion_sort(actual.data(), actual.size());

    std::vector<int> expected = {2, 4, 7, 8, 9, 15, 31, 35};
    
    ASSERT_EQ(expected.size(), actual.size()) 
        << "Размеры ожидаемого и отсортированного массива не совпадают.";

    for (size_t i = 0; i < actual.size(); ++i) {
        ASSERT_EQ(expected[i], actual[i]) 
            << "Массивы различаются на позиции " << i;
    }
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
