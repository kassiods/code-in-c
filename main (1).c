#include <stdio.h>

int main() {
    int num1 = 6;
    int num2 = 2;
    int num3 = 2;
    int soma, media, sub, resu;

    soma = num1 + num2 + num3;
    media = soma / 3;

    sub = media - num2;
    resu = sub * num1;
   
    printf("a media é: %d\n", media);
    printf("o resultado é igual a: %d\n", resu);

    return 0;
}