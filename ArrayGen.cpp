#include <random>
#include "ArrayGen.h"
//#include <iostream>
//v1: call random array gen on run, with preset array size
//TODO: v2: let user decide array size, then call a func to gen an array of this size

std::mt19937 mt{};
std::uniform_int_distribution arrayRange{ 1,100 };

std::array<int, arraySize>& arrayReference()
{
	static std::array<int, arraySize> randomArray;
	for (int i = 0; i < 500; i++)
	{
		randomArray[i] = 100;
		//std::cout << "WE ARE HERE " << i << " times \n";
	}
	return randomArray;
}