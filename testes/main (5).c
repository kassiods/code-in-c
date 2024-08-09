#include <stdio.h>

int main() {
    int idade = 90;

    if (idade <= 12){
        printf("É criança\n");
    }else if (idade >= 13 && idade <= 19){
        printf("É adolescente\n");
    }else if (idade >= 20 && idade <= 28){
        printf("É jovem adulto\n");
    }else if (idade >= 60 && idade <= 100){
        printf("É idoso\n");
    }else{
        printf("É adulto\n");
    }
    
    return 0;
}