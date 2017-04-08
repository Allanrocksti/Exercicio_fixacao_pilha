/*
 * @author Allan Roque Barbosa da Silva - 1610013738
 * 
 *         Exercicio de fixação de pilha 
 *
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct elemento{

    char placa[24];

}t_elemento;

typedef struct pilha{

    t_elemento vetor[3];
    int topo;

}t_pilha;

void pausa(){

    printf("\n");
    system("pause");
    system("cls");
    
}

int push(t_pilha *pilha, t_elemento valor){

    pilha->vetor[++pilha->topo] = valor;

    return 1; 
}

t_elemento pop(t_pilha * pilha){
    return pilha->vetor[pilha->topo--];
}

int entra_carros(t_pilha *pilha){
    
    int i;
    t_elemento vetor;

    for(i = 0; i < 3; i++){
        printf("Digite a placa do carro: ");
        gets(vetor.placa);
        push(pilha, vetor);
    }

    return 0;
    
}

int sai_carros(t_pilha *pilha){

    int i;

    for(i = 0; i < 3; i++){
        printf("O carro de placa %s saiu!\n", pilha->vetor[pilha->topo].placa);
        pop(pilha);
    }

}

int main(){

    t_pilha pilha;
    pilha.topo = -1;

    //entrada de carros

    entra_carros(&pilha);
    pausa();

    //mostra placa B

    printf("Placa do ultimo carro: %s\n", pilha.vetor[pilha.topo].placa);
    pausa();
    
    //saida
    
    sai_carros(&pilha);
    pausa();
    
    // mostra D

    printf("Quantidade total de carros: %d\n", (pilha.topo + 1) );
    pausa();

    return 0;
}