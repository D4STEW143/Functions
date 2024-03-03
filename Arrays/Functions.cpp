#include "Functions.h"
#include <iostream>

void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	//Заполняем случаныйми числами:
	for (int i = 0; i < n; i++)
	{
		arr[i] = minRand + rand() % (maxRand - minRand); //чтобы попасть в предел максранд
	}
}

void FillRand(double arr[], const int n, int minRand, int maxRand)
{
	minRand *= 100;
	maxRand *= 100;
	//Заполняем случаныйми числами:
	for (int i = 0; i < n; i++)
	{
		arr[i] = minRand + rand() % (maxRand - minRand); //чтобы попасть в предел максранд
		arr[i] /= 100;
	}
}

void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand, int MaxRand)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = minRand + rand() % (MaxRand - minRand);
		}
	}
}


void Print(const int arr[], const int n)
{
	//вывод массива 
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void Print(const int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
}

int Sum(int arr[])
{
	int sum_res;
	sum_res = arr[0] + arr[1] + arr[2] + arr[3] + arr[4];
	cout << "Сумма элементов массива равна " << sum_res;
	cout << endl;
	return sum_res;
}

double Avrg(int arr[], const int n)
{
	double res_avrg;
	res_avrg = (arr[0] + arr[1] + arr[2] + arr[3] + arr[4]) / n;
	cout << "Средне-арифметическое данного массива равно " << res_avrg;
	cout << endl;
	return res_avrg;
}

int minValueIn(int arr[], const int n)
{
	int min = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
	}
	cout << "Минимальное число массива: " << min << endl;
	return min;
}

int maxValueIn(int arr[], const int n)
{
	int max = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	cout << "Максимальное число массива: " << max << endl;
	return max;
}

int Srt(int arr[], const int n)
{
	int nmod = n;
	while (nmod--)
	{
		bool swapped = false;

		for (int i = 0; i < n - 1; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				swap(arr[i], arr[i + 1]);
				swapped = true;
			}
		}

		if (swapped == false)
			break;
	}
	cout << "Сортировка массива:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	return 0;
}

void ShftLft(int arr[], const int n, int move_number)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	int first_array_value;
	for (int i = 0; i < move_number; i++)
	{
		first_array_value = arr[0];
		for (int j = 0; j < n - 1; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = first_array_value;

		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << "\t";
		}
		cout << endl;
	}
}

void ShftRght(int arr[], const int n, int move_number)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	int last_array_value;
	for (int i = 0; i < move_number; i++)
	{
		last_array_value = arr[n - 1];
		for (int j = n - 2; j >= 0; j--)
		{
			arr[j + 1] = arr[j];
		}
		arr[0] = last_array_value;

		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << "\t";
		}
		cout << endl;
	}
}
