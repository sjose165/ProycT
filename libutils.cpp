//
// Created by ixbalcan on 24/02/21.
//
#include "libutils.h"
#include <iostream>
#include<vector>
#include<string>
using namespace std;

vector<Tboleto> vboletos;

void captura_de_datos (int&ciudad)
{
    Tboleto BoletoN;
    vboletos.push_back(BoletoN);
    BoletoN.origen = "puebla";
    BoletoN.precio = 250.45;
    BoletoN.fecha = { dia_num:18, dia: Tdia::Jueves, mes: Tmes::Marzo, anno:2021, hora:15, min:45};
    if ((ciudad <= 5) && (ciudad >= 0))//si el numero esta entre lista dada entra a la eleccion
    {
        do
        {
            switch (ciudad)
            {
                case 1:
                    BoletoN.destino = "CDMX";
                    ciudad = 0;
                    break;
                case 2:
                    BoletoN.destino = "Jalapa";
                    ciudad = 0;
                    break;
                case 3:
                    BoletoN.destino = "Tuxtla";
                    ciudad = 0;
                    break;
                case 4:
                    BoletoN.destino = "San critobal";
                    ciudad = 0;
                    break;
                case 5:
                    BoletoN.destino = "Comitan";
                    ciudad = 0;
                    break;
            }

        }while (ciudad != 0);
        BoletoN.imprimir();
    }
    else if (ciudad > 5)//en caso de que el usuario ingrese un numero que no se encuentra en el
        //menu arroja el siguiente mensaje
    {
        cout << "El numero seleccionado no corresponde con ninguna opcion" << '\n';
        cout << "Intentelo de nuevo con un numero entre el 1 y el 5" << '\n';
    }
}
void Tfecha::imprimir_fecha()
{
    switch (dia)
    {
        case Tdia::Lunes:
            cout<<"Lunes/";
            break;
        case Tdia::Martes:
            cout<<"Martes/";
            break;
        case Tdia::Miercoles:
            cout<<"Miercoles/";
            break;
        case Tdia::Jueves:
            cout<<"Jueves/";
            break;
        case Tdia::Viernes:
            cout<<"Viernes/";
            break;
        case Tdia::Sabado:
            cout<<"Sabado/";
            break;
        case Tdia::Domingo:
            cout<<"Domingo/";
            break;
    }
    cout<< dia_num << "/" ;
    switch (mes)
    {
        case Tmes::Enero:
            cout<<"Enero";
            break;
        case Tmes::Febrero:
            cout<<"Febrero";
            break;
        case Tmes::Marzo:
            cout<<"Marzo";
            break;
        case Tmes::Abril:
            cout<<"Abril";
            break;
        case Tmes::Mayo:
            cout<<"Mayo";
            break;
        case Tmes::Junio:
            cout<<"Junio";
            break;
        case Tmes::Julio:
            cout<<"Julio";
            break;
        case Tmes::Agosto:
            cout<<"Agosto";
            break;
        case Tmes::Septiembre:
            cout<<"Septiembre";
            break;
        case Tmes::Octubre:
            cout<<"Octubre";
            break;
        case Tmes::Noviembre:
            cout<<"Noviembre";
            break;
        case Tmes::Diciembre:
            cout<<"Diciembre";
            break;
    }
    cout<< "/" << anno << "/" << " " << hora << ":" << min;
    cout<<"         ******"<< '\n';
}
void Tboleto::imprimir()
{
    cout <<"**********************************************************************"<<'\n';
    cout<<"******              Informacion del boleto adquirido            ******"<<'\n';
    cout<<"******              Origen: "<< origen <<"                              ******"<<'\n';
    cout<<"******              Destino: "<< destino <<"                           ******"<<'\n';
    cout<<"******              Salida: ";
    fecha.imprimir_fecha();
    cout<<"******              Precio: "<< precio << "                              ******"<<'\n';
}