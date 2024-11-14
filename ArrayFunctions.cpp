#include "ArrayFunctions.h"
//v1: call random array gen on run, with preset array size
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
		//std::cout << randomArray[i] << '\n';
	}
	return randomArray;
}

//sorting algorithms are here for now, will probably move to main to let them handle 
//drawing as part of the function
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