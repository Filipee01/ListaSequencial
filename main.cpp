#include <iostream>
#include "ListaSequencial.h"
using namespace std;

int main() {
    ListaSequencial lista;

    // Testando Inserção
    lista.inserirElemento(1, 10); 
    lista.inserirElemento(2, 20); 
    lista.inserirElemento(3, 30); 
    lista.exibirLista();

    // Testando Modificação
    lista.setElemento(2, 25); 
    lista.exibirLista();

    // Testando Remoção
    lista.removerElemento(2); 
    lista.exibirLista();

    // Testando Tamanho
    cout << "Tamanho da lista: " << lista.getTamanho() << endl; 

    // Testando Posições Inválidas
    lista.setElemento(0, 100); 
    lista.setElemento(3, 100); 

    return 0;
}
