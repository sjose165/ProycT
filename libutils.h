//
// Created by ixbalcan on 24/02/21.
//
#ifndef BOLETO_LIBUTILS_H
#define BOLETO_LIBUTILS_H
#include <iostream>
#include<vector>
#include<string>
#include<unordered_map>
using namespace std;
enum class Tmes {Enero, Febrero, Marzo, Abril, Mayo, Junio, Julio, Agosto, Septiembre, Octubre, Noviembre, Diciembre};
enum class Tdia{Lunes, Martes, Miercoles, Jueves, Viernes, Sabado, Domingo};

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
    string origen,destino;
    Tfecha fecha;
    float precio;
    void imprimir();
};
void captura_de_datos (int&, int&);
void costo(int&, Tboleto&);
#endif //BOLETO_LIBUTILS_H
