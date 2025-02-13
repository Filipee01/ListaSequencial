// ListaSequencial.cpp
#include "ListaSequencial.h"

ListaSequencial::ListaSequencial() {
    tAtual = 0;
}

bool ListaSequencial::estaVazia() {
    return tAtual == 0;
}

bool ListaSequencial::estaCheia() {
    return tAtual == TMAX;
}

int ListaSequencial::getTamanho() {
    return tAtual;
}

int ListaSequencial::getElemento(int pos) {
    if (pos < 1 || pos > tAtual) {
        cout << "Posicao invalida! As posicoes validas sao de 1 a " << tAtual << "." << endl;
        return -1;
    }
    return elementos[pos - 1];
}

void ListaSequencial::setElemento(int pos, int valor) {
    if (pos < 1 || pos > tAtual) {
        cout << "Posicao invalida! As posicoes validas sao de 1 a " << tAtual << "." << endl;
        return;
    }
    elementos[pos - 1] = valor;
}

void ListaSequencial::inserirElemento(int pos, int valor) {
    if (estaCheia()) {
        cout << "Lista Cheia" << endl;
        return;
    }
    if (pos < 1 || pos > tAtual + 1) {
        cout << "Posicao invalida! As posicoes validas sao de 1 a " << tAtual + 1 << "." << endl;
        return;
    }
    int indice = pos - 1;
    for (int i = tAtual; i > indice; i--) {
        elementos[i] = elementos[i - 1];
    }
    elementos[indice] = valor;
    tAtual++;
}

void ListaSequencial::removerElemento(int pos) {
    if (estaVazia()) {
        cout << "Lista Vazia" << endl;
        return;
    }
    if (pos < 1 || pos > tAtual) {
        cout << "Posicao invalida! As posicoes validas sao de 1 a " << tAtual << "." << endl;
        return;
    }
    int indice = pos - 1;
    for (int i = indice; i < tAtual - 1; i++) {
        elementos[i] = elementos[i + 1];
    }
    tAtual--;
}

void ListaSequencial::exibirLista() {
    if (estaVazia()) {
        cout << "Lista Vazia" << endl;
        return;
    }
    for (int i = 0; i < tAtual; i++) {
        cout << elementos[i] << " ";
    }
    cout << endl;
}
