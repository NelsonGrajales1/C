/*
    caracteres de modificacion
    %c: unico caracter 
    %d: entero
    %u: entero sin signo en base decimal 
    %o: entero en base octal
    %x: enero en base hexadecimal
    %e un numero real con coma flotante, con exponente
    %f un numero real en coma flotante, sin exponente
    %s una cadena de caracteres
    %p puntero o direccion de memoria
*/

#include <stdio.h>
int main () {
    int edad = 18;
    int edad2 = 19;
    printf("%d", edad);
    printf("la primera edad es: %d - la segunda edad es: %d",edad2,edad);
    return 0;
}