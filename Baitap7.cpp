#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout  << endl << "Cac so nguyen to tu 1 den " << n << " la: ";
	int Check = true;
	int i, j = 2;
	for (i = 2; i <= n; i++)
	{
		for (j = 2; j <= i - 1; j++)
		{
			if (i % j == 0)
			{
				Check = false;
			}
		}
		if (Check == true)
		{
			cout << i << "  ";
		}
		Check = true;
	}
	cout << endl;
	return 0;
}