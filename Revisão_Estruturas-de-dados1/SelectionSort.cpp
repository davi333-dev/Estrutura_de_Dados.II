#include <stdio.h>

int vetor[5] = {5,1,3,4,2};

int main() {
    int qtd = 5, aux, cont = 0;
    int menor_idx; // Variável para guardar o índice do menor elemento
    
    printf("\nVetor Original: ");
    for(int i = 0; i < qtd; i++) {
        printf(" [%i] ", vetor[i]);
    }
    
    for(int i = 0; i < qtd - 1; i++) {
        menor_idx = i; // Assume que o primeiro elemento da sublista é o menor
        
        // Este laço apenas PROCURA pelo menor elemento, sem fazer trocas ainda
        for(int j = i + 1; j < qtd; j++) {
            if(vetor[j] < vetor[menor_idx]) {
                menor_idx = j; // Guarda a posição de onde está o menor número
            }
        }
        
        // Se o menor elemento encontrado não for o que já estava na posição 'i', faz a troca
        if(menor_idx != i) {
            aux = vetor[i];
            vetor[i] = vetor[menor_idx];
            vetor[menor_idx] = aux;
            cont++; // Só conta a troca real aqui
        }
    }
    
    printf("\nVetor Ordenado: ");
    for(int i = 0; i < qtd; i++) {
        printf(" [%i] ", vetor[i]);
    }
    
    printf("\nTotal de trocas realizadas: %i\n", cont);
    
    return 0;
}

