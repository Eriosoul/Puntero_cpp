#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int cols = 1;
    string** clientes;
    string** campos;
    int tamanio;
    string t;
    cout << "Cuantos clientes desea almacenar" ;
    getline(cin, t);
    tamanio = stoi(t); // se transforma la T en numero
    clientes = new string*[tamanio]; // asigno el tamaño almacenar en el array 

    int tamanio2;
    string t2;
    cout << "Cuantos campos desea almacenar" ;
    getline(cin, t2);
    tamanio2 = stoi(t2); // se transforma la T2 en num
    campos = new string*[tamanio2]; // asigno el tamaño almacenar en el array 

    string nombrecampo;
    for (int i = 0; i < tamanio; i++)
    {
        cout << "====== Cliente "<< i + 1 << " ======" << endl;
        // indico las veces que debera realizar el for
        for (int i = 0; i < tamanio2; i++)
        {
            cout << "Nombre del campo" << i + 1 << ": ";
            cin >> nombrecampo;
            campos[i][0] = nombrecampo;
            //cout << "recorro el segundo array meintras lo voy almacenando" << endl;
        }
    }
    for (int i = 0; i < tamanio2; i++)
    {
        delete [] campos [i];
        delete [] clientes [i];
        //liberamos espacio de memoria
    }
    system("pause");

    return 0;
}