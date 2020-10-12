#include <iostream>

#include "computadora.h"

using namespace std;

int main(){

    Computadora pc0 = Computadora("Toshiba", "Windows", 16, "Core I10");

    cout << pc0.getMarca() << endl;
    cout << pc0.getSO() << endl;
    cout << pc0.getMemoriaRam() << endl;
    cout << pc0.getProcesador() << endl;

    return 0;
}