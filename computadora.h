#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include <iostream>
#include <iomanip>

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

    friend ostream& operator<<(ostream &out, const Computadora &c){
        out << left;
        out << setw(10) << c.marca;
        out << setw(10) << c.sistemaOperativo;
        out << setw(5) << c.memoriaRam;
        out << setw(10) << c.procesador;
        out << endl;
        
        return out;
    }
};

#endif