#include <iostream>
using namespace std;
int main()
{
	for (int i = 0;  i < 100; i++)
	{
		if (i % 2 == 0 )
		{
			cout << i << " ";
		}
	}
	cout << endl;
	int j = 0;
	while ( j < 100)
	{
		if (j % 2 == 1)
		{
			j++;
			continue;
		}
		cout << j << " ";
		j++;
	}
	cout << endl;
	int n = 0;
	do 
	{
		if (n % 2 == 0)
		{
			cout << n << " ";
		}
		n++;
	}
	while (n < 100);
	return 0;
}
