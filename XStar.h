#ifndef __X_STAR__
#define __X_STAR__

#include "StarType.h"
#include "graphics.h"

class XStar : public StarType
{
	void Draw(int x, int y, int color)
	{
		settextcolor(color);
		outtextxy(x, y, _T("x"));
	}

	void Remove(int x, int y)
	{
		settextcolor(0);
		outtextxy(x, y, _T("x"));
	}
};

#endif