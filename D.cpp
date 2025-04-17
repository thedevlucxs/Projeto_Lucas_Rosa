// D.cpp
// Implementação da Classe D

#include "D.h"       // Inclui a declaração da classe (essencial)
#include <iostream> // Para imprimir na tela (std::cout)

// Implementação do Construtor (opcional, inicializa atributos)
D::D() : D1(0), D2("Valor Padrao") { // Inicializa D1 com 0 e D2 com "Valor Padrao"
    std::cout << "Construtor da Classe D chamado." << std::endl;
}

// Implementação do método MD1()
void D::MD1() {
    // Imprime o nome do método na tela
    std::cout << "MD1" << std::endl;
    // Poderia fazer algo com D1 ou D2 aqui
    std::cout << "  Valor atual de D1: " << D1 << std::endl;
    std::cout << "  Valor atual de D2: " << D2 << std::endl;
}

// Implementação do método MD2()
bool D::MD2(int valorEntrada) {
    // Imprime o nome do método na tela
    std::cout << "MD2" << std::endl;
    std::cout << "  Recebido valorEntrada: " << valorEntrada << std::endl;
    // Exemplo de lógica: retorna true se valorEntrada for maior que D1
    if (valorEntrada > D1) {
        D2 = "Entrada maior que D1"; // Modifica o atributo D2
        std::cout << "  Retornando true" << std::endl;
        return true;
    } else {
        D2 = "Entrada nao maior que D1"; // Modifica o atributo D2
        std::cout << "  Retornando false" << std::endl;
        return false;
    }
}