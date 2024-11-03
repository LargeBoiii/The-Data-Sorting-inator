#include <raylib.h>
#include <iostream>
#include "ArrayGen.h"
//0,0 top left corner, x+-> right y+ -> down
//TODO: add a way to swap array elements, implement sorting algos i guess lol

int main()
{
	//constants, set array and window params
	const int SCREENWIDTH = 1920;
	const int SCREENHEIGHT = 1050;

	InitWindow(SCREENWIDTH, SCREENHEIGHT, "The Data Sorting-inator");
	SetTargetFPS(60);
	std::array<int, arraySize> arr = arrayReference();
	int testArrayLength = arr.size();
	int startPos = 100;
	BubbleSort(arr);

	//main draw loop 
	while (!WindowShouldClose())
	{
		BeginDrawing();
		ClearBackground(RAYWHITE);
		//DrawText("were actually getting here", 500, 500,40, BLACK);
		for (int i = 0; i < testArrayLength; i++)
		{
			DrawRectangle(10 + 7 * i, (SCREENHEIGHT - 10) - arr[i], 5, arr[i], RED);
		}

		EndDrawing();
	}


	//de-initialisation of window
	CloseWindow();
	return 0;
}