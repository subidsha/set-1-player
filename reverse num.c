#include<stdio.h>
int main()
{
	int n,sum=0,a;
	scanf("%d",&n);
	while(n!=0)
	{
		a=n%10;
		sum=sum*10+a;
		n=n/10;
	}
	printf("%d",sum);
	return 0;
}
