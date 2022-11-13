#include<iostream>

using namespace std;

void FillRand(int arr[], const int n, int minRand=0, int maxRand=5);
void Print(int arr[], const int n);
int Sum(int arr[], const int n);
double Avg (int arr[], const int n);
int minValuein(int arr[], const int n);
int maxValuein(int arr[], const int n);
void shiftLeft(int arr[], const int n, int number_of_shifts);
void shiftRight(int arr[], const int n, int number_of_shifts);
void Sort(int arr[], const int n);


void main()
{
	setlocale(LC_ALL, "RUS");
	int buffer = 0;
	int numb_ent=0;
	int sum = 0;
	const int n = 10;
	int arr[n] = {0,1,2,3,4,5,6,7,8,9};

	FillRand(arr, n );
	Print(arr, n);
	

	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Cреднее арифм элементов массива: " << Avg(arr, n) << endl;
	cout << "Минимальное  значение в массиве: " << minValuein(arr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValuein(arr, n) << endl;
	Sort(arr, n);
	Print(arr, n);
	int number_of_shifts;
	cout << "Введите количечтво сдвигов: "; cin >> number_of_shifts;
	shiftLeft(arr, n, number_of_shifts);
	Print(arr, n);
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	shiftRight(arr, n, number_of_shifts);
	Print(arr, n);

}

void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	//заполнение случайными числами
	if (minRand > maxRand)
	{
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (minRand - maxRand) + minRand;
	}

}

void Print(int arr[], const int n)
{
	//вывод на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

int Sum(int arr[], const int n)
{
	
		//сумма элементов массива
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

double Avg (int arr[], const int n)
{
//среднее аифметическое массива
	return (double) Sum (arr, n) / n;
}

int minValuein(int arr[], const int n)
{
	//
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		
		if (arr[i] < min)min = arr[i];

		
	}
	return min;
}


int maxValuein(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{

		if (arr[i] > max)max = arr[i];


	}
	return max;
}

void shiftLeft(int arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
	int buffer = arr[0];
	for (int i = 0; i < n; i++)
	{
		arr[i] = arr[i + 1];
	}
	arr[n - 1] = buffer;
	}
}

void shiftRight(int arr[], const int n, int number_of_shifts)
{
	shiftRight(arr, n, n - number_of_shifts);
}

void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}

}

