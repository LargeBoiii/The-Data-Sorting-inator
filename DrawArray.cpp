#include "DrawArray.h"

void DrawArray(std::array<int, arraySize>& arr, std::pair<int, int> swap)
{

	int temp = arr[swap.first];
	arr[swap.first] = arr[swap.second];
	arr[swap.second] = temp;
	
	//draw swapped around array
	for (int i = 0; i < arraySize; i++)
	{
		DrawRectangle(10 + (width+2) * i, (SCREENHEIGHT - 10) - arr[i], width, arr[i], SKYBLUE);
	}

}

void DrawArray(std::array<int, arraySize>& arr)
{
	for (int i = 0; i < arraySize; i++)
	{
		DrawRectangle(10 + (width + 2) * i, (SCREENHEIGHT - 10) - arr[i], width, arr[i], SKYBLUE);
	}
}