/*Basic salary of an employee is input through the keyboard. The DA is 25% of the basic salary while
the HRA is15% of the basic salary. Provident Fund is deducted at the rate of 10% of the gross salary
(BS+DA+HRA). Program to calculate the Net Salary*/

#include<stdio.h>
int main(){
    float bs,da,hra,gs,ns;
    printf("Enter the base salary:");
    scanf("%f",&bs);
    da=0.25*bs;
    hra=0.15*bs;
    gs=bs+da+hra;
    ns=(gs-(gs*0.10));
    printf("Net Salary:%.3f",ns);
    return 0;
}