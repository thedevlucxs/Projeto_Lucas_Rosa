// A.cpp - Implementação da Classe A
#include "A.h"      // Inclui a declaração da classe
#include <iostream> // Necessário para std::cout

// Implementação do Construtor Padrão
A::A() : a1(0), a2(0.0f) {
    // Construtor padrão inicializa com valores padrão
}

// Implementação do Construtor Parametrizado
A::A(int val1, float val2) : a1(val1), a2(val2) {
    // Inicializa com os valores passados
}

// Implementação dos Getters
int A::getA1() const {
    return a1;
}

float A::getA2() const {
    return a2;
}

// Implementação dos Setters
void A::setA1(int value) {
    a1 = value;
}

void A::setA2(float value) {
    a2 = value;
}

// Implementação dos Métodos
void A::MA1() {
    std::cout << "Executando MA1 da Classe A" << std::endl;
}

void A::MA2() {
    std::cout << "Executando MA2 da Classe A" << std::endl;
}