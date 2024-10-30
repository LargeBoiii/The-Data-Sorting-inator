#include <raylib.h>
#include <iostream>
#include "ArrayGen.h"
//0,0 top left corner, x+-> right y+ -> down
//TODO: add a way to swap array elements, implement sorting algos i guess lol

int main()
{
	//constants, set array and window params
	const int SCREENWIDTH = 1920;
	const int SCREENHEIGHT = 1080;

	InitWindow(SCREENWIDTH, SCREENHEIGHT, "The Data Sorting-inator");
	ToggleBorderlessWindowed();
	SetTargetFPS(60);
	std::array<int, arraySize> arr = arrayReference();
	int testArrayLength = sizeof(arr) / sizeof(arr[0]);
	int startPos = 100;
	

	//main draw loop 
	while (!WindowShouldClose())
	{
		BeginDrawing();
		ClearBackground(RAYWHITE);
		for (int i = 0; i < arraySize; i++)
		{
			DrawRectangle(10 + 7 * i, (SCREENHEIGHT - 10) - arr[i], 5, arr[i], RED);
		}
		EndDrawing();
	}


	//de-initialisation of window
	CloseWindow();
	return 0;
}