#include<iostream>
using namespace std;
bool namnhuan (int);
bool thang31 (int);
void output (int, int, int);
main()
{
	int special = 28;
	int ngay, thang, nam;
	int date, month, year;
	char daugach;
	cin >> ngay >> daugach >> thang >> daugach >> nam;
	if (namnhuan(nam))
	{
		special = 29;
	}
	int x = 1;
	int check = namnhuan(nam);
	while (x!=0)
	{
		date = ngay;
		month = thang;
		year = nam;
		cin >> x;
		if ( thang31(thang))
		{
			if (date <= 0)
			{
				date = 31 + date; 
				month--;
			}
			if (date > 31)
			{
				date = date - 31;
				month++;
			}
		}
			else 
			{
				if (date <= 0)
				{
					date = 30 - 1;
					month--;
				}
				if (date > 30 )
				{
					date = date - 30;
					month++;
				}
			}
				if (month > 12)
				{
					month = 1; 
					year++;
				}
				else if (month < 1)
				{
					month = 12;
					year--;
				}
				output(date,month,year);
	}
}
bool thang31 (int x)
{
	
}
