// A.h - Declaração da Classe A
#ifndef A_H // Include Guard para evitar inclusão múltipla
#define A_H

class A {
private: // Atributos privados
    int a1;
    float a2;

public: // Membros públicos
    // Construtor (opcional, mas boa prática)
    A(); // Construtor padrão
    A(int val1, float val2); // Construtor parametrizado

    // Getters (métodos de acesso) - marcados como const pois não alteram o objeto
    int getA1() const;
    float getA2() const;

    // Setters (métodos modificadores)
    void setA1(int value);
    void setA2(float value);

    // Métodos solicitados
    void MA1();
    void MA2();
    void MA3(); 
};

#endif // A_H
