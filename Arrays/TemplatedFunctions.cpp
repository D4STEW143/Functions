#include "Functions.h"

template <typename T>
void Print(const T arr[], const int n)
{
	//вывод массива 
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}