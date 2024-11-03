#include <array>
#ifndef ARRAYGEN
#define ARRAYGEN
constexpr int arraySize = 250;
std::array<int, arraySize>& arrayReference();
void BubbleSort(std::array<int, arraySize>& arr);
#endif