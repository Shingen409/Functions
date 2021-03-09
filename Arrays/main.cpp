#include"Functions.h"
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