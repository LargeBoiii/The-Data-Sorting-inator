#include <array>
#include <utility>
#include "Constants.h"
#include <raylib.h>
#ifndef DRAWARRAY
#define DRAWARRAY
	void DrawArray(std::array<int, arraySize>& arr, std::pair<int, int> swap);
	void DrawArray(std::array<int, arraySize>& arr);
#endif
