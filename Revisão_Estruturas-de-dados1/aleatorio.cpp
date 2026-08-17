#include <stdio.h>
#include <cstdio>  // Para usar o printf
#include <random>  // Para usar o std::mt19937 e std::uniform_int_distribution
#include <ctime>   // Para usar o std::time

int main() {
    // 1. Inicializa o gerador com a semente do relógio
    std::mt19937 gerador(static_cast<unsigned int>(std::time(nullptr)));

    // 2. Define o intervalo dos números (ex: entre 1 e 100)
    std::uniform_int_distribution<int> distribuicao(1, 100);

    // 3. Cria o vetor com 40 posições
    int vetor[40];

    // 4. Loop para preencher o vetor com números aleatórios
    for (int i = 0; i < 40; i++) {
        vetor[i] = distribuicao(gerador);
    }

    // 5. Loop para imprimir o vetor usando printf
    printf("--- Elementos do Vetor ---\n");
    for (int i = 0; i < 40; i++) {
        // %02d formata para sempre mostrar 2 dígitos (ex: 05 em vez de 5)
        printf("Posicao [%02d]: %d\n", i, vetor[i]);
    }

    return 0;
}
