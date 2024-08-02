#include <stdio.h>

int main() {
    int num1 = 6;
    int num2 = 2;
    int soma, multi, divi;

    soma = num1 + num2;
    divi = soma / 6;
    multi = divi * num1;
    
    printf("o a soma é: %d\n", soma);
    printf("a divisao pelo maior numero é: %d\n", divi);
    printf("o resultado é:  %d\n", multi);

    return 0;
}
