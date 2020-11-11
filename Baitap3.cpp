#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	if (n % 2 == 0)
	{
		cout << endl << "n la so chan " << n << endl;
	}
	else
	{
		cout << endl << "n la so le " << n << endl;
	}
	return 0;
}