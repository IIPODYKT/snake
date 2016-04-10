// ConsoleApplication2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
void draw(int x, int y, char sim)
{
	COORD position;                                     // Объявление необходимой структуры
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);  // Получение дескриптора устройства стандартного вывода
	position.X = x;                                     // Установка координаты X
	position.Y = y;                                     // Установка координаты Y
	SetConsoleCursorPosition(hConsole, position);       // Перемещение каретки по заданным координатам
	cout << sim;                                        // Вывод сообщения
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