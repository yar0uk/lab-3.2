// Lab_03_2.cpp
// �������� �������
// ����������� ������ � 3.2
// ������������, ������ ��������: ������� � �����������.
// ������ 18
#include <iostream>
using namespace std;
int main()
{
	double x; // ������� ��������
	double a; // ������� ��������
	double b; // ������� ��������
	double c; // ������� ��������
	double F; // ��������� ���������� ������
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "x = "; cin >> x;

	// ����� 1: ������������ � ��������� ����
	if (x < 0 && b != 0)
		F =a*pow(x,2)- b*pow(x,2) ;
	if (x > 0 && b == 0)
		F = (x - a) / (x - c);
	if (!(x < 0 && b != 0) && !(x > 0 && b == 0))
		F = (x+5)/(c*(x-10));
	cout << endl;
	cout << "1) F = " << F << endl;
	// ����� 2: ������������ � ����� ����
	if (x < 0 && b != 0)
		F = a*pow(x,2)-b*pow(x,2);
	else
		if (x > 0 && b == 0)
			F = (x - a) / (x - c);
		else
			F = (x+5)/(c*(x-10));
	cout << "2) F = " << F << endl;
	cin.get();
	return 0;
}