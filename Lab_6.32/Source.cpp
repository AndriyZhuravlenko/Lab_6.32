#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int* a, const int size, const int Low, const int High, int i)
{
	a[i] = Low + rand() % (High - Low + 1);
	if (i < size - 1)
		Create(a, size, Low, High, i + 1);
}
void Print(int* a, const int size, int i)
{
	cout << setw(4) << a[i];
	if (i < size - 1)
		Print(a, size, i + 1);
	else
		cout << endl;
}

int Sum(int* a, const int size, int i)
{
	if (i < size)
		return a[i] + Sum(a, size, i + 1);
	else
		return 0;
}

int main()
{
	srand((unsigned)time(NULL));
	int n;
	cout << "n = ";
	cin >> n;
	int* a = new int[n];
	int Low;
	cout << "Low = "; cin >> Low;
	int High;
	cout << "High = "; cin >> High;
	Create(a, n, Low, High, 0);
	Print(a, n, 0);
	cout << "S = " << Sum(a, n, 0) << endl;
	delete[] a;
	return 0;
}