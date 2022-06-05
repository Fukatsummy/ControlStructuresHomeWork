#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	double a;
	int s;
	double n = 1;

	cout << "¬ведите число: "; cin >> a;
	cout << "¬ведите степень: "; cin >> s;

	for (int i = 0; i < s; i++)
	{
		n *= a;
	}
	cout << "–езультат: " << n << endl;
}