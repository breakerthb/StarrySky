#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

#include <graphics.h>
#include <time.h>
#include <conio.h>

#include "Star.h"

#include "PointStar.h"
#include "RectStar.h"
#include "XStar.h"

#define MAXSTAR	400	

void main()
{
	srand((unsigned)time(NULL));
	
	initgraph(SCREEN_WIDTH, SCREEN_HEIGHT);	

	Star star[MAXSTAR];

	PointStar pointStar;
	RectStar rectStar;
	XStar xStar;
	for (int i = 0; i < MAXSTAR; i++)
	{
		switch (i % 3)
		{
		case 0:
			star[i].Init(&pointStar);
			break;
		case 1:
			star[i].Init(&rectStar);
			break;
		case 2:
			star[i].Init(&xStar);
			break;
		default:
			break;
		}
	}

	while (!kbhit())
	{
		for (int i = 0; i < MAXSTAR; i++)
		{
			star[i].Move();
		}
	
		Sleep(50);
	}

	closegraph();
}
