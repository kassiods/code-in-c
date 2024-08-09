#include <stdio.h>

int main() {
    int num = -1;

    if (num>0){
        printf("%d é positivo!\n", num);
    }else if (num<0){
        printf("%d é negativo\n", num);
    }else{
        printf("O numero é zero\n");
    }

    printf("continuando a execução\n");
    return 0;
}
