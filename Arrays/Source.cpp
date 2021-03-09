#include<iostream>
using namespace std;

const int ROWS = 8; /*ROWS-строка*/
const int COLS = 7; /*COLS-столбец*/

//заполняет массив случайными числами
void Filrand(int arr[], const int n);
void Filrand(double arr[], const int n);
void Filrand(int arr[ROWS][COLS], const int m, const int n);

//выводит массив на экран
void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(int arr[ROWS][COLS], const int m, const int n);

//сортирует массив
void Sort(int arr[], const int n);
void Sort(double arr[], const int n);
void Sort(int arr[ROWS][COLS], const int m, const int n);

//возвращает сумму элементов массива
int Sum(int arr[], const int n);
double Sum(double arr[], const int n);

//возвращает среднее арифметическое элементов массива
double Avg(int arr[], const int n);
double Avg(double arr[], const int n);


//возвращает минимальное значение, которое есть в массиве
int minValue(int arr[], const int n);
double minValue(double arr[], const int n);

//возвращает максимальное значение, которое есть в массиве
int maxValue(int arr[], const int n);
double maxValue(double arr[], const int n);



#define delimiter "\n----------------------------------------------------------------------------|\n"

void main()
{
	setlocale(LC_ALL, "Russian");

	const int n = 13;
	int i_arr[n];
	Filrand(i_arr, n);
	Print(i_arr, n);
	Sort(i_arr, n);
	Print(i_arr, n);
	cout << "Сумма элементов массива (" << Sum(i_arr, n) << ")" << endl;
	cout << "Средне арефметическое массива (" << Avg(i_arr, n) << ")" << endl;
	cout << "Минимальное значение (" << minValue(i_arr, n) << ")" << endl;
	cout << "Максимальное значение (" << maxValue(i_arr, n) << ")" << endl;
	cout << delimiter << endl;


	double d_arr[n];
	Filrand(d_arr, n);
	Print(d_arr, n);
	Sort(d_arr, n);
	Print(d_arr, n);
	cout << "Сумма элементов двумерного массива (" << Sum(d_arr, n) << ")" << endl;
	cout << "Средне арефметическое двумерного массива (" << Avg(d_arr, n) << ")" << endl;
	cout << "Минимальное значение (" << minValue(d_arr, n) << ")" << endl;
	cout << "Максимальное значение (" << maxValue(d_arr, n) << ")" << endl;
	cout << delimiter << endl;


	int i_arr2[ROWS][COLS];
	Filrand(i_arr2, ROWS, COLS);
	Print(i_arr2, ROWS, COLS);
	cout << "Отсортированный массив" << endl;
	Sort(i_arr2, ROWS, COLS);
	Print(i_arr2, ROWS, COLS);

}

void Filrand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void Filrand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
		arr[i] /= 10;

	}
}
void Filrand(int arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}

void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(int arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				arr[i] ^= arr[j];
				arr[j] ^= arr[i];
				arr[i] ^= arr[j];

			}
		}
	}
}
void Sort(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;

			}
		}
	}
}
void Sort(int arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = i; k < m; k++)
			{
				int l;
				if (k == i)l = j + 1;
				else l = 0;
				for (; l < n; l++)
				{
					if (arr[k][l] < arr[i][j])
					{
						int buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
				}

			}
		}

	}
}

int Sum(int arr[], const int n)
{
	int Sum = 0;
	for (int i = 0; i < n; i++)
	{
		Sum += arr[i];
	}
	return Sum;
}
double Sum(double arr[], const int n)
{
	double Sum = 0;
	for (int i = 0; i < n; i++)
	{
		Sum += arr[i];
	}
	return Sum;
}

double Avg(int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
double Avg(double arr[], const int n)
{
	return Sum(arr, n) / n;
}
int minValue(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}
double minValue(double arr[], const int n)
{
	double min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
			min = arr[i];
	}
	return min;
}

int maxValue(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max);
		max = arr[i];
	}
	return max;
}
double maxValue(double arr[], const int n)
{
	double max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max);
		max = arr[i];
	}
	return max;
}
