#include<stdlib.h>
#include<stdio.h>
typedef struct Tree{
    int Batt;
    struct Tree* Right;
    struct Tree* Left;
}Tree;
Tree* AlocaTree(){
    Tree* New;
    New = (Tree*)malloc(sizeof(Tree));
    New->Batt = 0;
    New->Left = NULL;
    New->Right = NULL;
    return New;
};
Tree* adicionar(Tree* Lista, int Value){
    Tree* Parent;
    Tree* Aux;
    Tree* Anchor;
    Tree* New;
    New = AlocaTree();
    New->Batt = Value;
    Parent = NULL;
    if (Lista == NULL){
        Anchor = New;
    }else{
        Anchor = Lista;
    };
    while (Lista != NULL){
        Parent = Lista;
        if (Value < Lista->Batt){
            Lista = Lista->Left;
        }else{
            Lista = Lista->Right;
        };
    };
    if (Parent != NULL){
        if (Value < Parent->Batt){
            Parent->Left = New;
        }else{
            Parent->Right = New;
        };
    };
    return Anchor;
};
void main(){
    int Command;
    Tree* Lista;
    Lista = NULL;
    Command = -1;
    while (Command != 0){
        printf("1-Adicionar\n");
        printf("2-Mostrar\n");
        scanf("%d", &Command);
        switch(Command){
            case 1:
                scanf("%d", &Command);
                adicionar(Lista, Command);
                break;
        };
    };
};
