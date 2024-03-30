#include "Rectangle.h"

int Rectangle::m_count = 0;

Rectangle::Rectangle(double left, double top, double width, double height, int color):topleft (left, top), bottomRight(left + width, top + height)
{
	this->mycolor = color;
	//this->myleft = left;
	//this->mytop = top;
	this->mywidth = width; // רוחב
	this->myheight = height; // גובה
	++m_count;
	
	//setColor(color);
	//topleft = Point(left, top);
	//bottomRight = Point(left + width, top + height);
	
}

	int Rectangle::getColor() const
	{
		return mycolor;
	}

	Point& Rectangle::getTopLeftPoint()
	{
		return topleft;
	}

	Point& Rectangle::getBottomRightPoint()
	{
		return bottomRight;
	}

	void Rectangle::setColor(int color)
	{
		this->mycolor = color;
	}

	bool Rectangle::contains(const Point& p)
	{
		if (this->bottomRight.getX() >= p.getX() && this->bottomRight.getY()>=p.getY() && this->topleft.getX()<=p.getX() && this->topleft.getY()<= p.getY() )
		{
			return true;
		}
		return false;
	}

	void Rectangle::moveRect(double deltaLeft, double deltaTop)
	{
		this->bottomRight.setX(this->bottomRight.getX() + deltaLeft);
		this->bottomRight.setY(this->bottomRight.getY() + deltaTop);
		this->topleft.setX(this->topleft.getX() + deltaLeft);
		this->topleft.setY(this->topleft.getY() + deltaTop);
	}

	void Rectangle::scaleRect(double rectWidth, double rectHeight)
	{
		double mynew1 = bottomRight.getX() - topleft.getX(); // רוחב  4-2 =2 
		bottomRight.setScaleX(rectWidth / mynew1);//3/2=1.5   לפי הדוגמה
		topleft.setScaleX(rectWidth / mynew1);

		double mynew2 = bottomRight.getY() - topleft.getY();   // גובה
		bottomRight.setScaleY(rectHeight / mynew2);
		topleft.setScaleY(rectHeight / mynew2);


	}
	