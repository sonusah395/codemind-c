#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
   // scanf("%d%d",&i,&j);
    int a[n][n];
for(i=0;i<n;i++)
{
 for(j=0;j<n;j++)
 {
   scanf("%d",&a[i][j]);
 }
}
int sum=0,sum1=0;
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        if(i==j)
        {
            sum= sum+a[i][j];
        }
        if(i+j+1==n)
        sum1=sum1+a[i][j];
    }
}
printf("Principal Diagonal:%d
",sum);
printf("Secondary Diagonal:%d",sum1);
return 0;
}