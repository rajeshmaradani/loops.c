#include<stdio.h>
void main()
{
	int r,n,edc=0,odc=0,zc=0;
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
        if(r==0)
    	{
		   zc++;
	    }
        else if(r%2==0)
	   {
		 edc++;
	   }
       else
       {
		
	    	odc++;
	   }
	
		n=n/2;
	}
	printf("%d %d %d",zc,edc,odc);

}
