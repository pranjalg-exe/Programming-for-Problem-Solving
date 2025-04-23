/*WAP that accepts marks of five subjects and finds percentage and prints grades according to the
followingcriteria:
Between 90-100% - Print ‘A’
80-90% ------------ Print ‘B’
60-80% ------------ Print ‘C’
Below 60% --------Print ‘D’*/
#include<stdio.h>
int main(){
    int a,b,c,d,e,perc;
    printf("Enter the marks of five subjects:\n");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    perc=(a+b+c+d+e)/5;
    if (perc>=90){
        printf("A");
    }
    else if(perc<90 && perc>=80){
        printf("B");
    }
    else if(perc<80 && perc>=60){
        printf("C");
    }
    else{
        printf("D");
    }
    return 0;

}
