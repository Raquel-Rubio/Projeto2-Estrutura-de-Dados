#ifndef TABELAHASH_H_INCLUDED
#define TABELAHASH_H_INCLUDED
struct noLista{
    int ID;
    noLista *prox;
}

typedef struct equipamento{
    int CodEqui;
    char NomeEqui[11];
}Equipamento;

typedef struct noHash{
    Equipamento equip;
    NoHash *prox;

}NoHash;


typedef struct tabelaHash{
    NoHash *inicio;
    int tam = 47;
}TabelaHash;


#endif // TABELAHASH_H_INCLUDED
