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
        c = getchar(); // Lee un carácter 
        if (isspace(c) || c == EOF) { // Si el carácter es un espacio o el fin de archivo
            if (!separador) { // Si no había un separador antes
                palabras++; // Incrementa el contador de palabras
                separador = 1; // Indica que hay un separador
            }
        }
        else { // Si el carácter no es un espacio ni el fin de archivo
            separador = 0; // Indica que no hay un separador
        }
    } while (c != EOF); // Repite hasta que se encuentre el fin de archivo

    cout<<("El número de palabras es: %d\n", palabras); // Muestra el resultado

    return 0;
}
