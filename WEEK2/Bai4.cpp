#include<iostream>
using namespace std;
int main()
{
	int ngay, thang, nam, k;
	char daugach;
	cin >> ngay >> daugach >> thang >> daugach >> nam;
	while (k != 0)
	{
		
	if (thang >= 10 ) 
	{
		cout << ngay << daugach << thang << daugach << nam;
	}
	else 
	{
		cout << ngay << daugach << "0"<< thang << daugach << nam;
	}
    }
	return 0;
}
