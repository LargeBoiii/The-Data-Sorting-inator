#include "DrawArray.h"

//when theres swapping left to do
void DrawArray(std::array<int, arraySize>& arr, std::pair<int, int> swap)
{

	int temp = arr[swap.first];
	arr[swap.first] = arr[swap.second];
	arr[swap.second] = temp;
	
	for (int i = 0; i < arraySize; i++)
	{
		if (i == swap.first || i == swap.second)
		{
			DrawRectangle(10 + (width + 2) * i, (SCREENHEIGHT - 10) - arr[i], width, arr[i], RED);
		}
		else
		{
			DrawRectangle(10 + (width + 2) * i, (SCREENHEIGHT - 10) - arr[i], width, arr[i], WHITE);
		}
	}

}

//when drawing already sorted array
void DrawArray(std::array<int, arraySize>& arr)
{
	for (int i = 0; i < arraySize; i++)
	{
		DrawRectangle(10 + (width + 2) * i, (SCREENHEIGHT - 10) - arr[i], width, arr[i], WHITE);
	}
}