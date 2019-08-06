#include <stdlib.h>
#include <stdio.h>
typedef struct FilaUnit{
    struct FilaUnit * next;
    int Value;
}FilaUnit;
typedef struct Fila{
    FilaUnit * Primeiro;
    FilaUnit * Ultimo;
}Fila;
FilaUnit * AlocaFilaUnit(){
    FilaUnit * Corpo;
    Corpo = (FilaUnit*)malloc(sizeof(FilaUnit));
    Corpo->next = NULL;
    return Corpo;
};
Fila * AlocaFila(){
    Fila * Cabeca;
    Cabeca = (Fila*)malloc(sizeof(Fila));
    Cabeca->Primeiro = NULL;
    Cabeca->Ultimo = NULL;
    return Cabeca;
};
void Entrar(Fila * Cabeca, int Value){
    FilaUnit * Novo;
    Novo = AlocaFilaUnit();
    Novo->Value = Value;
    if (Cabeca->Ultimo == NULL){
        Cabeca->Ultimo = Novo;
        Cabeca->Primeiro = Novo;
    }else{
        Cabeca->Ultimo->next = Novo;
        Cabeca->Ultimo = Novo;
    };
};
int Pop(Fila * Cabeca){
    int TaylorSwift;
    TaylorSwift = Cabeca->Primeiro->Value;
    Cabeca->Primeiro = Cabeca->Primeiro->next;
    return TaylorSwift;
};
int Popey(Fila * Cabeca, int NValue){
    int AvrilLavigne;
    FilaUnit * KatyPerry;
    KatyPerry = AlocaFilaUnit()
    AvrilLavigne = Cabeca->Primeiro->Value;
    Cabeca->Primeiro = Cabeca->Primeiro->next;
};
void main(){
};
