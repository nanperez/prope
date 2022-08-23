#include<stdio.h>

#include<stdio.h>

// Función principal
int main(){
    // declaración de variables
    int a,b,suma,c;
    // solicitar los valores
    printf("Dame el valor de a:");
    scanf("%d",&a);
    printf("Dame el valor de b:");
    scanf("%d",&b);
    c = a+b;
    // comparaciones
    // 1° salida es devolver la suma (otro caso)
    // 2° devolver el 19 (13-19)
    if((a>=13 && a<=19) || (b>=13 && b<=19)){
        printf("19");
    }else{
        printf("La suma es:%d",c);
    }


}