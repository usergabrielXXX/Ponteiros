#include <iostream>
#define MAX_TAM 5

int main(void) {
    // Alocação dinâmica para o vetor
    int* ptrVetor = new int[MAX_TAM];

    if (ptrVetor)  std::cout << "Memória alocada com sucesso!" << '\n';
    if(!ptrVetor) {
        std::cout << "Falha na alocação de memória!" << '\n';
        return 1; // Encerra o programa em caso de falha
    }

    // Entrada de valores no vetor
    for (size_t i = 0; i < MAX_TAM; ++i) {
        std::cout << "Insira o valor " << i + 1 << " de " << MAX_TAM << ": ";
        std::cin >> ptrVetor[i];
    }

    // Exibição dos valores e endereços
    std::printf("\nValores:\n");
    for (size_t i = 0; i < MAX_TAM; ++i)
        std::cout << "Valor [" << i << "]: " << ptrVetor[i] << '\n';

    std::printf("\nEndereços:\n");
    for (size_t i = 0; i < MAX_TAM; ++i)
        std::cout << "Endereço [" << i << "]: " << &ptrVetor[i] << '\n';

    // Liberação da memória alocada
    delete[] ptrVetor;
    ptrVetor = nullptr; // Define o ponteiro como nulo após liberar a memória

    if (ptrVetor) std::cout << "Memória ainda alocada!" << '\n';
    if(!ptrVetor) std::cout << "Memória desalocada com sucesso!" << '\n';

    return 0;
}