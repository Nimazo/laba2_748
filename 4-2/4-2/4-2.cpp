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
	cout << "������� X = ";             
	cin >> X;                         
	f = abs(sin(X));
	while (f > 0.1)
	{
		f = abs(sin(f));
		a = a + 1;
	}
	cout << "������ ����� �� ����� ������ 0.1  ����� ������� : " << a << " � ��������: "<< f <<"\n";
	system("pause");
}
