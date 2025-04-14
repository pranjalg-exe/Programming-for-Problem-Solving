/*WAP to find the greatest of three numbers using nested if else*/
#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    if (a>b){
        if (a>c){
            printf("%d is the greatest number.",a);
        }
    }
    else{
        if(b>c){
            printf("%d is the greatest number.",b);
        }
        else{
            printf("%d is the greatest number.",c);
        }
    }
    return 0;
}
