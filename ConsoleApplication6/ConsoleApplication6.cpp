// ConsoleApplication6.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <time.h>


using namespace std;

//double result(double a, double b) {
//	int func;
//	cout << "1.+; 2.-; 3./; 4.*; = ";
//	cin >> func;
//	switch (func)
//	{
//	case 1: return a + b;
//		break;
//	case 2: return a - b;
//		break;
//	case 3: return a / b;
//		break;
//	case 4: return a * b;
//		break;
//	}
//}
//
//double result2(double *a, double *b, char c) {
//	switch (c)
//	{
//	case '+': return *a + *b;
//		break;
//	case '-': return *a - *b;
//		break;
//	case'/': return *a / *b;
//		break;
//	case '*': return *a * *b;
//		break;
//	}
//}


//6.
//void point(int *a, int n) {
//
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] < 0) a[i] = 0;
//		cout << a[i] << " ";
//	}
//}



//7.
//int func(int *a, int sizeA, int *b, int sizeB) {
//	int s = 0, x = 0;
//
//	for (int i = 0; i < sizeB; i++)
//	{
//		for (int j = x; j < sizeA; j++)
//		{	
//			if (a[j] == b[i]) { s++; x = j; break; }
//		}
//	}
//	if (s == sizeB) return true; else return false;
//
//}



int main()
{
	srand(time(NULL));

	//10.



	//7.
	/*int a[] = { 1,2,9,4,5,6,7,8,3 };
	int b[] = {  9,4, 5,1 }; 

	int n = 9 , n1 = 4;

	cout << "*a = ";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	cout << "*b = ";

	for (int i = 0; i < n1; i++)
	{
		cout << b[i] << " ";
	}
	cout << endl;

	cout << func(a,n,b,n1) << endl;*/

	//6.
	/*int *a;
	int n;

	cout << "size = ";
	cin >> n;

	a = new int[n];

	for (int i = 0; i < n; i++)
	{
		a[i] = -5 + rand() % 20;
		cout << a[i] << " ";
	}
	cout << endl;

	point(a, n);*/


	/*double *p;
	int n;

	cin >> n;

	p = new double [n];

	for (int i = 0; i < n; i++)
	{
		p[i] = 1. / (rand() % 20 + 1);
		cout << p[i] << " ";

	}
	cout << endl;

	delete[] p;*/


	/*int a[7][8];
	int n = 0;



	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			a[i][j] = -5 + rand() % 60;
			cout << a[i][j] << " ";
			if (a[i][j] < 0) n++;
		}
		cout << endl;
	}
	cout << n << endl;
	int *p;

	int r = 0;
	p = new int[n];

	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (a[i][j] < 0) {
				r++;
				p[r] = a[i][j];
				cout << p[r] << " ";
			}
		}
	}
	cout << endl;

	delete[] p;
	p = NULL;*/

	/*int a[9][7];
	int n = 0, r = 0;
	int *p;

	

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			a[i][j] = -50 + rand() % 200;
			cout << a[i][j] << " ";
			if (a[i][j] % 3 == 0 || a[i][j] % 5 == 0 || a[i][j] % 7 == 0) {
				n++;
			}
		}
		cout << endl;
	}

	p = new int[n];

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			if (a[i][j] % 3 == 0 || a[i][j] % 5 == 0 || a[i][j] % 7 == 0) {
				r++;
				p[r] = a[i][j];
				cout << p[r] << " ";
			}
		}
	}
	delete[] p;*/

	//double a, b;

	//char c;
	
	//cin >> a >> c >> b;


	//cout << result(a, b) << endl;

	//cout << result2(&a, &b, c) << endl;


	return 0;
}

