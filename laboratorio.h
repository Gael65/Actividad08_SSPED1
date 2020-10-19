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
    void respaldar_tabla();
    void respaldar();
    void recuperar();

    friend Laboratorio& operator<<(Laboratorio &l, const Computadora &c){
        l.agregarFinal(c);

        return l;
    }
};

#endif