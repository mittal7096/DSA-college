#include<stdio.h>
void main()
{
  int k1[100],k,m;
  for(k=0;k<5;k++)
  {
    printf("enter the number:-");
    scanf("%d",&k1[k]);
   }
   printf("enter the number to search:-");
      scanf("%d",&m);
   for(k=0;k<5;k++)
     {
      
      if(k1[k]==m)
      {
        printf("%d this number is present in the array list",m);
      }
      else
      {
        printf("enter number is not in the array list.%d",m);
      }
     }
   
}

