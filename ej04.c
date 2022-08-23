#include<stdio.h>
// declaración o prototipo de funciones
// 1° tipo de funciones son con retorno {int, double, float, char}
// 2° tipo funciones sin retorno {void}

void suma(int a, int b); // Paso 1:prototipo de la funcion
int suma2(int a, int b); // función con retorno (int)


int main(){
    // llamado de la función opc1 sin retorno
    suma(10,50);
    // llamado de la función opc2 con retorno
    printf("La suma es: %d",suma2(52,56));
    

}

// Paso 2: definición de la función
void suma(int a, int b){
    int s;
    s = a+b;
    printf("La suma es: %d",s);

}

int suma2(int a, int b){
    int s;
    s = a+b;
    return s;
}