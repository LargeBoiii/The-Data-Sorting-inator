#include <raylib.h>
#include <iostream>
#include "ArrayGen.h"
//0,0 top left corner, x+-> right y+ -> down

int main()
{
	//initialisation
	const int SCREENWIDTH = 1920;
	const int SCREENHEIGHT = 1080;

	InitWindow(SCREENWIDTH, SCREENHEIGHT, "The Data Sorting-inator");
	SetTargetFPS(60);
	std::array<int, arraySize> testArray = arrayReference();
	int testArrayLength = sizeof(testArray) / sizeof(testArray[0]);
	int startPos = 100;
	

	//main draw loop 
	while (!WindowShouldClose())
	{
		BeginDrawing();
		ClearBackground(RAYWHITE);
		for (int i = 0; i < arraySize; i++)
		{
			DrawRectangle(0 + 4 * i, 1000 - testArray[i], 3, testArray[i], RED);
		}
		EndDrawing();
	}


	//de-initialisation of window
	CloseWindow();
	return 0;
}