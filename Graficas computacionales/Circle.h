#pragma once
#include <string>

class Circle
{
public:
	Circle();
	Circle(double r);
	Circle(double r, std::string c);

	double GetRadious();
	std::string GetColor();
	double GetArea();

	void SetRadious(double r);
	void SetColor(std::string c);

private:
	double _radious;
	std::string _color;

};
