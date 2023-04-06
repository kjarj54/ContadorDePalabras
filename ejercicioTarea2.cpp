#include <stdio.h>
#include <ctype.h>
#include <iostream>
using namespace std;

int main(){
    int c; 
    int palabras = 0;
    int anterior = ' '; 

    cout<<("Ingrese el texto que desea contar las palabras:\n");
    
    c = getchar(); // leer un caracter desde el teclado
	while (c != EOF) { // repetir hasta que se encuentre el fin de la entrada
    	if (isspace(c) && !isspace(anterior)) { // si el caracter es un espacio y el anterior no lo era
      		palabras++; 
    	}
    	anterior = c; // actualizar el caracter anterior
   		c = getchar(); // leer otro caracter desde el teclado
  	}

    cout<<("\nLa cantidad de palabras es:\n");
    cout<<(palabras); // Muestra el resultado

    return 0;
}
