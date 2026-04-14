
#include <iostream>
using namespace std;

struct Nodo 
{
    int valor;
    Nodo* prox;
};

 Nodo* inicio = nullptr;

void inserirFinal(int valor) 
{
    Nodo* novo = new Nodo(); 
    novo->valor = valor;
    novo->prox = nullptr;

    if (inicio == nullptr) 
    {
        inicio = novo;
        return;
    }

    Nodo* temp = inicio;
    while (temp->prox != nullptr) 
    {
        temp = temp->prox;
    }
    
    temp->prox = novo;
}


void inserirPosicao(int valor, int posicao) 
{
    Nodo* novo = new Nodo();
    novo->valor = valor;

    if (posicao == 0) 
    {
        novo->prox = inicio;
        inicio = novo;
        return;
    }

    Nodo* temp = inicio;
    int contador = 0;

    while (temp != nullptr && contador < posicao - 1) 
    {
        temp = temp->prox;
        contador++;
    }

    if (temp == nullptr) 
    {
        cout << "Posicao invalida"<<endl;
        delete novo;
        return;
    }

    novo->prox = temp->prox;
    temp->prox = novo;
}


void removerElemento(int valor) 
{
    if (inicio == nullptr) 
    {
        cout << "Lista vazia"<<endl;
        return;
    }

    if (inicio->valor == valor) 
    {
        Nodo* temp = inicio;
        inicio = inicio->prox;
        delete temp;
        cout << "Elemento removido"<<endl;
        return;
    }

    Nodo* atual = inicio;
    Nodo* anterior = nullptr;

    while (atual != nullptr && atual->valor != valor) 
    {
        anterior = atual;
        atual = atual->prox;
    }

    if (atual == nullptr) 
    {
        cout << "Elemento nao encontrado"<<endl;
        return;
    }

    anterior->prox = atual->prox;
    delete atual;
    cout << "Elemento removido"<<endl;
}

void buscarElemento(int valor) 
{
    Nodo* temp = inicio;
    int posicao = 0;

    while (temp != nullptr) 
    {
        if (temp->valor == valor) 
        {
            cout << "Elemento encontrado na posicao "<< posicao <<endl;
            return;
        }
        temp = temp->prox;
        posicao++;
    }
    cout << "Elemento nao encontrado"<<endl;
}

void exibirLista() 
{
    if (inicio == nullptr) 
    {
        cout <<"Lista vazia"<<endl;
        return;
    }

    Nodo* temp = inicio;
    cout << "Lista: ";

    while (temp != nullptr) 
    {
        cout << temp->valor << " ->> ";
        temp = temp->prox;
    }

    cout << "vazio"<<endl;
}

void MostrarMenu() {
    cout << endl<< "==== MENU ====" <<endl;
    cout << "1. Inserir elemento no final" <<endl;
    cout << "2. Inserir elemento em posicao especifica" <<endl;
    cout << "3. Remover elemento" <<endl;
    cout << "4. Buscar elemento" <<endl;
    cout << "5. Exibir lista" <<endl;
    cout << "6. Sair" <<endl;
    cout << "opcao: ";
}

int main() 
{
    int opcao, valor, posicao;

    do {
        MostrarMenu();
        cin >> opcao;

        switch (opcao) {
            case 1:
                cout << "Digite o valor: ";
                cin >> valor;
                inserirFinal(valor);
                break;

            case 2:
                cout << "Digite o valor: ";
                cin >> valor;
                cout << "Digite a posicao: ";
                cin >> posicao;
                inserirPosicao(valor, posicao);
                break;

            case 3:
                cout << "Digite o valor a remover: ";
                cin >> valor;
                removerElemento(valor);
                break;

            case 4:
                cout << "Digite o valor a buscar: ";
                cin >> valor;
                buscarElemento(valor);
                break;

            case 5:
                exibirLista();
                break;

            case 6:
                cout << "Encerrando o programa"<<endl;
                break;

            default:
                cout << "Opcao invalida!"<<endl;
        }

    } while (opcao != 6);

    return 0;
}
