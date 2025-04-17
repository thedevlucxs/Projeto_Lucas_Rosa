// D.h
// Declaração da Classe D

#ifndef D_H   // Include guard para evitar inclusão múltipla
#define D_H

#include <string> // Precisamos incluir para usar std::string

class D {
public: // Mantendo público para consistência com os exemplos anteriores

    // Atributos
    int D1;                 // Exemplo: um atributo inteiro
    std::string D2;         // Exemplo: um atributo string

    // Métodos (Declarações)
    void MD1();                          // Método simples
    bool MD2(int valorEntrada);          // Método que recebe um int e retorna um bool

    // Construtor (opcional, não solicitado, mas bom ter)
    D();
};

#endif // D_H