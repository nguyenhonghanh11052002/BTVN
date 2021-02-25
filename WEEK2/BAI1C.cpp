#include<iostream>
using namespace std;
int main()
{
	int n;
	int dem = 0;
	cin >> n;
	if (n <= 2)
	{
		cout << "yes";
	}
	else
	{
		for (int i = 2; i < n; i++)
		{
			if (n % i == 0)
			{
				dem++;
			}
		}
		if (dem == 0)
		{
			cout << "yes";
		}
		else 
		{
			cout << "no";
		}
	}
	return 0;
}
