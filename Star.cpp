#include "graphics.h"
#include "Star.h"

void Star::Init()
{
	if (m_x == 0)
	{
		m_x = rand() % SCREEN_WIDTH;
	}
	else
	{
		m_x = 0;
	}

	m_y = rand() % SCREEN_HEIGHT;
	m_step = (rand() % 5000) / 1000.0 + 1;
	m_color = (int)(m_step * 255 / 6.0 + 0.5);	// 速度越快，颜色越亮
	m_color = RGB(m_color, m_color, m_color);
}

void Star::Init(StarType* pStarType)
{
	this->Init();
	m_pStarType = pStarType;
}

void Star::Move()
{
	m_pStarType->Remove(m_x, m_y);

	NewPos();

	m_pStarType->Draw(m_x, m_y, m_color);
}

void Star::NewPos()
{
	m_x += m_step;
	if (m_x > SCREEN_WIDTH)
		this->Init();
}