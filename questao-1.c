#include <stdio.h>

int main() {
    int num1 = 6;
    int num2 = 2;
    int soma, subtraçao, multiplicaçao, modulo;
    float divisao;

    soma = num1 + num2;
    subtraçao = num1 - num2;
    multiplicaçao = num1 * num2;
    modulo = num1 % num2;
    divisao = num1/num2;

  
printf("Soma: %d\n", soma);
printf("Subtração: %d\n", subtraçao);
printf("Multiplicação: %d\n", multiplicaçao);
printf("Divisão: %.2f\n", divisao);
printf("Modulo: %d\n", modulo);

return 0;
}
