#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estoque.h"

// Cria um novo medicamento
Medicamento* CriaMedicamento(FILE* fp, char* nome, int codigo, 
    float valor, int* data_de_validade){

    }

// Criar a lista para armazenar os medicamentps
Lista* CriaLista(){

}

// Inserir medicamento na lista
Lista* InsereListaMedicamento(FILE* fp, Lista* l, Medicamento* m){

}

// Retirar um medicamento de uma determinada lista
Lista* RetiraListaMedicamento(FILE* fp, Lista* l, int id_medicamneto){

}

// Verifica se um medicamento esta presente em uma determinada lista
int VerificaListaMedicamento(FILE* fp, Lista* p, int id_medicamento){

}

// Verifica se um medicamento está vencido na lista 
int VerificaListaValidade(FILE* fp, Lista* p, int* data){

}

// Imprime todos os medicamentos
void ImprimeListaMedicamentos(FILE* fp, Lista* p){

}

// Ordena a lista pelo valor do medicamento
Lista* OrdenaListaValor(Lista* p){

}

// Ordena a lista pela data de validade
Lista* OrdenaListaVencimento(Lista* p){
    
}