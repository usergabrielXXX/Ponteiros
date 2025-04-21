#include <iostream>

int main(void) {

    int dado_normal = 20;
    int* ptr_inteiro = nullptr; // nullptr garante que o ponteiro seja nulo
    ptr_inteiro = &dado_normal; // ptr_inteiro recebe o endereço de dado_normal
    std::cout << "-------------------------------------------------------" << '\n';
    std::cout << "valores e endereços de dado_normal:" << '\n';
    std::cout << "conteúdo de dado_normal: " << dado_normal << '\n';
    std::cout << "endereço de dado_normal: " << &dado_normal << '\n' << '\n';
    std::cout << "Tamanho de dado em bytes: " << sizeof(dado_normal) << '\n';
    std::cout << "-------------------------------------------------------" << '\n';
    std::cout << "valores e endereço de ptr_inteiro:" << '\n';
    std::cout << "conteúdo de ptr_inteiro: " << *ptr_inteiro << '\n';
    std::cout << "endereço de ptr_inteiro: " << ptr_inteiro << '\n';
    std::cout << "Tamanho de ptr_inteiro em bytes: " << sizeof(ptr_inteiro) << '\n';
    std::cout << "-------------------------------------------------------" << '\n';
    int** ptr_duplo = &ptr_inteiro;
    std::cout << "conteúdo de ptr_duplo: " << **ptr_duplo << '\n';
    std::cout << "endereço de ptr_duplo: " << &ptr_duplo << '\n';
    std::cout << "Tamanho de ptr_duplo em bytes: " << sizeof(ptr_duplo) << '\n';
    std::cout << "-------------------------------------------------------" << '\n';

    std::cout << "int: " << sizeof(int) << '\n';
    std::cout << "float: " << sizeof(float) << '\n';
    std::cout << "double: " << sizeof(double) << '\n';
    std::cout << "char: " << sizeof(char) << '\n';

    return 0;
}
