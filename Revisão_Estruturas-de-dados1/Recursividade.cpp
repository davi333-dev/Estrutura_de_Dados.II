#include <iostream>

int fatorial(int n) {
    // 1. Caso Base
    if (n <= 1) {
        return 1;
    }
    // 2. Caso Recursivo
    return n * fatorial(n - 1);
}

int main() {
    std::cout << "Fatorial de 4: " << fatorial(4) << std::endl;
    return 0;
}
