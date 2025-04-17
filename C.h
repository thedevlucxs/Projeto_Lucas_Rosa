// C.h
#ifndef C_H // Include guard - Início
#define C_H

#include <string> // Necessário para std::string

class C {
public: // Tornando público para seguir o exemplo Java, mas considere private/getters/setters
    // Atributos
    std::string C1;
    int C2;

    // Métodos (Declarações)
    void MC1();
    void MC2();

    // Opcional: Declaração de um construtor, se necessário
    // C();
};

#endif // C_H // Include guard - Fim