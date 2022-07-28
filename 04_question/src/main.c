//---------------------------------------------------------------------------------------------------------
/*
* @4
* Desenvolva a função a qual recebe dois valores de inteiros e que faça a todas as operacoes de ‘Bitwise’ e devolva o maior resultado
* entre eles.
*/
//---------------------------------------------------------------------------------------------------------
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int calculate_the_maximum(int v1, int v2) {

    int z, i, max;
  

    //verifica maior
    z = v1 - v2;
    i = (z >> 31) & 1;
    max = v1 - (i * z);


    //demais operações bitwise
    printf("v1 = %d, v2 = %d\n", v1, v2);
    
    printf("v1&v2 = %d\n", v1 & v2); //& (AND) 
 
    printf("v1|v2 = %d\n", v1 | v2); //| (OR)
 
    printf("v1^v2 = %d\n", v1 ^ v2); //^ (XOR)
 
    printf("~v1 = %d\n", v1 = ~v1); //~ (NOT)
    printf("~v2 = %d\n", v2 = ~v2); //~ (NOT)
 
    if( v1 >= 0 ) //<< (deslocamento para a esquerda)
    	printf("v1<<1 = %d\n", v1 << 1);
    if( v2 >= 0 )
    	printf("v2<<1 = %d\n", v2 << 1);
    	
    if( v1 >= 0 ) //<< (deslocamento para a direita)
    	printf("v1>>1 = %d\n", v1 >> 1);
    if( v2 >= 0 )
    	printf("v2>>1 = %d\n", v2 >> 1);
 
    return max;
  
}

int main(int argc, char **argv){
	
	int valor_1, valor_2, maior_valor;
	
	printf("Informe os valores.\n");
	scanf("%d %d", &valor_1, &valor_2);
	
	maior_valor = calculate_the_maximum(valor_1, valor_2);
	printf("O maior valor e: %d .\n", maior_valor);
	
	return 0;
}

