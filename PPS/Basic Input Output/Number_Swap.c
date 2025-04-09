/*WAP that swaps values of two variables using a third variable and without using third variable.*/

#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d", &a, &b);
    printf("Pre Swapped values: a=%d b=%d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("Swapped numbers: a=%d b=%d\n", a,b);
    return 0;
}

/*Without using the third variable*/
/*int main(){
    int c,d;
    scanf("%d %d",&c,&d);
    c=c+d;
    d=c-d;
    c=c-d;
    printf("Swapped numbers: c=%d d=%d",c,d);
    return 0;
}