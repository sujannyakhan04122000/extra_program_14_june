#include <stdio.h>

int main()
{
   int amt,i;
   printf("Enter amount:");
   scanf("%d",&amt);
   if((amt>25000) || (amt<0))
   {
       printf("Error");
   }
   int notes[]={2000,500,200,100,50,20,10,5,2,1};
   int notes_counter[10];
   
   for(i=0;i<10;i++)
   {
       if(amt>=notes[i])
       {
           notes_counter[i]=amt/notes[i];
           amt=amt%notes[i];
       }
       else
       {
           notes_counter[i]=0;
       }
       
   }
   for(i=0;i<10;i++)
   {
       printf("%d ",notes_counter[i]);
   }

    return 0;
}
