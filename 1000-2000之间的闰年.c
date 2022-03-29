#include<stdio.h>
int main()
{
	for (int i = 1000; i <= 2000; i++)
	{
		int a = 0;
		
		if (i % 4 == 0){}

		else { a++; }

		if (a == 0)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}