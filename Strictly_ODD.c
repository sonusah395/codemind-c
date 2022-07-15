#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int f=0;
    for(int i=0;i<n;i++){
        if(a[i]%2!=0){
            if(i%2==0){
                f=1;
                break;
            }
        }
    }
    if(f==0) 
    printf("True");
    else
    printf("False");
    return 0;
}