#include <iostream>
#include "ArrayFunctions.h"
#include "Constants.h"
#include "Queue.h"
//0,0 top left corner, x+-> right y+ -> down
//TODO: add a way to swap array elements, implement sorting algos i guess lol

int main()
{
	//constants, set array and window params

	InitWindow(SCREENWIDTH, SCREENHEIGHT, "The Data Sorting-inator");
	SetTargetFPS(FPS);
	std::array<int, arraySize> arr = randomArray();
	int testArrayLength = arr.size();
	int startPos = 100;
	
	Queue q = Queue();
	

	//main draw loop 
	while (!WindowShouldClose())
	{
		BeginDrawing();
		ClearBackground(DARKGRAY);
		for (int i = 0; i < testArrayLength; i++)
		{
			DrawRectangle(10 + 22 * i, (SCREENHEIGHT - 10) - arr[i], 20 , arr[i], SKYBLUE);
		}

		EndDrawing();
	}


	//de-initialisation of window
	CloseWindow();
	return 0;
}