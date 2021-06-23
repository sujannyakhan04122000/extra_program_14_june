#include<stdio.h>
#include<stdlib.h>
int main()
{
	int b_date,b_month,b_year,c_date,c_month,c_year,d,m,y;
	printf("Enter birth date(1-31) = ");
	scanf("%d",&b_date);
	printf("\nEnter birth month(1-12) =");
	scanf("%d",&b_month);
	printf("\nEnter birth year = ");
	scanf("%d",&b_year);
	printf("\nEnter current date(1-31) = ");
	scanf("%d",&c_date);
	printf("\nEnter current month(1-12) =");
	scanf("%d",&c_month);
	printf("\nEnter current year = ");
	scanf("%d",&c_year);
	int month[]={31,28,31,30,31,30,31,31,30,31,30,31};
	
	if((b_date>31 || b_date<1) || (c_date>31 ||c_date<1) || (b_month>12 || b_month<1) || (c_month>12 || c_month<1) || (b_year<0 || c_year<0))
	printf("YOU HAVE ENTERED WRONG DATE!!!\n");
	
	else
	{
		y=c_year-b_year;
		if (c_date>b_date)
		{
			d=c_date-b_date;
		}
		else
		{
			c_month=c_month-1;
			c_date=c_date+month[b_month-1];
			d=c_date-b_date;
			
		}
		
		if(c_month>b_month)
		{
			m=c_month-b_month;
		}
		else
		{
			y=y-1;
			c_month=c_month+12;
			m=c_month-b_month;
		}
	}
	int d1=y*365;
	int d2=m*30;
	int d3=d+d1+d2;
	int w=d3/7;
	/*printf("Year: %d Month: %d Days: %d\n",y,m,d);*/
	printf("Total number of days= %d\n",d3);
	printf("weeks=%d\n",w);
	int i,c=0,p=0,j,k=0,npsum=0,psum=0;
	int*ptr;
	for(i=2;i<=w/2;i++)
	{
		if(w%i==0)
		{
			c=c+1;
		}
	}
	/*printf("%d\n",c);*/
	ptr=(int*)malloc(c*sizeof(int));
	for(i=2;i<=w/2;i++)
	{
		if(w%i==0)
		{
			ptr[p]=i;
			p++;
		}
	}
	/*printf("The elements of the array are: ");
        for (i = 0; i < c; ++i) 
		{
            printf("%d  ", ptr[i]);
        }*/
    
	for(i=0;i<c;i++)
	{
		k=1;
		for(j=2;j<=ptr[i]/2;j++)
		{
			if(ptr[i]%j==0 && ptr[i]!=2)
			{
				k=0;
				break;
			}
		}
		if(k==0)
		{
			npsum+=ptr[i];
		}
		else
		{
			psum+=ptr[i];
		}
	}
	printf("\nprime sum=%d\n",psum);
	printf("non prime sum=%d\n",npsum);
	if(psum>npsum)
	{
		printf("HE WILL GET A GRANT!!\n");
	}
	else
	{
		printf("HE WILL NOT GET A GRANT!!\n");
	}

        
    return 0;
}
