#include <stdio.h>
#include<math.h>

int main()
{
    // declaración de variables
    float a, b, c, D, x1, x2, xr, xi;

    printf("Dame el valor de a:");
    scanf("%f", &a);
    printf("Dame el valor de b:");
    scanf("%f", &b);
    printf("Dame el valor de c:");
    scanf("%f", &c);
    // Cálculo del discriminante
    D = pow(b,2)-4*a*c;
    if (D==0) 
    {
        x1=-b/2; x2=-b/2;
    }else{
        if (D>0)
        {
            x1=(-b+sqrt(D)/2*a);
            x2=(-b-sqrt(D)/2*a);
        }else{
            xr= -b/2*a; xi=(sqrt(-D)/2*a);

        }
    }
    
}