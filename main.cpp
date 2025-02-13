#include <bits/stdc++.h>
#include "ListaSequencial.h"

using namespace std;

void mostrarMenu() {
    cout << "\nMenu de Operações:\n";
    cout << "1. Inserir um elemento\n";
    cout << "2. Modificar um elemento\n";
    cout << "3. Remover um elemento\n";
    cout << "4. Obter um elemento\n";
    cout << "5. Obter o tamanho da lista\n";
    cout << "6. Exibir a lista\n";
    cout << "7. Sair\n";
    cout << "Escolha uma opção: ";
}

void executarOperacoes() {
    ListaSequencial lista;
    int opcao, pos, valor;

    while (true) {
        mostrarMenu();
        cin >> opcao;

        switch (opcao) {
            case 1: // Inserir um elemento
                cout << "Digite a posição para inserir: ";
                cin >> pos;
                cout << "Digite o valor a ser inserido: ";
                cin >> valor;
                lista.inserirElemento(pos, valor);
                break;
            
            case 2: // Modificar um elemento
                cout << "Digite a posição do elemento a ser modificado: ";
                cin >> pos;
                cout << "Digite o novo valor: ";
                cin >> valor;
                lista.setElemento(pos, valor);
                break;

            case 3: // Remover um elemento
                cout << "Digite a posição do elemento a ser removido: ";
                cin >> pos;
                lista.removerElemento(pos);
                break;
            
            case 4: // Obter um elemento
                cout << "Digite a posição do elemento a ser obtido: ";
                cin >> pos;
                valor = lista.getElemento(pos);
                if (valor != -1) {
                    cout << "Valor na posição " << pos << ": " << valor << endl;
                }
                break;

            case 5: // Obter o tamanho da lista
                cout << "Tamanho da lista: " << lista.getTamanho() << endl;
                break;

            case 6: // Exibir a lista
                cout << "Lista: ";
                lista.exibirLista();
                break;
            
            case 7: // Sair
                cout << "Saindo...\n";
                return;
            
            default:
                cout << "Opção inválida! Tente novamente.\n";
        }
    }
}

int main() {
    executarOperacoes();
    return 0;
}
