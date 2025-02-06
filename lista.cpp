#include <bits/stdc++.h>
#define TMAX 100 // definindo o tamanho maximo

using namespace std;

class ListaSequencial {
    int elementos[TMAX];
    int tAtual;
public:
    // 1. criar lista Vazia
    ListaSequencial() {
        tAtual = 0;
    }

    // 2. verificar se está vazia
    bool estaVazia() {
        return tAtual == 0;
    }

    // 3. verificar se está cheia
    bool estaCheia() {
        return tAtual == TMAX;
    }

    // 4. obter o tamanho da ListaSequencial
    int getTamanho() {
        return tAtual;
        
    }

    // 5. obter o valor do elemento de uma determinada posicao
    int getElemento(int pos) {
        if (pos < 1 || pos > tAtual) { // Posições válidas: 1 até tAtual
            cout << "Posicao invalida! As posicoes validas sao de 1 a " << tAtual << "." << endl;
            return -1;
        }
        return elementos[pos - 1]; // Converte posição para índice
    }

    // modificar o valor do elemento de uma determinada posicao
    void setElemento(int pos, int valor) {
        if (pos < 1 || pos > tAtual) { // Posições válidas: 1 até tAtual
            cout << "Posicao invalida! As posicoes validas sao de 1 a " << tAtual << "." << endl;
            return;
        }
        elementos[pos - 1] = valor; // Converte posição para índice
    }

    // 6. inserir um elemento em uma determinada posicao
    void inserirElemento(int pos, int valor) {
        if (estaCheia()) {
            cout << "Lista Cheia" << endl;
            return;
        }
        if (pos < 1 || pos > tAtual + 1) { // Posições válidas: 1 até tAtual + 1
            cout << "Posicao invalida! As posicoes validas sao de 1 a " << tAtual + 1 << "." << endl;
            return;
        }
        // Converte posição para índice
        int indice = pos - 1;
        // Desloca os elementos para a direita para abrir espaço
        for (int i = tAtual; i > indice; i--) {
            elementos[i] = elementos[i - 1];
        }
        elementos[indice] = valor;
        tAtual++;
    }

    // 7. Retirar um elemento de uma determinada posicao
    void removerElemento(int pos) {
        if (estaVazia()) {
            cout << "Lista Vazia" << endl;
            return;
        }
        if (pos < 1 || pos > tAtual) { // Posições válidas: 1 até tAtual
            cout << "Posicao invalida! As posicoes validas sao de 1 a " << tAtual << "." << endl;
            return;
        }
        // Converte posição para índice
        int indice = pos - 1;
        // Desloca os elementos para a esquerda para fechar o espaço
        for (int i = indice; i < tAtual - 1; i++) {
            elementos[i] = elementos[i + 1];
        }
        tAtual--;
    }

    // Método auxiliar para exibir a lista
    void exibirLista() {
        if (estaVazia()) {
            cout << "Lista Vazia" << endl;
            return;
        }
        for (int i = 0; i < tAtual; i++) {
            cout << elementos[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    ListaSequencial lista;

    // Testando as operações
    lista.inserirElemento(1, 10); // Insere na posição 1
    lista.inserirElemento(2, 20); // Insere na posição 2
    lista.inserirElemento(3, 30); // Insere na posição 3
    lista.exibirLista(); // Saída: 10 20 30

    lista.setElemento(2, 25); // Modifica o valor na posição 2
    lista.exibirLista(); // Saída: 10 25 30

    lista.removerElemento(2); // Remove o elemento da posição 2
    lista.exibirLista(); // Saída: 10 30

    cout << "Tamanho da lista: " << lista.getTamanho() << endl; // Saída: 2

    // Testando posições inválidas
    lista.setElemento(0, 100); // Posição inválida
    lista.setElemento(3, 100); // Posição inválida

    return 0;
}