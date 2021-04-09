#include<iostream>
using namespace std;
void swap_pointers(char* &x, char* &y)
{
 char *tmp;
 tmp = x;
 x = y;
 y = tmp;
}
int main()
{
 char a[] = "I should print second";
 char b[] = "I should print first";
 char *s1 = a;
 char *s2 = b;
 char *t1, *t2;
 t1 = s1;
 t2 = s2;
 swap_pointers(t1,t2);
 cout << "s1 is " << t1 << endl;
 cout << "s2 is " << t2 << endl;
 return 0;
}

