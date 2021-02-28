//
// Created by sjose on 27/02/2021.
//

#ifndef PRUEBACODIGO_PRUEBALIB2_H
#define PRUEBACODIGO_PRUEBALIB2_H


#include <iostream>
#include<vector>
#include<string>
#include<unordered_map>
#include <algorithm>
using namespace std;
enum class Tmes {Enero, Febrero, Marzo, Abril, Mayo, Junio, Julio, Agosto, Septiembre, Octubre, Noviembre, Diciembre};
enum class Tdia{Lunes, Martes, Miercoles, Jueves, Viernes, Sabado, Domingo};
//bool fnbuscar(vector<BoletoN>, &x,function<bool(BoletoN&)>callback);
struct Tfecha
{
    int dia_num;
    Tdia dia;
    Tmes mes;
    unsigned anno;
    short hora;
    short min;
    void imprimir_fecha();
};
struct Tboleto
{
    unsigned numBoleto;
    string origen,destino;
    Tfecha fecha;
    float precio;
    void imprimir();
};
void captura_de_datos (int&, int&);
void costo(int&, Tboleto&);
bool fnbuscar( unsigned&);

#endif //PRUEBACODIGO_PRUEBALIB2_H
