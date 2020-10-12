#ifndef LABORATORIO_H
#define LABORATORIO_H

#include <iostream>

#include "computadora.h"

using namespace std;

class Laboratorio {
private:
    Computadora computadoras[5];
    size_t contador;
public:
    Laboratorio();
    void agregarFinal(const Computadora &c);
    void mostrar();
};

#endif