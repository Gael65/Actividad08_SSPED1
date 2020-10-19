#include "laboratorio.h"
#include <fstream>

Laboratorio::Laboratorio(){
    contador = 0;
}

void Laboratorio::agregarFinal(const Computadora &c){
    if(contador < 5){
        computadoras[contador] = c;
        contador++;
    }
    else
        cout << "Arreglo lleno..." << endl;
}

void Laboratorio::respaldar_tabla() {
    ofstream archivo("computadoras_tabla.txt");
    if (archivo.is_open()) {
        archivo << left;
        archivo << setw(10) << "Marca";
        archivo << setw(10) << "S.O.";
        archivo << setw(5) << "RAM";
        archivo << setw(10) << "Procesador";
        archivo << endl;
        for(size_t i = 0; i < contador; i++){
            Computadora &c = computadoras[i];
            archivo << c;
        }
    }
    archivo.close();
}

void Laboratorio::respaldar() {
    ofstream archivo("computadoras.txt");
    if (archivo.is_open()) {
        for (size_t i = 0; i < contador; i++) {
            Computadora &c = computadoras[i];
            archivo << c.getMarca() << endl;
            archivo << c.getSO() << endl;
            archivo << c.getMemoriaRam() << endl;
            archivo << c.getProcesador() << endl;
        }
    }
    archivo.close();
}

void Laboratorio::mostrar(){
    cout << left;
    cout << setw(10) << "Marca";
    cout << setw(10) << "S.O.";
    cout << setw(5) << "RAM";
    cout << setw(10) << "Procesador";
    cout << endl;
    for(size_t i = 0; i < contador; i++){
        Computadora &c = computadoras[i];
        cout << c;
    }
}