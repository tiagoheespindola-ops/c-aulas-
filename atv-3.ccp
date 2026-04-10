

#include <iostream>
using namespace std;


int main()
{
    int valorDigitado = 0;
    int N;
    int *lista;

    cout<<"Quantidade de N a serem armazenados: ";
    cin>>N;
    cout<<N<<endl;
    lista = (int*) malloc(N * sizeof(int));
    
    
    for (int i = 0; i < N; i ++)
    {
        cout<<"DIGITE O VALOR DESEJADO: "<<endl;
        cin>>valorDigitado;
        lista [i]=valorDigitado;
    }
        cout << "Valores da lista: ";
    
    for (int i = 0; i < N; i++)
    
    {
        cout << lista[i] << " ";
    }
        cout << endl;
    
    free (lista);


    
    
   
   return 0; 
}
