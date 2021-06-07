#include <stdio.h>
int getSmall(int, int, int);
int main()
{
    int a, b, c, small;
    printf("Enter three numbers : ");
    scanf("%d%d%d", &a, &b, &c);
    small = getSmall(a, b, c);
    printf("\nSmallest of the three numbers is = %d", small);
    return 0;
}
int getSmall(int num1, int num2, int num3)
{
    if(num1<num2)
    {
        if(num2<num3)
            return num1;
        else
        {
            if(num1<num3)
                return num1;
            else
                 return num3;
        }
    }
    else
    {
        if(num2<num3)
            return num2;
        else
            return num3;
    }

    

    return 0;
}

