#include<stdio.h>
int main()
{
	int a,sum=0;
	for(a=1;a<=10;a++)
	{
		if(a%2==0)
		{
			sum=sum+a;
		}
	}
	printf("%d is the sum of all even numbers",sum);
	return 0;
}
