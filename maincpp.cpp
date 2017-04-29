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
	cout << "Ââåäèòå êîëè÷åñòâî òðåóãîëüíèêîâ â ìàññèâå:";
	cin >> size;

	re_triangle *triangles = new re_triangle [size];
	for (i = 0; i < size; i++)
	{
		cat1 = 1 + rand() % 15;
		cat2 = 1 + rand() % 15;
		cout << "Êàòåòû òðåóãîëüíèêà" << i << ":" << cat1 << " " << cat2 << endl;
		triangles[i].Setcatet1(cat1);
		triangles[i].Setcatet2(cat2);
	}
	cout << "å èíäåêñ òðåóãîëüíèêà ê êîòîðîìó áóäåò ïðèìåíåíà îïåðàöèÿ :";
	cin >> i;
	cout << "Âûáåðèòå îïåðàöèþ (1 - óâåëè÷åíèå/óìåíüøåíèå, 2 - íàõîæäåíèå ðàäèóñà îïèñàííîé îêðóæíîñòè, 3 - íàõîæäåíèå ïîëóïåðèìåòðà, 4 - íàõîæäåíèå âñåõ óãëîâ): ";
	cin >> ind;
	switch (ind)
	{
	case 1:
		cout << "Âûáåðèòå êàòåò äëÿ èçìåíåíèÿ ðàçìåðîâ (1 èëè 2):" << endl;
		cin >> cat_index;
		cout << "Âûáåðèòå îïåðàöèþ (1- óâåëè÷åíèå, 0 - óìåíüøåíèå):" << endl;
		cin >> increase;
		cout << "Ââåäèòå íà ñêîëüêó óâåëè÷èâàòü/óìåíüøàòü ñòîðîíó:" << endl;
		cin >> percent;
		cout << "Ðàçìåð èçìåíåííîé ñòîðîíû:" << triangles[i].scale(cat_index, percent, increase)<< endl;
		break;
	case 2:
		cout << "Ðàäèóñ îïèñàííîé îêðóæíîñòè:" << triangles[i].Radius_of_the_circumscribed_circle() << endl;
		break;
	case 3:
		cout << "Ïîëóïåðèìåòð:" << triangles[i].half_per() << endl;
		break;
	case 4:
		cout << "Óãëû:" << endl;
		cout << "90" << endl;
		cout << triangles[i].one_of_the_corners() << endl;
		cout << triangles[i].second_corner();
		break;
	}	
	system("pause");
}
