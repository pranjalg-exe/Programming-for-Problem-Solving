/*WAP that tells whether a given year is a leap year or not, using conditional operator.
*/
#include<stdio.h>
int main(){
    int a;
    printf("Enter an year: ");
    scanf("%d",&a);
    if (a%100==0){
        if(a%400==0){
            printf("It is a leap year");
        }
        else{
            printf("It is not a leap year");
        }
    }
    else{
        if(a%100==0){
            printf("It is a leap year");
        }
        else{
            printf("It is not a leap year");
        }
    }
}