#include <iostream>

using namespace std;

int Sum(int a, int b);
int Diff(int a, int b);
int Prod(int a, int b);
double Quot(int a, int b);
int Pwr(int a, int b);

void main()
{
	setlocale(LC_ALL, "");
	int a, b;
	cout << "¬ведите два числа: "; 
	cin >> a >> b;
	int c = Sum(a, b);
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Diff(a,b) << endl;
	cout << a << " * " << b << " = " << Prod(a,b) << endl;
	cout << a << " / " << b << " = " << Quot(a,b) << endl;
	cout << a << " ^ " << b << " = " << Pwr(a,b) << endl;

}
int Sum(int a, int b)
{
	int c = a + b;
	return c;
}

int Diff(int a, int b)
{
	//Diff - difference - разность
	return a - b;
}

int Prod(int a, int b)
{
	//Prod - product - произведение 
	return a * b;
}

double Quot(int a, int b)
{
	//Quotient - частное
	return (double)a / b;
}

int Pwr(int a, int b)
{
	int res = a;
	for (int i = 0; i < b - 1; i++)
	{
		res = res * a;
	}
	return res;
}