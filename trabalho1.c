#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estoque.h"

void menu(){

    FILE* arquivo;
    arquivo = fopen("entrada.txt", "r");

    if (arquivo == NULL) {
        printf("Erro na abertuda do arquivo\n");
        exit(1);
    }

    while(1){
        fread();
    }

    fclose(arquivo);
}

int main(){

    menu();

    return 0;
}