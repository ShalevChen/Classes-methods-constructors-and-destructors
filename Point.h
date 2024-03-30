#ifndef _POINT
#define _POINT

using namespace std;

class Point
{
public:
	Point(double x, double y);

public:
	double getX() const;
	double getY() const;
	void setX(double x);
	void setY(double y);
	void setScaleX(double scaleX);
	void setScaleY(double scaleY);
private:
	double my_x;
	double my_y;
	double my_ScaleX;
	double my_ScaleY;


};

#endif
