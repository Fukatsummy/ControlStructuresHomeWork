#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	double a;
	int s;
	double n = 1;

	cout << "������� �����: "; cin >> a;
	cout << "������� �������: "; cin >> s;

	for (int i = 0; i < s; i++)
	{
		n *= a;
	}
	cout << "���������: " << n << endl;
}