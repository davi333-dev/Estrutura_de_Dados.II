#include <stdio.h>

//Escreva um algoritmo que ordene 5 valores inteiro de forma crescente
int vetor[5] = {5,3,1,4,2};

int main (){
	int qtd = 5, i, j, aux, trocas;

	printf("\nVetor Original: ");
	for(int i=0; i<qtd; i++){
		printf(" [%i] ",vetor[i]);
		trocas = 0;
	}
	
	//Algoritmo de inserção
	
	for(int i=1; i < qtd; i++){  //Estamos percorrendo o Arranjo por fora
		aux = vetor[i];			//Começamos guardadando a posição atual
		j = i - 1;
	while(j > = 0 && aux < vetor[j]){
	vetor[j+1] = vetor[j];
	j--;
	trocas++;
}
vetor[j+1] = aux;
}
	
		printf("\nVetor Ordenado: ");
	for(int i =0; i <qtd; i++){
		printf(" [%i] ",vetor[i]);
	}
	
}

