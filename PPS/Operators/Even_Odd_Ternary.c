/*WAP that finds whether a given number is even or odd using ternary operator*/
#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    (a%2==0)?printf("Even"):printf("Odd");
    return 0;
}