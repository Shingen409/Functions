#include<iostream>
using namespace std;



const int ROWS = 8;//строк
const int COLS = 7;//столбец

void Fillrand(int arr[], const int n);
void Fillrand(double arr[], const int n);
void Fillrand(int arr[ROWS][COLS], const int m, const int n);

void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(int arr[ROWS][COLS], const int m, const int n);


void Sort(int arr[], const int n);
void Sort(double arr[], const int n);
void Sort(int arr[ROWS][COLS], const int m, const int n);


int Sum(int arr[], const int n);
double Sum(double arr[], const int n);
int Sum(int arr[ROWS][COLS], const int m, const int);

double Avg(int arr[], const int n);
double Avg(double arr[], const int n);
double Avg(int arr[ROWS][COLS], const int m, const int n);

#define delimiter "\n--------------------------------------------------------------------------\n"

void main()
{
	setlocale(LC_ALL, "Russian");
	const int ROWS = 8;
	const int COLS = 5;
	int i_arr2[ROWS][COLS];
	FillRand(i_arr2, ROWS, COLS);
	Print(i_arr2, ROWS, COLS);


	int i_arr[n];
	Fillrand(i_arr, n);
	Print(i_arr, n);
	cout << "Сумма эллементов массива" << Sum(i_arr2, rows, cols) << endl;
	cout << "Среднее арефметическое" << Avg(i_arr2, ROWS, COLS) << endl;
	cout << "Отсортированный массив" << endl;
	
	Sort(i_arr, n);
	Print(i_arr, n);
	
	cout << "Сумма эллементов массива" << Sum(i_arr, n) << endl;
	cout << "Среднее арефметическое" << Avg(i_arr, n) << endl;
	cout << delimiter << endl;
	
	/// ///////////////////////////////////////////
	
	double d_arr[n];
	Fillrand(d_arr, n);
	Print(d_arr, n);
	Sort(d_arr, n);
	Print(d_arr, n);
	cout << "Сумма эллементов массива" << Sum(i_arr, n) << endl;
	cout << "Среднее арефметическое" << Avg(i_arr, n) << endl;
	cout << delimiter << endl;

	
	/// //////////////////////////////////////////
	
	
	/*int crr[m];
	Fillrand(crr, m);
	Print(crr, m);
	Sort(crr, m);
	Print(crr, m);
	cout << delimiter;*/
	
}


  void Fillrand(int arr[], const int n)
  {
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
  }
  void Fillrand(double arr[], const int n)
  {
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
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
  void Print(int arr[][5], const int m, const int n)
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
				  arr[i] ^= arr[j];
				  arr[j] ^= arr[i];
				  arr[i] ^= arr[j];

			  }
		  }

	  }
  }
  
  void Sort(int arr[ROWS][COLS], const int m, const int n)
  {
	  int iteration=0;
	  for (int i = 0; i < m; i++)
	  {
		  for (int j = 0; j < n; j++)
		  {
			  for (int k = 0; k < m; k++)
			  {
				  for (int l = 0; l < n; l++)
				  {  
					  iteration++;
					  if (/*ПЕРОЕБИРАЕМЫЙ ЭЛЛЕМЕНТ*/ arr[k][l] < arr[i][j]/*ВЫБРАННЫЙ ЭЛЛЕМЕНТ*/)
					  {
						  int buffer = arr[i][j];
						  arr[i][j] = arr[k][l];
						  arr[k][l] = buffer;
					  }
				 
				  }

			  }
		  }
	  }
	  cout << "Массив отсартирован за" << iteration << "итераций" << endl;
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
  int Sum(double arr[], const int n)
  {
	 double Sum = 0;
	 for (int i = 0; i < n; i++)
	 {
	   
		 Sum += arr[i];

	 }
	 return Sum;

  }
  int Sum(int arr[ROWS][COLS], const int m, const int)
  {
	  int sum = 0;
	  for (int i = 0; i < m; i++)
	  {
		  for (int j = 0; j < n; j++)
		  {
			  sum += arr[i][j];
		  }
	  }return sum;
  }
  double Avg(int arr[], const int n)
  {
	  return(double)Sum(arr, n) / n;
  }

  double Avg(int arr[], const int n)
  {
	  return Sum(arr, n) / n;
  }
  
  {
	  int sum = 0;
  }
 