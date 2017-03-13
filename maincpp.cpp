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
	cout << "������� ���������� ������������� � �������:";
	cin >> size;

	re_triangle *triangles = new re_triangle [size];
	for (i = 0; i < size; i++)
	{
		cat1 = 1 + rand() % 15;
		cat2 = 1 + rand() % 15;
		cout << "������ ������������" << i << ":" << cat1 << " " << cat2 << endl;
		triangles[i].Setcatet1(cat1);
		triangles[i].Setcatet2(cat2);
	}
	cout << "������� ������ ������������ � �������� ����� ��������� �������� :";
	cin >> i;
	cout << "�������� �������� (1 - ����������/����������, 2 - ���������� ������� ��������� ����������, 3 - ���������� �������������, 4 - ���������� ���� �����): ";
	cin >> ind;
	switch (ind)
	{
	case 1:
		cout << "�������� ����� ��� ��������� �������� (1 ��� 2):" << endl;
		cin >> cat_index;
		cout << "�������� �������� (1- ����������, 0 - ����������):" << endl;
		cin >> increase;
		cout << "������� �� ������� �����������/��������� �������:" << endl;
		cin >> percent;
		cout << "������ ���������� �������:" << triangles[i].scale(cat_index, percent, increase)<< endl;
		break;
	case 2:
		cout << "������ ��������� ����������:" << triangles[i].Radius_of_the_circumscribed_circle() << endl;
		break;
	case 3:
		cout << "������������:" << triangles[i].half_per() << endl;
		break;
	case 4:
		cout << "����:" << endl;
		cout << "90" << endl;
		cout << triangles[i].one_of_the_corners() << endl;
		cout << triangles[i].second_corner();
		break;
	}	
	system("pause");
}