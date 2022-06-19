#include<stdio.h>
#include<math.h>
int main()
{
   int n,s,p,t,r,b,sum=0,sum1=0,r1;
   scanf("%d",&n);
  // t=n;
  s=n*n;
   while(n!=0)
   {
       r=n%10;
       sum=(sum*10)+r;
       n=n/10;
   }
       
       p=sum*sum;
       while(p!=0)
  {
       r1=p%10;
       sum1=(sum1*10)+r1;
       p/=10;
      // if(sum1==s)
   }
    if(sum1==s)
      printf("True");
      else
      printf("False");
   return 0;
}