#ifndef LISTASEQUENCIAL_H
#define LISTASEQUENCIAL_H

#include <iostream>
using namespace std;

#define TMAX 100 // Definindo o tamanho máximo

class ListaSequencial {
    int elementos[TMAX];
    int tAtual;
public:
    ListaSequencial(); // Construtor

    bool estaVazia();    // Verifica se está vazia
    bool estaCheia();    // Verifica se está cheia
    int getTamanho();    // Obtém o tamanho da lista
    int getElemento(int pos); // Obtém o valor de uma posição
    void setElemento(int pos, int valor); // Modifica o valor da posição
    void inserirElemento(int pos, int valor); // Insere um elemento
    void removerElemento(int pos); // Remove um elemento
    void exibirLista(); // Exibe a lista
};

#endif // LISTASEQUENCIAL_H
