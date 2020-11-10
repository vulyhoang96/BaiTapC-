#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	cout << "Nhap c: ";
	cin >> c;
	if (a > b && a > c)
	{
		cout << endl << " MAX =  " << a << endl;
	}
	 else if (b > a && b > c)
	{
		cout << endl << " MAX =  " << b << endl;
	}
	else
	{
		cout << endl << " MAX = " << c << endl;
	}
	return 0;
}