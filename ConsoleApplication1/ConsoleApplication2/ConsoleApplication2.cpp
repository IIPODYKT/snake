// ConsoleApplication2.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
void draw(int x, int y, char sim)
{
	COORD position;                                     // ���������� ����������� ���������
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);  // ��������� ����������� ���������� ������������ ������
	position.X = x;                                     // ��������� ���������� X
	position.Y = y;                                     // ��������� ���������� Y
	SetConsoleCursorPosition(hConsole, position);       // ����������� ������� �� �������� �����������
	cout << sim;                                        // ����� ���������
}
void main()
{
	int x1 = 1,y1=3;
	char sim1 = '*';
	draw(x1, y1, sim1);
	int x2 = 2, y2 = 5;
	char sim2 = '#';
	draw(x2, y2, sim2);
	system("pause");
}