#include <iostream>

int main(void)
{
    int dado {};                                       // Criação da variável
    int *ptr = new int;                                // Alocação dinâmica de memória

    (!ptr) ? std::cout << "ptr é nulo!" << '\n' : std::cout << "ptr não é nulo!" << '\n'; // Verificação de ptr

    std::cout << "Digite um número: ";                 // Entrada de dados via teclado
    std::cin >> dado;

    *ptr = dado;                                       // Armazena o valor de dado na memória alocada

    std::cout << "Valor de dado: " << dado << '\n';    // Exibição do valor de dado
    std::cout << "Endereço de dado: " << &dado << '\n'; // Exibição do endereço de dado
    std::cout << "Valor de ptr: " << *ptr << '\n';     // Exibição do valor apontado por ptr
    std::cout << "Endereço de ptr: " << ptr << '\n';   // Exibição do endereço armazenado em ptr

    delete ptr;                                        // Desalocação de memória
    ptr = nullptr;                                     // Define ptr como nulo após desalocação

    std::cout << "Segunda verificação de ptr: " << '\n'; // Segunda verificação de ptr
    (!ptr) ? std::cout << "ptr é nulo!" << '\n' : std::cout << "ptr não é nulo!" << '\n';

    return 0;
}