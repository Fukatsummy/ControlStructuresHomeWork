#include<iostream>
using namespace std;

//#define TASK_1
//#define TASK_2

void main()
{
	setlocale(LC_ALL, "");
#ifdef TASK_1
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
#endif // TASK_1


#ifdef TASK_2
	int a;
	double n = 1;
	cout << "������� �����: "; cin >> a;
	for (int i = 1; i <= a; i++)
	{
		n = n * i;
		cout << "��������� �����: " << n << endl;
	}
	cout << endl;
#endif // TASK_2

	int n;
	cout << "������� ������ ���� ���������: "; cin >> n;
	int a = 0, b = 1, c = a + b;
	for (; a < n; a = b, b = c, c = a + b)
	{
		cout << a << "\t";
	}
	cout << endl;
}