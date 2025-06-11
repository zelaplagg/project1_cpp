#include "sortAlgorithms.h"
#include <algorithm>
void quickSort(std::vector<int>& arr) {
    if (arr.size() <= 1) return;
    std::sort(arr.begin(), arr.end());
}
