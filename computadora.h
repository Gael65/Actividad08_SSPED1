#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include <iostream>

using namespace std;

class Computadora {
private:
    string marca;
    string sistemaOperativo;
    int memoriaRam;
    string procesador;
public:
    Computadora();
    Computadora(const string &marca, const string &sistemaOperativo, int memoriaRam, const string &procesador);

    void setMarca(const string &v);
    void setSO(const string &v);
    void setMemoriaRam(int v);
    void setProcesador(const string &v);

    string getMarca();
    string getSO();
    int getMemoriaRam();
    string getProcesador();
};

#endif