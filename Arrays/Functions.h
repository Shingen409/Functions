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
template<typename T>void Print(T arr[], const int n);
template<typename T>void Print(T arr[ROWS][COLS], const int m, const int n);

//сортирует массив
template<typename T>void Sort(T arr[], const int n);
template<typename T>void Sort(T arr[ROWS][COLS], const int m, const int n);

//возвращает сумму элементов массива
template<typename T>T Sum(T arr[], const int n);

//возвращает среднее арифметическое элементов массива
template<typename T>double Avg(T arr[], const int n);

//возвращает минимальное значение, которое есть в массиве
template<typename T>T minValue(T arr[], const int n);

//возвращает максимальное значение, которое есть в массиве
template<typename T>T maxValue(T arr[], const int n);
