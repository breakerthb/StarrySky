#ifndef __RECT_STAR__
#define __RECT_STAR__

#include "StarType.h"
#include "graphics.h"

class RectStar : public StarType
{
	void Draw(int x, int y, int color)
	{
		putpixel((int)x, y, color);
		setcolor(color);
		rectangle(x - 1, y - 1, x + 1, y + 1);
	}

	void Remove(int x, int y)
	{
		putpixel((int)x, y, 0);
		setcolor(0);
		rectangle(x - 1, y - 1, x + 1, y + 1);
	}
};

#endif