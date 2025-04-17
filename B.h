// B.h - Declaração da Classe B
#ifndef B_H
#define B_H

class B {
private:
    int b1;
    float b2;

public:
    // Construtores
    B();
    B(int val1, float val2);

    // Getters
    int getB1() const;
    float getB2() const;

    // Setters
    void setB1(int value);
    void setB2(float value);

    // Métodos
    void MB1();
    void MB2();
    void MB3();
};

#endif // B_H