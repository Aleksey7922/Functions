#include<iostream>
#include<cmath>
using namespace std;


int Add(int a, int b);// �������� �������, ��� ���������� ������� 
int Sub(int a, int b);
int Mul(int a, int b);
int Div(int a, int b);
int Pow(int a, int b);

void main()
{
	setlocale(LC_ALL, "rus");

	int a, b;
	cout << "������� ��� ����� "; cin >> a >> b;
	int c = Add(a, b);// ������������ ������� ,��� ����� ������� Function call
	cout << a << "+" << b << "=" << c << endl;
	cout << a << "-" << b << "=" << Sub(a, b) << endl;
	cout << a << "*" << b << "=" << Mul(a, b) << endl;
	cout << a << "/" << b << "=" << Div(a, b) << endl;	
	cout << a << "^" << b << "=" << Pow(a,b);
}
int Add(int a, int b)//..���������� ������� , ���������� ������� Function derinition
{
	//��������
	int sum = a + b;
	return sum;
}
int Sub(int a, int b)
{
	//Subtraction ���������
	return a - b;
}
int Mul(int a, int b)
{
	//���������
	return a * b;
}
int Div(int a, int b)
{
	//Division ������� 
	return a / b;
}
int Pow(int a, int b)
{
   // ���������� � ������� 
	int result = 1;
	for (int i = 0; i < b; i++)
	{
		result *= a;
	}
	return result;
}





