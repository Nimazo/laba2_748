#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");                                
	int a;
	double f, X;
	a = 1;
	cout << "¬ведите X = ";             
	cin >> X;                         
	f = abs(sin(X));
	while (f > 0.1)
	{
		f = abs(sin(f));
		a = a + 1;
	}
	cout << "ѕервое число по модую меньше 0.1  имеет пор€док : " << a << " и значение: "<< f <<"\n";
	system("pause");
}
