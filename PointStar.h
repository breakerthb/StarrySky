#ifndef __POINT_STAR__
#define __POINT_STAR__

#include "StarType.h"
#include "graphics.h"

class PointStar : public StarType
{
	void Draw(int x, int y, int color)
	{
		putpixel((int)x, y, color);
		setcolor(color);
		circle(x, y, 1);
	}

	void Remove(int x, int y)
	{
		putpixel((int)x, y, 0);
		setcolor(0);
		circle(x, y, 1);
	}
};

#endif