#include "laboratorio.h"

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

void Laboratorio::mostrar(){
    for(size_t i = 0; i < contador; i++){
        Computadora &c = computadoras[i];
        cout << "Marca: " << c.getMarca() << endl;
        cout << "Sistema operativo: " << c.getSO() << endl;
        cout << "Memoria RAM: " << c.getMemoriaRam() << endl;
        cout << "Procesador: " << c.getProcesador() << endl;
        cout << endl;
    }
}