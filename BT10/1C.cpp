#include<iostream>
#include<cstring>
using namespace std;
struct String
{
int n;
char* str = NULL;
char* temp = NULL;
String(const char* str_)
{
	n = strlen(str_);
	str = new char[n];
	strncpy(str, str_, n );
}
~String()
{
	delete [] str;
	delete [] temp;
}
void print()
{
	cout << str << endl;
}
void append(const char* s)
{
	int a = strlen(s);
	temp = new char[a];
	
	strcat(temp, str);
	strcat(temp, s);
	str = temp;
}

};
int main()
{
	String greeting("Hi");
    greeting.print();
	greeting.append(" there");
	return 0;
}
