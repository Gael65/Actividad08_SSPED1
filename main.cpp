#include <iostream>

#include "laboratorio.h"

using namespace std;

int main(){
    Laboratorio myLab;

    Computadora pc0 = Computadora("Toshiba", "Windows", 16, "Core I10");
    Computadora pc1 = Computadora("Lenovo", "Linux", 8, "Core I5");
    Computadora pc2 = Computadora("Apple", "macOS", 8, "Core I5");
    Computadora pc3;

    cin >> pc3; //Capturamos una computadora con el operador sobrecargado

    myLab << pc0;
    myLab << pc1;
    myLab << pc2;
    myLab << pc3;

    cout << endl;
    cout << pc3; //Mostramos una computadora con el operador sobrecragado (pc3)
    cout << endl;

    myLab.respaldar_tabla();
    myLab.respaldar();

    myLab.mostrar(); //Mostramos el resto de computadoras mediante la función mostrar

    return 0;
}