#include <stdio.h>
#define M 3

int verificaPosicao (int i, int j, int matriz[][]) {

	if (matriz[i][j] != ' ')
		return 0;
	if (i<0)
		return 0;
	if (i>=M)
		return 0;
	if (j<0)
		return 0;
	if (j>=M)
		return 0;

	return 1;	

}

void inicializaMatriz (int matriz[][]){
	
int i;
int j;

for (i = 0; i<M; i++){
	for (j = 0; j<M; j++){
		matriz[i][j] = 0;
	}
}

} 



