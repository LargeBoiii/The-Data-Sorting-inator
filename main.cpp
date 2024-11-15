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
	

	BubbleSort(arrToBeSorted, q);
	//SelectionSort(arrToBeSorted, q);
	while (!WindowShouldClose() && !DrawOverride)
	{
		BeginDrawing();
		ClearBackground(BLACK);
		
		if (!q.IsEmpty())
		{
			if (IsKeyDown(32))
			{
				DrawArray( arr, q.GetFirstElement() );
			}
			else
			{
				DrawArray(arr);
			}
		}
		if (q.IsEmpty())
		{
			DrawArray(arr);
		}
		EndDrawing();
	}

	//de-initialisation of window
	CloseWindow();
	return 0;
}

