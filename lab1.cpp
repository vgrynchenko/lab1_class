#include "Header.h"
#include <iostream>
#include <cmath>
using namespace std;
		re_triangle :: re_triangle(double cat1, double cat2)
		{
			if (cat1 <= 0 || cat2 <= 0)
			{
				return;
			}
			this->cat1 = cat1;
			this->cat2 = cat2;
		}
		re_triangle::re_triangle()
		{
			cat1 = 0;
			cat2 = 0;
		}
		void re_triangle::Setcatet1(double val)
		{
			cat1 = val;
		}
		void re_triangle::Setcatet2( double val)
		{
			cat2 = val;
		}
		double re_triangle:: scale(int cat_index, double percent, bool increase)
		{
			if (cat_index == 1)
			{
				cat1 = cat1 + cat1 / 100 * percent * pow(-1, increase + 1);
				return cat1;
				
			}
			else if (cat_index == 2)
			{
				cat2 = cat2 + cat2 / 100 * percent * pow(-1, increase + 1);	
				return cat2;
			}
			else
			{
				return -1;
			}
		}
		double re_triangle::Radius_of_the_circumscribed_circle()
		{
			return sqrt(cat1 * cat1 + cat2 * cat2) / 2;
		}
		double re_triangle::half_per()
		{
			return (cat1 + cat2 + sqrt(cat1 * cat1 + cat2 * cat2)) / 2;
		}
		double re_triangle::one_of_the_corners()
		{
			return asin(cat1 / sqrt(cat1 * cat1 + cat2 * cat2)) / 3.1415926535 * 180;
		}
		double re_triangle::second_corner()
		{
			return 90 - one_of_the_corners();
		}