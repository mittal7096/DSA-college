#include <stdio.h>
int main()
{
  int value[10],flag=1,scan,mid;
 for(int j=0;j<10;j++)
    {
      printf("enter the number of the array:-");
      scanf("%d",&value[j]);
    }
  for(int i=0;i<10;i++)
  {
    printf("%d",value[i]);
  }
printf("enter the number which you want to find:-");
scanf("%d",&scan);
int low=0,high=9;
while(low<=high)
{
  mid=(low+high)/2;
  if(scan<value[mid])
{
  high=mid-1;
}
else if(scan>value[mid])
{
  low=mid+1;
}
else if(scan=value[mid])
{
  printf("search is sucessefulat location %d:-",mid+1);
flag=0;
break;
}
}
if(flag==1)
{
printf("search is unsuccessful");
}
}

