#include <stdio.h>
void main()
{
	int n1,n2,n3;
	void avg (int a, int b, int c);
	printf("Enter three numbers:\n");
	scanf("%d %d %d",&n1,&n2,&n3);
	avg(n1,n2,n3);

}
void avg (int a, int b, int c)
{
	float average;
	average=(a+b+c)/3.0;
	printf("Average of the given three numbers is %f",average);

}
