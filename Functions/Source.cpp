#include<iostream>
using namespace std;

int add(int a, int b, int c); //Прототип функций(Function declaration-объявление функций)
int sub(int a, int b);
int mul(int a, int b);
int my_div(int a, int b);
int power(int a, int n);


void main()
{
	setlocale(LC_ALL, "Russian");
	int num1, num2;
	cout << "Введите два числа"; cin >> num1 >> num2;
	int c = add(num1, num2,5);   //Вызов функций(Function call)
	cout << c << endl;
	cout << sub(num1, num2) << endl;
	cout << mul(num1, num2) << endl;
	cout << my_div(num1, num2) << endl;
	cout << power(num1, num2) << endl;
	


}


	int add(int a, int b, int c) //Реализация функций(Function definition-определение функций)
	{
		int sum = a + b;
		return sum;
	}
	int sub(int a, int b)
	{
		return a - b;
	}
	int mul(int a, int b)
	{
		return a * b;
	}
	int my_div(int a, int b)
	{
		return a / b;
	}
	int power(int a, int n)
	{
		int N = 1;
		for (int i = 0; i < n; i++)
		{
			N *= a;
		}
		return N;
	}
