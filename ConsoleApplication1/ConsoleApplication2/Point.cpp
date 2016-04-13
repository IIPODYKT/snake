#include "stdafx.h"
#include "Point.h"

void Point::Draw()
{
	COORD position;                                     // Объявление необходимой структуры
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);  // Получение дескриптора устройства стандартного вывода
	position.X = x;                                     // Установка координаты X
	position.Y = y;                                     // Установка координаты Y
	SetConsoleCursorPosition(hConsole, position);       // Перемещение каретки по заданным координатам
	cout << sim;										// Вывод сообщения
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