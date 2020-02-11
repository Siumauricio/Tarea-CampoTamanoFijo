#include "Person.h";
#include <iostream>
#include <fstream>
#include <regex>
#include <string>
#include <string.h>
using namespace std;

void Person::Print2 () {
    string cadena;
    ifstream datos ("nombre.txt");
    if (datos.fail ()) {
        cout << "Texto entrada Estructura.txt no existe" << endl;
    } else {
        while (!datos.eof ()) {
            getline (datos, cadena); //con esta funcion tomas la linea(limitada por \n)
            cout << cadena << endl;
        }
    }
}

Person::Person () {
    LastName[0] = 0;
    FirstName[0] = 0;
    Address[0] = 0;
    City[0] = 0;
    State[0] = 0;
    ZipCode[0] = 0;
}

void Person::ingresar () {
    Person p;
    ofstream fs ("nombre.txt", ios::app);

    // Enviamos una cadena al fichero de salida:
    cout << "Ingresa 1 Nombre: ";
    cin >> p.FirstName;

    cout << "Ingresa 1 Apellido: ";
    cin >> p.LastName;

    cout << "Ingresa Direccion: ";
    cin.ignore ();
    cin.getline (p.Address, 16);

    cout << "Ingresa Ciudad: ";
    cin.getline (p.City, 16);

    cout << "Ingresa Estado: ";
    cin.ignore ();


    cin.getline (p.State, 3);

    cout << "Ingresa Codigo Postal: ";

    cin.getline (p.ZipCode, 10);

    fs << p.FirstName<<" ";
    fs << p.LastName << " ";
    fs << p.Address << " ";
    fs << p.City << " ";
    fs << p.State << " ";
    fs << p.ZipCode << " ";
    fs.close ();
}

/*
Utilizando la clase Persona, implementar la estrategia de Tamaño fijo de campos y Tamaño fijo de Registro.

Consideraciones:

1. Modificar la clase persona para que el print imprima todo el contenido del archivo (de forma columnar)

2. Modificar la clase persona para que pueda escribir el registro al archivo.

3. Crear la aplicacion  de consola (read_reg_fijo.cpp), que lea los datos de la consola y escriba el contenido del archivo.

Subir archivos para clase persona (.h y.cpp) y el archivo.cpp principal.
*/