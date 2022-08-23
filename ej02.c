#include<stdio.h>

int main(){
    // Declaración de variables
    double c1,c2,c3,c4, s=0, p;
    printf("Dame la calificacion 1:");
    scanf("%lf",&c1);
    printf("Dame la calificación 2:");
    scanf("%lf",&c2);
    printf("Dame la calificación 3:");
    scanf("%lf",&c3);
    printf("Dame la calificación 4:");
    scanf("%lf",&c4);
    s = c1+c2+c3+c4;
    p = s/4;
    printf("El promedio es: %lf",p);

}