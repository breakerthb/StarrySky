#ifndef __STAR_TYPE__
#define __STAR_TYPE__

class StarType
{
public:
	virtual void Draw(int x, int y, int color) = 0;
	virtual void Remove(int x, int y) = 0;
};

#endif