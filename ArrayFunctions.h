#include <array>
#include <random>
#include "Constants.h"
#include <utility>
#include "Queue.h"
#ifndef ARRAYGEN
#define ARRAYGEN
std::array<int, arraySize>& randomArray();
void BubbleSort(std::array<int, arraySize>& arr, Queue& q);
void SelectionSort(std::array<int, arraySize>& arr, Queue& q);
#endif