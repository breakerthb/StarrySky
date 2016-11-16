#ifndef __STAR_H__
#define __STAR_H__

#include "StarType.h"

#define SCREEN_WIDTH	1024
#define SCREEN_HEIGHT	768

class Star
{
public:
	Star(){}
	~Star(){}

	void Init();
	void Init(StarType* pStarType);
	void Move();

protected:
	void NewPos();

	double	m_x = 0;
	int		m_y;
	double	m_step;
	int		m_color;

	StarType* m_pStarType;
};

#endif