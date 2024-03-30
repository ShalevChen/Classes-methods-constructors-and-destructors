#include "Grid.h"

Grid::Grid(double tileW, double tileH, int width, int height, int color)
{
	this->sum_of_rectangel = width * height;
	r = new Rectangle * [sum_of_rectangel];

	// we create them
	int left = 0;
	int top = 0;
	for (int i = 0; i < sum_of_rectangel; ++i)
	{
		r[i] = new Rectangle(left * tileW, top * tileH, tileW, tileH, color);
		++top;
		if (top==height)
		{
			top = 0;
			++left;
		}
	}
}



Rectangle* Grid::getRectAtPoint(const Point& p)
{
	Rectangle* rr=nullptr;
	for (int i = 0; i < sum_of_rectangel; ++i)
	{
		if (r[i]->contains(p))
		{
			rr = r[i];
		}
	}

	return rr;
}

Rectangle* Grid::getRectAtIndex(int i)
{
	return r[i];
}

void Grid::moveGrid(double deltaLeft, double deltaTop)
{
	for (int i = 0; i < sum_of_rectangel; ++i)
	{
		r[i]->moveRect(deltaLeft, deltaTop);
	}
}

void Grid::scaleGrid(double rectWidth, double rectHeight)
{
	for (int i = 0; i < sum_of_rectangel; ++i)
	{
		r[i]->scaleRect(rectWidth, rectHeight);
	}

}


Grid::~Grid()
{
	for (int i = 0; i < sum_of_rectangel; ++i)
	{
		delete r[i];   // כל מלבן שברשת נמחק
	}
	delete[]r; // כל הרשת
}