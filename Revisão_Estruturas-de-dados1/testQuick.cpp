#include <stdio.h>

// Função para trocar dois elementos de lugar
void trocar(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

// Função que faz o particionamento (organiza ao redor do pivô)
int particionar(int vetor[], int baixo, int alto) {
    int pivo = vetor[alto]; // Escolhe o último elemento como pivô
    int i = (baixo - 1);    // Índice do menor elemento

    for (int j = baixo; j <= alto - 1; j++) {
        // Se o elemento atual for menor ou igual ao pivô
        if (vetor[j] <= pivo) {
            i++; // Avança o menor elemento
            trocar(&vetor[i], &vetor[j]);
        }
    }
    trocar(&vetor[i + 1], &vetor[alto]);
    return (i + 1); // Retorna a posição correta do pivô
}

// Função principal do Quick Sort (Recursiva)
void quickSort(int vetor[], int baixo, int alto) {
    if (baixo < alto) {
        // p_indice é o índice onde o pivô foi parar
        int p_indice = particionar(vetor, baixo, alto);

        // Ordena separadamente os elementos antes e depois do pivô
        quickSort(vetor, baixo, p_indice - 1);
        quickSort(vetor, p_indice + 1, alto);
    }
}

int main() {
    int vetor[5] = {5, 3, 1, 4, 2};
    int qtd = 5;

    printf("Vetor Original: ");
    for(int i = 0; i < qtd; i++) printf("[%d] ", vetor[i]);

    // Chamamos o Quick Sort passando o índice inicial (0) e o final (qtd - 1)
    quickSort(vetor, 0, qtd - 1);

    printf("\nVetor Ordenado: ");
    for(int i = 0; i < qtd; i++) printf("[%d] ", vetor[i]);

    return 0;
}
