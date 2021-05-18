#include<iostream>
using namespace std;
struct gan
{
int x;
int b[5];	
};
int main()
{
	gan a;
	a.x = 9;
	for(int i = 0; i < a.x; i++)
	{
		a.b[i] = i;
	}
	cout << a.x << endl;
	for(int i = 0; i < a.x; i++)
	{
		cout << a.b[i] << " ";
}
}
