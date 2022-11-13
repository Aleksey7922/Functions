#include<iostream>
#include<cmath>
using namespace std;


int Add(int a, int b);// прототип функции, иои обьявление функции 
int Sub(int a, int b);
int Mul(int a, int b);
int Div(int a, int b);
int Pow(int a, int b);

void main()
{
	setlocale(LC_ALL, "rus");

	int a, b;
	cout << "введите два числа "; cin >> a >> b;
	int c = Add(a, b);// использовани функции ,или вызов функции Function call
	cout << a << "+" << b << "=" << c << endl;
	cout << a << "-" << b << "=" << Sub(a, b) << endl;
	cout << a << "*" << b << "=" << Mul(a, b) << endl;
	cout << a << "/" << b << "=" << Div(a, b) << endl;	
	cout << a << "^" << b << "=" << Pow(a,b);
}
int Add(int a, int b)//..реализация функции , определени функции Function derinition
{
	//сложение
	int sum = a + b;
	return sum;
}
int Sub(int a, int b)
{
	//Subtraction вычитание
	return a - b;
}
int Mul(int a, int b)
{
	//умножение
	return a * b;
}
int Div(int a, int b)
{
	//Division деление 
	return a / b;
}
int Pow(int a, int b)
{
   // Возведение в степень 
	int result = 1;
	for (int i = 0; i < b; i++)
	{
		result *= a;
	}
	return result;
}





