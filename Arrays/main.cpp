//FunctionsSeparation
#include <iostream>
#include "Functions.h"
#include "TemplatedFunctions.cpp"



void main()
{
	setlocale(LC_ALL, "");
	const int I_SIZE = 5;
	int i_arr[I_SIZE];

	const int D_SIZE = 8;
	double d_arr[D_SIZE];

	FillRand(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);

	cout << delimeter << endl;

	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	
	cout << delimeter << endl;


	FillRand(i_arr, I_SIZE);
	Print(i_arr, I_SIZE);
	Sum(i_arr);
	Avrg(i_arr, I_SIZE);
	minValueIn(i_arr, I_SIZE);
	maxValueIn(i_arr, I_SIZE);
	Srt(i_arr, I_SIZE);
	int move_number;
	cout << "Введите число сдвига: ";	cin >> move_number;
	cout << "Сдвиг влево: " << endl;
	ShftLft(i_arr, I_SIZE, move_number);
	cout << "Сдвиг вправо: " << endl;
	ShftRght(i_arr, I_SIZE,move_number );

	cout << delimeter << endl;

}



