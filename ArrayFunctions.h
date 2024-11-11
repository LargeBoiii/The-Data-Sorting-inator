#include <array>
#include <random>
#include <raylib.h>
#ifndef ARRAYGEN
#define ARRAYGEN
constexpr int arraySize = 86;
std::array<int, arraySize>& randomArray();
void BubbleSort(std::array<int, arraySize>& arr);
#endif