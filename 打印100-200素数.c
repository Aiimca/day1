#include<stdio.h>
int main() 
{
	for (int i = 100; i <= 200; i++) 
	{
		int a = 0;
		for(int j = 2; j < i; j++)
		{
			if (i % j == 0) 
			{
				a++;
			}
		}
		if (a == 0) 
		{
			printf("%d\n", i);
		}
	}
	return 0;
}
