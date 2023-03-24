#include <stdio.h>
#include <ctype.h>
#include <iostream>
using namespace std;

int main()
{
    int c; 
    int palabras = 0;
    int separador = 1; 

    cout<<("Ingrese el texto que desea contar las palabras:\n");
    
    do {
        c = getchar(); // Lee un car�cter 
        if (isspace(c) || c == EOF) { // Si el car�cter es un espacio o el fin de archivo
            if (!separador) { // Si no hab�a un separador antes
                palabras++; // Incrementa el contador de palabras
                separador = 1; // Indica que hay un separador
            }
        }
        else { // Si el car�cter no es un espacio ni el fin de archivo
            separador = 0; // Indica que no hay un separador
        }
    } while (c != EOF); // Repite hasta que se encuentre el fin de archivo

    cout<<("La cantidad de palabras es:\n");
    cout<<(palabras); // Muestra el resultado

    return 0;
}
