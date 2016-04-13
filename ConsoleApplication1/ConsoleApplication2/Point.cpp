#include "stdafx.h"
#include "Point.h"

void Point::Draw()
{
	COORD position;                                     // ���������� ����������� ���������
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);  // ��������� ����������� ���������� ������������ ������
	position.X = x;                                     // ��������� ���������� X
	position.Y = y;                                     // ��������� ���������� Y
	SetConsoleCursorPosition(hConsole, position);       // ����������� ������� �� �������� �����������
	cout << sim;										// ����� ���������
}
Point::Point(int _x, int _y, char _sim)
{
	x = _x;
	y = _y;
	sim = _sim;
}
Point::Point()
{
}
Point::~Point()
{
}