#include <stdio.h>

void main() {
    int num1 = 6;
    int quadrado, cubo;
    float rest;

    quadrado = num1 * num1;
    cubo = num1 * num1 * num1;
    rest = num1 % 3;
    
    printf("o quadrado é: %d\n", quadrado);
    printf("o cubo é: %d\n", cubo);
    printf("o resto da divsao por 3 é: %.2f\n", rest);
}
