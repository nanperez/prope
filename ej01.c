#include<stdio.h>

int main(){
    int x1,x2;
    int s=0;
    printf("Valor x1 \n");
    scanf("%d",&x1);
    printf("Valor x2 \n");
    scanf("%d",&x2);

    if (x1==0 && x2 ==0){
        printf("Salida %d",s);
    }
    else if (x1==0 && x2 ==1)
    {
        printf("Salida %d",s);
    }
    else if (x1==1 && x2 ==0)
    {
       printf("Salida %d",s);
    }else{
        s = 1;
        printf("Salida %d",s);
    }
    
    
    
}