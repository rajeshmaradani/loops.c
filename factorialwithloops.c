#include<stdio.h>
void main()
{
	int i,n,pro=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		pro=pro*i;
	}
	printf("%d",pro);
	
}
