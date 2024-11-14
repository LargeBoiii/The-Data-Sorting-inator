#include <iostream>
#include "ArrayFunctions.h"
#include "Constants.h"
#include "Queue.h"
#include "DrawArray.h"
//0,0 top left corner, x+-> right y+ -> down

int main()
{
	//constants, set array and window params

	InitWindow(SCREENWIDTH, SCREENHEIGHT, "The Data Sorting-inator");
	SetTargetFPS(FPS);
	std::array<int, arraySize> arrToBeSorted = randomArray();
	std::array<int, arraySize> arr = arrToBeSorted;
	int startPos = 100;

	Queue q = Queue();
	bool DrawOverride = false;
	//std::cout << "overriding draw fuck you\n";

	BubbleSort(arrToBeSorted, q);
	while (!WindowShouldClose() && !DrawOverride)
	{
		BeginDrawing();
		ClearBackground(DARKGRAY);
		DrawArray(arr);
		if (!q.IsEmpty())
		{
			if (IsKeyDown(32))
			{
				DrawArray( arr, q.GetFirstElement() );
			}
		}
		EndDrawing();
	}

	//de-initialisation of window
	CloseWindow();
	return 0;
}

