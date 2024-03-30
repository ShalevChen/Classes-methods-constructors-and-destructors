#include "Point.h"

Point::Point(double x, double y)
{
	this->my_x = x;
	this->my_y = y;
	this->my_ScaleX= 1;
	this->my_ScaleY= 1;
}

double Point::getX() const
{
	return this->my_x*my_ScaleX;
}

double Point::getY() const
{
	return this->my_y*my_ScaleY;
}

void Point::setX(double x)
{
	this->my_x = x;
}

void Point::setY(double y)
{
	this->my_y = y;
}

void Point::setScaleX(double scaleX)
{
	this->my_ScaleX = scaleX;
}

void Point::setScaleY(double scaleY)
{
	this->my_ScaleY = scaleY;
}
