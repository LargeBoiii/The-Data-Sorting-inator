#include <random>
#include "ArrayGen.h"
//#include <iostream>
//#include <iostream>
//v1: call random array gen on run, with preset array size
//TODO: v2: let user decide array size, then call a func to gen an array of this size

std::mt19937 mt{ std::random_device{}()};
std::uniform_int_distribution arrayRange{ 1,1000 };

std::array<int, arraySize>& arrayReference()
{
	static std::array<int, arraySize> randomArray;
	for (int i = 0; i < 500; i++)
	{
		randomArray[i] = arrayRange(mt);
		//std::cout << randomArray[i] << '\n';
	}
	return randomArray;
}