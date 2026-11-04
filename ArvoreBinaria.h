#ifndef ARVOREBINARIA_H_INCLUDED
#define ARVOREBINARIA_H_INCLUDED

typedef struct dados{
    int NIdem;
    int CodEqui;
    int Grav;
}Dados;

typedef struct NoArvore{
    Dados info;
    NoArv *esq;
    NoArv *dir;
}NoArv;

typedef struct Arvore{
    NoArv *raiz;
}Arv;

Arv *CriaArv(){
    Arv *aux;
    aux = (Arv*)malloc(sizeof(Arv));
    aux->raiz = NULL;
    return aux;
}

//Percorrer IN-ORDER



// Inserir incidente



#endif // ARVOREBINARIA_H_INCLUDED
