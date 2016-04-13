// ConsoleApplication2.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include "Point.h"
void main()
{
	Point p1(1,3,'*');
	p1.Draw();
	Point p2(2,5,'#');
	p2.Draw();
	system("pause");
}