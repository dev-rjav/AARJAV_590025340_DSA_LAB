// Write a program to reverse a number

#include <stdio.h>

int main(){
    int a,n=0;
    scanf("%d",&a);
    while (a!=0)
    {
        n=n*10+(a%10);
        a=a/10;
    }
    printf("Revered number is %d",n);
    return 0;
}