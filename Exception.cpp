/*

What is exception
by the exception handling we van handle the unaccepted data
handle the prohibited data
i=1
j=0
cout<<i/j;


*/
#include <iostream>
using namespace std;

int main()
{
	try
	{
		int i, j, k;
		i = 1;
		j = 1;
		if (j == 0)
		{
			throw "Sorry any values is not divided by 0\n";
		}
		cout << i / j;

		int a[10];
		int n = 11;
		if (n > 9)
		{
			throw "element of array is more then memory\n";

		}

	}
	catch (const char* k)
	{
		cout<<k;
	
	}
	
}