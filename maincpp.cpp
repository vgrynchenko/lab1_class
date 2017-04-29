#include "Header.h"
#include <iostream>
#include <cmath>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Russian");
	int cat_index, ind, size, i;
	double percent, cat1, cat2;
	bool increase;
	cout << "Enter the number of triangles in the array:";
	cin >> size;

	re_triangle *triangles = new re_triangle [size];
	for (i = 0; i < size; i++)
	{
		cat1 = 1 + rand() % 15;
		cat2 = 1 + rand() % 15;
		cout << "Сathetus of the triangle: " << i << ":" << cat1 << " " << cat2 << endl;
		triangles[i].Setcatet1(cat1);
		triangles[i].Setcatet2(cat2);
	}
	cout << "Enter the index of the triangle for work: ";
	cin >> i;
	cout << "Select an operation (1 - Decrease/Increase, 2 - Radius of the circumscribed circle, 3 - Semiperimeter, 4 - Finding angles): ";
	cin >> ind;
	switch (ind)
	{
	case 1:
		cout << "Select the cathetus for resizing(1 or 2):" << endl;
		cin >> cat_index;
		cout << "Find the operation (1- increase, 0 - decrease):" << endl;
		cin >> increase;
		cout << "Enter the percentage increase/decrease:" << endl;
		cin >> percent;
		cout << "Size of the modified side :" << triangles[i].scale(cat_index, percent, increase)<< endl;
		break;
	case 2:
		cout << "Radius of the circumscribed circle :" << triangles[i].Radius_of_the_circumscribed_circle() << endl;
		break;
	case 3:
		cout << "Semiperimeter:" << triangles[i].half_per() << endl;
		break;
	case 4:
		cout << "Angles:" << endl;
		cout << "90" << endl;
		cout << triangles[i].one_of_the_corners() << endl;
		cout << triangles[i].second_corner();
		break;
	}	
	system("pause");
}
