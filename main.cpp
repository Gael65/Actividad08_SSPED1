#include <iostream>

#include "laboratorio.h"

using namespace std;

int main(){

    Laboratorio myLab;

    Computadora pc0 = Computadora("Toshiba", "Windows", 16, "Core I10");
    Computadora pc1 = Computadora("Lenovo", "Linux", 8, "Core I5");
    Computadora pc2 = Computadora("Apple", "macOS", 8, "Core I5");

    myLab.agregarFinal(pc0);
    myLab.agregarFinal(pc1);
    myLab.agregarFinal(pc2);

    myLab.mostrar();
    
    return 0;
}