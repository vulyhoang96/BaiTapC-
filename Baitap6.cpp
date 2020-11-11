#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int n;
	cout << " Nhap n: ";
	cin >> n;
	int a = sqrt(n);
	if (a * a == n)
	{
		cout << endl << n << " La so chinh phuong " << endl;
	}
	else
	{
		cout << endl << n << " Khong la so chinh phuong " << endl;
	}
	return 0;
}