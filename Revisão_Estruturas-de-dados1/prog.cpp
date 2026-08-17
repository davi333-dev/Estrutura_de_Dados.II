#include <iostream>

// 1. Definimos a função primeiro para o compilador conhecê-la
int somarValores(int a, int b) {
    int soma;
    soma = a + b;
    return soma;
}

// 2. A função principal onde o programa começa
int main() {
    int numero1 = 5;
    int numero2 = 3;
    int resultado;

    // Chamada da função passando as variáveis locais
    resultado = somarValores(numero1, numero2);

    // Mostra o resultado na tela
    std::cout << "O resultado da soma é: " << resultado << std::endl;

    return 0;
}
