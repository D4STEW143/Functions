#pragma once
#include <iostream>
using namespace std;

//int move_number;

#define delimeter "\n------------------------------\n"
#define tab "\t"

const int ROWS = 3;
const int COLS = 5;


void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int MaxRand = 100);
void Print(const int arr[], const int n);

template <typename T>
void Print(const T arr[], const int n);
void Print(const int arr[ROWS][COLS], const int ROWS, const int COLS);


int Sum(int arr[]);
double Avrg(int arr[], const int n);
int minValueIn(int arr[], const int n);
int maxValueIn(int arr[], const int n);
int Srt(int arr[], const int n);
void ShftLft(int arr[], const int n, int move_number);
void ShftRght(int arr[], const int n, int move_number);