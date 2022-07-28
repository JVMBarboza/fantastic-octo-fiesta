//-------------------------------------------------------------------------------------------------------
/*
* @2
* Desenvolva a função que retorna o valor fatorial no parâmetro 'valor_ft'
*
*/
//------------------------------------------------------------------------------------------------------
#include <stdio.h>

int fatorial(int n){
	if(n==0)
		return 1;
	return (n*fatorial(n-1));
}

void calc_fatorial(int *valor_ft, int valor_n){
	
	*valor_ft = fatorial(valor_n);

}

int main(int argc, char **argv){
	
	int v, vf = 0;
	int *pv = &v;
	
	scanf("%d", &v);
	calc_fatorial(&vf, *pv);
	printf("Valor fatorial de: [%d] é [%d]\n", v, vf);

	return 0;
}
