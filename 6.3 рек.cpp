#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
void print(int* a, const int size, int i);
template <typename T>
void print(T* a, const int size, int i);
int nonincreasing(int* a, const int size, int i);
template <typename T>
int nonincreasing(T* a, const int size, int i);
void printresult(const int result);
int main()
{
	const int n = 10;

	int a[n] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int l1 = nonincreasing(a, n, 0);
	print(a, n, 0);
	printresult(l1);
	cout << endl;

	int a2[n] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	int l2 = nonincreasing(a2, n, 0);
	print(a2, n, 0);
	printresult(l2);
	cout << endl;

	int l3 = nonincreasing<int>(a, n, 0);
	print(a, n, 0);
	printresult(l3);
	cout << endl;

	double b[n] = { 1.1, 2.2, 3.3, 4.3, 5.5, 6.6, 7.7, 8.8, 9.9, 10.0 };
	int l4 = nonincreasing<double>(b, n, 0);
	print(b, n, 0);
	printresult(l4);
	cout << endl;

	string c[n] = { "1 ", "2 ", "3 ", "4 ", "5 ", "6 ", "7 ", "8 ", "9 ", "10 " };
	int l5 = nonincreasing<string>(c, n, 0);
	print(c, n, 0);
	printresult(l5);
	return 0;
}
void print(int* a, const int size, int i)
{
	cout << setw(4) << a[i];
	if (i < size - 1)
		print(a, size, i + 1);
	else
		cout << endl;
}
template <typename T>
void print(T* a, const int size, int i)
{
	cout << setw(4) << a[i];
	if (i < size - 1)
		print(a, size, i + 1);
	else
		cout << endl;
}
int nonincreasing(int* a, const int size, int i)
{
	if (i < size - 1)
	{
		if (a[i] < a[i + 1])
			return 0;
		else
			return nonincreasing(a, size, i + 1);
	}
	else
		return 1;
}
template <typename T>
int nonincreasing(T* a, const int size, int i)
{
	if (i < size - 1)
	{
		if (a[i] < a[i + 1])
			return 0;
		else
			return nonincreasing(a, size, i + 1);
	}
	else
		return 1;
}
void printresult(const int result)
{
	if (result == 0)
		cout << "not non increasing";
	else
		cout << " non increasing";
}
