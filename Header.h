#pragma once

class re_triangle
{
private:
	double cat1, cat2;
public:
	re_triangle(double, double);
	re_triangle();
	void Setcatet1(double);
	void Setcatet2(double);
	double scale(int, double, bool);
	double Radius_of_the_circumscribed_circle();
	double half_per();
	double one_of_the_corners();
	double second_corner();
};

