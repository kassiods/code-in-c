#include <stdio.h>

int main() {
    int nota = 5;

    if (nota >= 7 && nota <=8){
        printf("Aprovado, com nota %d\n", nota);
    }else if (nota >= 9){
        printf("Aprovado com distinção, com nota %d\n", nota);
    }else{
        printf("Reprovado, com nota %d\n", nota);
    }
    
    return 0;
}
