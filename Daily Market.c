#include<stdio.h>
int main()
{
	int i,mon,yr,error=0;
	float cost[5],daily=0,monthly=0,fm=0;
	
	printf("Enter the cost of milk,non-veg,fruits,grocery and vegetable:");
	for(i=0;i<5;i++)
	{
		printf("\nenter an amount = ");
		scanf("%f",&cost[i]);
	}
	printf("\nEnter the month =");
	scanf("%d",&mon);
	printf("\nEnter the year= ");
	scanf("%d",&yr);
	float month1[]={31.0,29.0,31.0,30.0,31.0,30.0,31.0,31.0,30.0,31.0,30.0,31.0};
	float month2[]={31.0,28.0,31.0,30.0,31.0,30.0,31.0,31.0,30.0,31.0,30.0,31.0};
	
	
	for(i=0;i<5;i++)
	{
		if(cost[i]==0 || cost[i]<0)
		error=error+1;
	}
	for(i=0;i<5;i++)
	{
		daily=daily+cost[i];
	}
	if(yr%4==0 || yr%400==0)
	{
		monthly=daily*month1[mon-1];
	}
	else
	monthly=daily*month2[mon-1];
	if((mon<1 || mon>12 || yr<1) || error>0)
	{
		printf("ERROR!!!!\n");
	}
    else
    {
    	printf("\nDaily expenses   Monthly expenses: %.2f   %.2f",daily,monthly);
	}
    return 0;
}
