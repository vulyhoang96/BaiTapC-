#include <iostream>
using namespace std;

int UCLN(int a, int b);

int BCNN(int a, int b);

int main()
{
	int a, b;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	int ketqua = UCLN(a, b);
	cout << "UCLN(a,b) la: " << ketqua << endl;
	ketqua = BCNN(a, b);
	cout << "BCNN(a,b) la: " << ketqua << endl;
	return 0;
}

int UCLN(int a, int b)
{
	if (a % b != 0)
	{
		return UCLN(b, a % b);
	}
	else
	{
		return b;
	}
}
int BCNN(int a, int b)
{
	int ketqua;
	ketqua = (a * b) / UCLN(a, b);
	return ketqua;
}