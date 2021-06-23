#include<stdio.h>
#include<stdlib.h>
int main()
{
	int nos,i,j,c=0,error=0;
	int*ptr;
	printf("Enter number of swans = ");
	scanf("%d",&nos);
	if(nos<0 || nos==0)
	{
		printf("\nERROR");
		exit(0);
	}
	ptr=(int*)malloc(nos*sizeof(int));
	printf("\nEnter the age of swans in weeks:");
	for(i=0;i<nos;i++)
	{
		printf("\nEnter age of swan %d = ",i+1);
		scanf("%d",&ptr[i]);
	}
	
	for(i=1;i<=4;i++)
	{
		for(j=0;j<nos;j++)
		{
			if(ptr[j]>=56)
			{
				c=c+4;
			}
		}
	}
	
	for(i=0;i<nos;i++)
	{
		if(ptr[i]==0)
		error=error+1;
		break;
	}
	
	if(error==0)
	{
	  printf("\nTotal number of eggs at the end of the month = %d",c);
	  }
	  else
	  {
	  	printf("ERROR!!!");
	  	
		  }
		  
		  	return 0;
	
}
