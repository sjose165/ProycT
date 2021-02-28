#include <iostream>
#include<vector>
#include<string>
#include "libutils.h"
using namespace std;

int main()
{
    int e;//declaramos variable para elegir dentro del menu
    do//se realiza el ciclo que esta a continuacion.
    {
        //menu
        cout << "**********************************************************************"<<'\n';
        cout << "******   Usted se encuentra el la Terminal de autobuses CAPU.   ******"<<'\n';
        cout << "******   Elija una de las siguientes opciones opciones.         ******"<<'\n';
        cout << "**********************************************************************"<<'\n';
        cout << "**********************************************************************"<<'\n';
        cout << "******              (1) Comprar un boleto.                      ******"<<'\n';
        cout << "******              (2) Buscar un boleto.                       ******"<<'\n';
        cout << "******              (3) Salir del programa.                     ******"<<'\n';
        cout << "**********************************************************************"<<'\n';
        cout << "**********************************************************************"<<'\n';
        cin >> e;//el usuario elije que quiere hacer
        if ((e <= 3) && (e >= 0))//si el numero esta entre lista dada entra a la eleccion
        {
            switch (e)//casos
            {
                case 1://Comprar boletos.
                    cout << '\n';
                    cout << "**********************************************************************"<<'\n';
                    cout << "******        Usted a elegido el comprar un boleto.             ******"<<'\n';
                    cout << "**********************************************************************"<<'\n';
                    cout << "******                  Elija un destino.                       ******"<<'\n';
                    cout << "******           (1) CDMX..................$150.25              ******"<<'\n';
                    cout << "******           (2) Jalapa................$250.50              ******"<<'\n';
                    cout << "******           (3) Tuxtla................$250.80              ******"<<'\n';
                    cout << "******           (4) San critobal..........$300.10              ******"<<'\n';
                    cout << "******           (5) Comitan...............$350.45              ******"<<'\n';
                    cout << "**********************************************************************"<<'\n';
                    int ciudad;
                    int pago;
                    cin>>ciudad;
                    pago=ciudad;
                    captura_de_datos (ciudad, pago);
                    e = 0;
                    break;
                case 2://Buscar boleto.S
                    cout << "**********************************************************************"<<'\n';
                    cout << "Usted a elegido buscar un boleto" << '\n';
                    cout << '\n';
                    e = 0;
                    break;
                case 3://el caso 3 solo imprime el mensaje y deja
                    //la variable de eleccion en 6 para salir del programa.
                default:
                    cout << '\n';
                    cout << "Usted a elegido salir del programa." << '\n';
                    cout << '\n';
                    break;
            }
        }
        else if (e > 3)//en caso de que el usuario ingrese un numero que no se encuentra en el
            //menu arroja el siguiente mensaje
        {
            cout << "El numero seleccionado no corresponde con ninguna opcion" << '\n';
            cout << "Intentelo de nuevo con un numero entre el 1 y el 6" << '\n';
        }
    } while (e != 3);//todo lo anterior se realizara siempre y cuando e no sea 4
    return 0;
}