#include <stdio.h>
#include <math.h>
int main(){
    int i,flag,t=0;
    long int a=0;
    scanf("%d",&a);
    t=sqrt(a);
    for (i=2;i<=t;i++)
    {
        if (a%i==0){flag=1;break;}
    }
    if (flag==0){
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
    return 0;
}