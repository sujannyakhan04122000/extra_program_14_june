#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num,a,p,q,r,s=0,count=0,error=0,c=0,m,i,even=1,odd=1;
	int*ptr;
	printf("Enter a number =");
	scanf("%d",&num);
	if(num<0 || num==0)
	{
		printf("\nERROR!!!");
		exit(0);
	}
	a=num;
	while(a>0)
	{
		r=a%10;
		c=c+1;
		s=s*10+r;
		a=a/10;
	}
	ptr=(int*)malloc(c*sizeof(int));
	while(s>0)
	{
		m=s%10;
		ptr[count]=m;
		count++;
		s=s/10;
	}
	if(c<10)
	{
	
	for(i=0;i<c;i++)
	{
		if(ptr[i]==0 || ptr[i]<0)
		{
			error=error+1;
			break;
		}
	}
    }
    else
    {
    	error=error+1;
	}
	for(i=0;i<c;i++)
	{
		if(i%2==0)
		{
			even=even*ptr[i];
		}
		else
		odd=odd*ptr[i];
	}
	if(error==0)
	{
		if(even>=odd)
		{
			printf("\nDOMINANT\n");
		}
		else
		printf("\nMAGICAL");
	}
	else
	{
		printf("ERROR!!!\n");
	}
}
