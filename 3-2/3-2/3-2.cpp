#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");     //���������� ������� �������
	int n, i;                            //������������� ��� ����������
	double f,a;
	cout << "������� n = ";             //������� �� �����
	cin >> n;                         //������������ ������ �����
	f = sin(1);
	a = 0, 1;
	for (i = 1; i <= n; i++)
	{
		f = f + sin(1 + pow(a, i));
	}
	cout << "����� ����� " << f <<"\n";
	system("pause");
}
