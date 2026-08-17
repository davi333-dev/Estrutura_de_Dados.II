#include <stdio.h>

// Vetor global de 5 elementos
int vetor[5] = {5, 3, 1, 4, 2};
int qtd = 5;

// Função auxiliar para imprimir o vetor sem poluir o código principal
void imprimirVetor() {
    for(int i = 0; i < qtd; i++) {
        printf("[%i] ", vetor[i]);
    }
    printf("\n");
}

int main() {
    int troca = 0;
    int aux;
    
    printf("Vetor Original: ");
    imprimirVetor();
    printf("--------------------------------------------------\n");
    
    // ==================================================
    // 1. ORDENAÇÃO CRESCENTE
    // ==================================================
    printf("\n--- Iniciando Ordenacao Crescente ---\n");
    
    for (int i = 0; i < qtd - 1; i++) {
        for(int j = 0; j < qtd - 1 - i; j++) {
            
            if (vetor[j] > vetor[j+1]) { // Se o elemento atual for maior que seu vizinho
                
                // Exibe o momento ANTES da troca
                printf("?? [TROCA #%i] %i eh maior que %i. Trocando de lugar...\n", troca + 1, vetor[j], vetor[j+1]);
                
                // Realiza a troca de posição
                aux = vetor[j]; 		
                vetor[j] = vetor[j+1]; 
                vetor[j+1] = aux;
                troca++;
                
                // Exibe o estado do vetor LOGO APÓS a troca
                printf("?? Vetor atual: ");
                imprimirVetor();
            }
        }
    }
    
    printf("\nVetor Ordenado: ");
    imprimirVetor();
    printf("Total de trocas na ordenacao: %i\n", troca);
    printf("--------------------------------------------------\n");
    
    // ==================================================
    // 2. ORDENAÇÃO DECRESCENTE (INVERSÃO)
    // ==================================================
    printf("\n--- Iniciando Inversao (Decrescente) ---\n");
    int trocaInversao = 0; // Novo contador para a inversão
    
    for (int i = 0; i < qtd - 1; i++) {
        for(int j = 0; j < qtd - 1 - i; j++) {
            
            if (vetor[j] < vetor[j+1]) { // Se o elemento atual for menor que seu vizinho
                
                // Exibe o momento ANTES da troca
                printf("?? [INVERSAO #%i] %i eh menor que %i. Trocando de lugar...\n", trocaInversao + 1, vetor[j], vetor[j+1]);
                
                // Realiza a troca de posição
                aux = vetor[j]; 		
                vetor[j] = vetor[j+1]; 
                vetor[j+1] = aux;
                trocaInversao++;
                
                // Exibe o estado do vetor LOGO APÓS a troca
                printf("?? Vetor atual: ");
                imprimirVetor();
            }
        }
    }
    
    printf("\nVetor Invertido: ");
    imprimirVetor();
    printf("Total de trocas na inversao: %i\n", trocaInversao);
    
    return 0;
}
