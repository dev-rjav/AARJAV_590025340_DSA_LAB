#include <stdio.h>

int main(){
    int a,b,temp=0;
    scanf("%d%d",&a,&b);
    printf("a=%d , b=%d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("a=%d , b=%d",a,b);
    return 0;
}