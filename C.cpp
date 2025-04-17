// C.cpp
// Arquivo de implementação para a classe C

#include "C.h"       // Inclui a declaração da classe C (do arquivo C.h)
#include <iostream> // Necessário para usar std::cout para impressão na tela

// Implementação do método MC1()
// O prefixo "C::" indica que este método pertence à classe C
void C::MC1() {
    // Imprime o nome do método na tela, seguido de uma nova linha
    std::cout << "MC1" << std::endl;
}

// Implementação do método MC2()
void C::MC2() {
    // Imprime o nome do método na tela, seguido de uma nova linha
    std::cout << "MC2" << std::endl;
}

// Implementação do método MC3()  <-- ADICIONADO
void C::MC3() {
    // Imprime o nome do método na tela, seguido de uma nova linha
    std::cout << "MC3" << std::endl;
}


// Observação:
// Os atributos (C1, C2) são declarados em C.h.
// Não precisamos de código adicional para eles aqui, a menos que
// tivéssemos um construtor ou outros métodos que os manipulassem.