//
// Created  on 11/24/2018.
//

#ifndef CONJUNTO_CONJUNTO_H
#define CONJUNTO_CONJUNTO_H

#include <iostream>
#include <vector>
#include "Util.h"

using namespace std;

class Conjunto
{
    vector<TypeElemento> elementos;
    friend ostream& operator<<(ostream& output, Conjunto& c);
public:
    // Agregar Elementos
    void agregar_elemento(const TypeElemento& value);
    void operator<<(const TypeElemento& value);

    // Operaciones
    Conjunto operator+(const Conjunto& other); // Union
    Conjunto operator-(const Conjunto& other); // Diferencia
    Conjunto operator*(const Conjunto& other); // Interseccion
};

#endif //CONJUNTO_CONJUNTO_H
