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
	cout << "Введите количество треугольников в массиве:";
	cin >> size;

	re_triangle *triangles = new re_triangle [size];
	for (i = 0; i < size; i++)
	{
		cat1 = 1 + rand() % 15;
		cat2 = 1 + rand() % 15;
		cout << "Катеты треугольника" << i << ":" << cat1 << " " << cat2 << endl;
		triangles[i].Setcatet1(cat1);
		triangles[i].Setcatet2(cat2);
	}
	cout << "Введите индекс треугольника к которому будет применена операция :";
	cin >> i;
	cout << "Выберите операцию (1 - увеличение/уменьшение, 2 - нахождение радиуса описанной окружности, 3 - нахождение полупериметра, 4 - нахождение всех углов): ";
	cin >> ind;
	switch (ind)
	{
	case 1:
		cout << "Выберите катет для изменения размеров (1 или 2):" << endl;
		cin >> cat_index;
		cout << "Выберите операцию (1- увеличение, 0 - уменьшение):" << endl;
		cin >> increase;
		cout << "Введите на скольку увеличивать/уменьшать сторону:" << endl;
		cin >> percent;
		cout << "Размер измененной стороны:" << triangles[i].scale(cat_index, percent, increase)<< endl;
		break;
	case 2:
		cout << "Радиус описанной окружности:" << triangles[i].Radius_of_the_circumscribed_circle() << endl;
		break;
	case 3:
		cout << "Полупериметр:" << triangles[i].half_per() << endl;
		break;
	case 4:
		cout << "Углы:" << endl;
		cout << "90" << endl;
		cout << triangles[i].one_of_the_corners() << endl;
		cout << triangles[i].second_corner();
		break;
	}	
	system("pause");
}