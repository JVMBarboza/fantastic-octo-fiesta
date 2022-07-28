//-------------------------------------------------------------------------------------------------------
/*
* @1
* Desenvolver a função: ‘maior_valor’; que recebe quatro valores do tipo inteiro e retorna o maior valor.
*
*/
//-------------------------------------------------------------------------------------------------------

#include <stdio.h>

int maior_valor(int v1, int v2, int v3, int v4){

	int n = 3; //subst por fuincao que detecta numero de args
	int identificadorMaximo = v1, vetorAuxiliar[3]={v2,v3,v4};
	
	for(int i=0; i<n; i++){
		if( identificadorMaximo < vetorAuxiliar[i] )
			identificadorMaximo = vetorAuxiliar[i];
	}

	return identificadorMaximo;
}

int main(int argc, char **argv){
	
	int a, b, c, d;
	
	scanf("%d %d %d %d", &a, &b, &c, &d);
	int valor = maior_valor(a, b, c, d);
	printf("%d", valor);

	return 0;
}
