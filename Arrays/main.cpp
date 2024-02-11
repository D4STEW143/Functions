#include <iostream>

using namespace std;

void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void Print(const int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];

	FillRand(arr, n);
	Print(arr, n);

}

void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	//«аполн€ем случаныйми числами:
	for (int i = 0; i < n; i++)
	{
		arr[i] = minRand + rand() % (maxRand-minRand); //чтобы попасть в предел максранд
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