#include <stdio.h>
#include <math.h>

void main()  

{  
    float a, b, c, det, root1, root2, real, img;  
    printf("\n Enter the value of coefficient a, b and c: \n ");  
    scanf("%f %f %f", &a, &b, &c);  
    det = b * b - 4 * a * c;      
      
    if (det > 0)  
    {  
    root1 = (-b + sqrt(det)) / (2 * a);  
    root2 = (-b + sqrt(det)) / (2 * a);  
    printf("\n Value of root1 = %.2f and Value of root2 = %.2f", root1, root2);  
    }  
      
    else if (det == 0)  
    {  
        root1 = root2 = -b / (2 * a);  
        printf("\n Value of root1 = %.2f and Value of root2 = %.2f", root1, root2);  
    }  
      
    else {  
        real = -b / (2 * a);  
        img = sqrt(-det) / (2 * a);
        printf("\n Value of root1 = %.2f + %.2fi and Value of root2 = %.2f - %.2fi", real, img, real, img );
    }

}

