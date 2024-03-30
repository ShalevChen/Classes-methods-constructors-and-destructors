#ifndef _GRID
#define _GRID

#include "Rectangle.h"

using namespace std;

class Grid // רשת 
{
public:
	Grid(double tileW, double tileH, int width, int height, int color);
	~Grid();

public:
	Rectangle* getRectAtPoint(const Point& p);
	Rectangle* getRectAtIndex(int i);

public:
	void moveGrid(double deltaLeft, double deltaTop);
	void scaleGrid(double rectWidth, double rectHeight);

private:
	
	Rectangle** r;
	int sum_of_rectangel ;
};

#endif#pragma once
