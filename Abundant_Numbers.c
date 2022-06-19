#include<stdio.h>
//#include<math.h>
int main()
{
   int n,t,sum=0,i,r;
   scanf("%d",&n);
   t=n;
   for(i=2;i<n;i++)
   {
       r=n%i;
      if(n%i==0)
      sum=sum+i;
   }
    if(sum>t)
      printf("True");
      else
      printf("False");
   return 0;
}