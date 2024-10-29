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
	int testArrayLength = sizeof(arraySize) / sizeof(testArray[0]);
	int startPos = 100;
	

	//main draw loop 
	while (!WindowShouldClose())
	{
		BeginDrawing();
		ClearBackground(RAYWHITE);
		for (int i = 0; i < testArrayLength; i++)
		{
			
		}
		EndDrawing();
	}


	//de-initialisation of window
	CloseWindow();
	return 0;
}