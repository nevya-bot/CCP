#include <stdio.h>
#include <math.h>

int main()
{
   int n,c;
   printf("Enter the number whose one's digit has to be found: ");
   scanf("%d",&n);
   c=(n)%10;
   printf("The one's digit is: %d",c);
   return 0;
}

