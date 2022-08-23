#include <stdio.h>
	//declaracion o prototipo de funciones
	//1 tipo de funciones con retorno (int, doubole, float, char)
	//2 tipo de funciones si retorno (void)
	
	
	void suma(int a, int b); //paso 1: prototipo de la funcion
	int  suma2(int a, int b); //funcion con retorno(int)
	
	
	int main (){./S
		//llamado de la funcion opcion 1 sin retorno
		suma(10,50);
		//llamado de la funcion opcion 2 con retorno	
		printf("la suma es : %d", suma2(52,56));
		
		}
	// paso2: definicion de la funcion
	void suma(int a, int b){		//sin retorno
		int s;
		s = a+b;
		printf("la suma es: %d",s);
		}
		
	int suma2(int a, int b){		// con retorno
		int s;
		s = a+b;
		return s;
		}