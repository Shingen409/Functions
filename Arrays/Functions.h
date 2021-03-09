#pragma once
#include<iostream>

using namespace std;

const int ROWS = 8; /*ROWS-������*/
const int COLS = 7; /*COLS-�������*/

//��������� ������ ���������� �������
void Filrand(int arr[], const int n);
void Filrand(double arr[], const int n);
void Filrand(int arr[ROWS][COLS], const int m, const int n);

//������� ������ �� �����
void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(int arr[ROWS][COLS], const int m, const int n);

//��������� ������
void Sort(int arr[], const int n);
void Sort(double arr[], const int n);
void Sort(int arr[ROWS][COLS], const int m, const int n);

//���������� ����� ��������� �������
int Sum(int arr[], const int n);
double Sum(double arr[], const int n);

//���������� ������� �������������� ��������� �������
double Avg(int arr[], const int n);
double Avg(double arr[], const int n);


//���������� ����������� ��������, ������� ���� � �������
int minValue(int arr[], const int n);
double minValue(double arr[], const int n);

//���������� ������������ ��������, ������� ���� � �������
int maxValue(int arr[], const int n);
double maxValue(double arr[], const int n);

