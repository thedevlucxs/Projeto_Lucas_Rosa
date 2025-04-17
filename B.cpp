// B.cpp - Implementação da Classe B
#include "B.h"
#include <iostream>

// Implementação dos Construtores
B::B() : b1(0), b2(0.0f) {}

B::B(int val1, float val2) : b1(val1), b2(val2) {}

// Implementação dos Getters
int B::getB1() const {
    return b1;
}

float B::getB2() const {
    return b2;
}

// Implementação dos Setters
void B::setB1(int value) {
    b1 = value;
}

void B::setB2(float value) {
    b2 = value;
}

// Implementação dos Métodos
void B::MB1() {
    std::cout << "Executando MB1 da Classe B" << std::endl;
}

void B::MB2() {
    std::cout << "Executando MB2 da Classe B" << std::endl;
}
