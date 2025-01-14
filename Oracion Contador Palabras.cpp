// Gabriel Nuñez Medina, 2023-1871

#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string oracion;
    int contador = 0;

    cout << "Escribe una oracion: ";
    getline(cin, oracion);

    for (int i = 0; i < oracion.length(); i++) {
        if (oracion[i] == ' ') {
            contador++;
        }
    }

    contador++;

    cout << "Cantidad de palabras en la oracion: " << contador << endl;

    return 0;
}

