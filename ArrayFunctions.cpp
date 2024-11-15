#include "ArrayFunctions.h"
//TODO: v2: let user decide array size, then call a func to gen an array of this size

//array creation section

std::mt19937 mt{ std::random_device{}()};
std::uniform_int_distribution arrayRange{ 1,1000 };

std::array<int, arraySize>& randomArray()
{
	static std::array<int, arraySize> randomArray;
	for (int i = 0; i < arraySize; i++)
	{
		randomArray[i] = arrayRange(mt);
	}
	return randomArray;
}

//sorting algorithms are here for now, might get moved or not idk :D
void BubbleSort(std::array<int, arraySize>& arr, Queue& q)
{
	int temp = { 0 };
	for (int i = 0; i < arraySize; i++)
	{
		for (int j = 0; j < arraySize - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				q.InsertAtBack({ j,j + 1 });
			}
		}
	}
}

void SelectionSort(std::array<int, arraySize>& arr, Queue q)
{
	int temp = { 0 };
	int minIndex = 0;
	int min = arr[0];
	for (int outer = 0; outer < arraySize; outer++)
	{
		for (int inner = outer + 1; inner < arraySize; inner++)
		{
			if (arr[inner] < arr[minIndex])
			{
				minIndex = inner;
				min = arr[inner];
			}
		}
		temp = arr[outer];
		arr[outer] = arr[min];
		arr[minIndex] = temp;
		q.InsertAtBack({ outer,minIndex });
	}
	
}