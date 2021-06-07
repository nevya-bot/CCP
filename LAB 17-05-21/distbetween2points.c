#include <stdio.h>
#include<math.h>
int main()
{
	int x1,x2,y1,y2;
	float distance;
	printf("Enter X Co-Ordinates\n");
	scanf("%d %d",&x1,&x2);
	printf("Enter Y Co-Ordinates\n");
	scanf("%d %d",&y1,&y2);
	distance = sqrt(pow((x1-x2) ,2) + pow((y1-y2) ,2));
	printf("Distance between those two points (%d,%d) and (%d,%d) is %0.2f \n",x1,y1,x2,y2,distance);
	return 0;
}

