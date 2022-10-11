//i=row
//j=colum
#include<stdio.h>
int main()
{
  int a[2][2],add[2],i,j;
  for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++)
    {
      printf("enter the number of the array:-");
      scanf("%d",&a[i][j]);
    }
  }
  for(i=0;i<2;i++)
  {
    j=0;
    add[i]=a[i][j]+a[i][j+1];
  }
  for(i=0;i<2;i++)
  {
    printf("sum of the array is :-%d \n",add[i]);
  }
}
