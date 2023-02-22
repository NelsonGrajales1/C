/*
\a 	Campana (alerta)
\b 	Retroceso
\f 	Avance de página
\n 	Nueva línea
\r 	Retorno de carro
\t 	Tabulación horizontal
\v 	Tabulación vertical
\' 	Comilla simple
\" 	Comillas dobles
\\ 	Barra diagonal inversa
\? 	Signo de interrogación literal
\ooo 	Carácter ASCII en notación octal
\xhh 	Carácter ASCII en notación hexadecimal
*/

#include <stdio.h>

int main() {
    printf("hola \tmundo");
    printf("\"hola universo\"");
}