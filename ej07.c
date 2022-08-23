#include<stdio.h>
void tablaMultiplicar(int num, int limite);

int main(){
    int F, limite, c=1, r=0;
    printf("Tabla que quieres calcular:");
    scanf("%d",&F);
    printf("Limite de la tabla:");
    scanf("%d",&limite);
    tablaMultiplicar(F,limite);   

    
}

void tablaMultiplicar(int num, int limite){
    int c = 1;
        while (c<=limite)
    {
        printf("%d x %d = %d \n",num,c,(num*c));
        c++;
        
    }
}

