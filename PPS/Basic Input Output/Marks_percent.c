/*WAP that accepts the marks of 5 subjects and finds the sum and percentage marks obtained by the
student.*/

#include <stdio.h>
int main() {
	int a,b,c,d,e,f,g;
	printf ("Enter marks of 5 subjects consecutively:\n");
	scanf("%d %d %d %d %d",&a, &b, &c, &d, &e);
	f=((a+b+c+d+e)/5);
	printf("Sum=%d\tPercentage=%d",g=a+b+c+d+e,f);
	return 0;

}
