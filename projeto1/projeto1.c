#include <stdio.h>
#include <stdlib.h>

/*Problema 01
Integrantes:
140155350 - Matheus Filipe Faria Alves de Andrade
140146156 - João Victor Lustosa Braz
*/

int * fneuronio(int *ENTRADAS, int *PESOS, int lim, int max){
int SOMAP = 0;
int *saida = &SOMAP;

for(int i = 0; i < max; i++){
   SOMAP += ENTRADAS[i] * PESOS[i];
}

if(SOMAP > lim){
    *saida = 1;
}else{
    *saida = 0;
}

return saida;
}

int main(){

int *ENTRADAS, *PESOS, *resultado;
int lim, i;

ENTRADAS = (int *)malloc(10 * sizeof(int));
if(ENTRADAS == NULL){
    printf("Memória insuficiente\n");
    exit(1);
}

PESOS = (int *)malloc(10 * sizeof(int));
if(PESOS == NULL){
    printf("Memória insuficiente\n");
    exit(1);
}

for(i = 0; i < 10; i++){
    printf("Entrada nº%d: ", i+1);
    scanf("%d", &ENTRADAS[i]);
}

for(i = 0; i < 10; i++){
    printf("Peso nº%d: ", i+1);
    scanf("%d", &PESOS[i]);
}

printf("Insira o valor limiar: ");
scanf("%d", &lim);
printf("\n");

resultado = fneuronio(ENTRADAS, PESOS, lim, 10);

if(*resultado == 1){
    printf("Neurônio ativado!\n");
}

else{
    printf("Neurônio inibido!");
}

free(ENTRADAS);
free(PESOS);
printf("\n");

    return 0;
}
