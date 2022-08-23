#include<stdio.h>
// prototipo de la función
void joseLuis(int m, int n);

int main(){
    int a,b;
    // solicitar los valores
    printf("Dame el valor de a:");
    scanf("%d",&a);
    printf("Dame el valor de b:");
    scanf("%d",&b);

    // llamado a la función
    joseLuis(a,b);
}

void joseLuis(int a, int b){
    if((a>=13 && a<=19) || (b>=13 && b<=19)){
        printf("19");
    }else{
        printf("La suma es:%d",a+b);
    }

   
}