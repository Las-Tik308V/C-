#include <iostream>
#include <Windows.h>
#include <math.h>

using namespace std;

int main() //Главная функция
{
 SetConsoleOutputCP(1251); //Русификатор

 double X1, X2, X3, Y1, Y2, Y3, a, b, c, p, Strig; //Локальные переменные

 cout << "введите исходные вершины вашего треугольника:"; //вывод на экран
 cin >> X1 >> Y1 >> X2 >> Y2 >> X3 >> Y3; //ввод исходных данных

 a = sqrt((X2 - X3) * (X2 - X3) + (Y2 - Y3) * (Y2 - Y3)); //Расчёт длины
 b = sqrt((X1 - X3) * (X1 - X3) + (Y1 - Y3) * (Y1 - Y3)); //Расчёт длины
 c = sqrt((X2 - X1) * (X2 - X1) + (Y2 - Y1) * (Y2 - Y1)); //Расчёт длины
 p = ((a + b + c) / 2); //Расчёт периметра
 Strig = sqrt(p * (p - a) * (p - b) * (p - c)); //Расчёт площади

 cout << "Площадь треугольника =:" << Strig; //Вывод на экран
}
