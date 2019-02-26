#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");     //Подключаем русские символы
	int n, i;                            //Целочисленный тип переменных
	double f,a;
	cout << "Введите n = ";             //выводит на экран
	cin >> n;                         //Пользователь вводит число
	f = sin(1);
	a = 0, 1;
	for (i = 1; i <= n; i++)
	{
		f = f + sin(1 + pow(a, i));
	}
	cout << "Сумма равна " << f <<"\n";
	system("pause");
}
