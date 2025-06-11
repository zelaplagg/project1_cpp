#include "sortAlgorithms.h"
#include <gtest/gtest.h>
#include <vector>
#include <algorithm>
TEST(SortAlgorithmsTest, SortsCorrectly) {
    std::vector<int> v = {3,1,4,1,5,9};
    quickSort(v);
    EXPECT_TRUE(std::is_sorted(v.begin(), v.end()));
}
TEST(SortAlgorithmsTest, EmptyVector) {
    std::vector<int> v;
    quickSort(v);
    EXPECT_TRUE(v.empty());
}
TEST(SortAlgorithmsTest, SingleElement) {
    std::vector<int> v = {42};
    quickSort(v);
    EXPECT_EQ(v.size(), 1);
    EXPECT_EQ(v[0], 42);
}
