#include <iostream>
using namespace std;
 
int Check_SHH(int n);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	if (Check_SHH(n) == true)
	{
		cout  << endl << n << " La so hoan hao" << endl;
	}
	else
	{
		cout << endl << n << " Khong la so hoan hao" << endl;
	}
	return 0;
}
int Check_SHH(int n)
{
	int sum = 0;
	for (int i = 1; i < n; i++)
	{
		if (n % i == 0) {
			sum += i;
		}
	}
	if (sum == n)
	{
		return true;
	}
	else
	{
		return false;
	}
}