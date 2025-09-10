#include <stdio.h>

int main(){
    int numero1 = 1, resultado;

    resultado = numero1++;
    printf("Após Pos- incremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);

    //Pos incremento:
    // resultado = numero1; 
    //numero1++;

    
    resultado = ++numero1;
    printf("Após Pré - incremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);
    
resultado = numero1--;

    resultado = --numero1;
    printf("Após Pos- decremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);
    
    
}