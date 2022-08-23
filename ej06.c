#include <stdio.h>
// PROTOTIPO DE LAS FUNCIONES
// int calculoedad(int anio);
void numAcadena(int mes);

int calculoedad(int a)
{
    int anio_actual = 2022;
    int r;
    r = anio_actual - a;
    return r; // 2022-a
}

void numCadena(int mes){
    if(mes == 1) 
    {
        printf("Enero");
    }else{
        if (mes == 2)
        {
            printf("Febrero");
        }
        else{
            printf("otrea cosa");
        }
        
    }
    

}

int main()
{
    int an, mes;
    printf("dame el año de nacimiento ");
    scanf("%d", &an);
    printf("dame el mes de nacimiento");
    scanf("%d", &mes);
    printf("La edad es %d \n",calculoedad(an));
    printf("\n");
    numAcadena(mes);

}



void numAcadena(int mes)
{

    switch (mes)
    {
    case 1:
        printf("Enero");
        break;
    case 2:
        printf("Febrero");
        break;
    case 3:
        printf("Marzo");
        break;
    case 4:
        printf("Abril");
        break;
    case 5:
        printf("Mayo");
        break;
    case 6:
        printf("Junio");
        break;
    case 7:
        printf("Julio");
        break;
    case 8:
        printf("Agosto");
        break;
    case 9:
        printf("Septiembre");
        break;
    case 10:
        printf("Octubre");
        break;
    case 11:
        printf("Noviembre");
        break;
    case 12:
        printf("Diciembre");
        break;

    default:
        printf("NO es un valor válido");
        break;
    }

     if(mes == 1) 
    {
        printf("Enero");
    }else{
        if (mes == 2)
        {
            printf("Febrero");
        }
        else{
            printf("otrea cosa");
        }
        
    }
}
