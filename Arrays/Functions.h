#pragma once
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

