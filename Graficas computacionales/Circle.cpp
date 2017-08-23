#include"Circle.h"

Circle::Circle()
{
	_radious = 1.0;
	_color = "red";
}

Circle::Circle(double r)
{
	_radious = r;
	_color = "red";
}

Circle::Circle(double r, std::string c)
{
	_radious = r;
	_color = c;
}

double Circle::GetRadious()
{
	return _radious;
}

std::string Circle::GetColor()
{
	return _color;
}

double Circle::GetArea()
{
	return 3.14159*_radious*_radious;
}

void Circle::SetRadious(double r)
{
	_radious=r;
}

void Circle::SetColor(std::string c)
{
	_color = c;
}
