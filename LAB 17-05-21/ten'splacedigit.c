#include <stdio.h>

int main()
{
   int n,c;
   printf("Enter the number whose ten's digit has to be found: \n");
   scanf("%d",&n);
   c=(n/10)%10;
   printf("The ten's digit is: %d",c);

    return 0;
}

