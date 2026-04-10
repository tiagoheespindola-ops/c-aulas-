
#include <iostream>
#include <string>
using namespace std;



int main()
{
    string nome[5];
    int unidade[5];
    int quantidade[5];
    for (int i=0; i < 5; i++)
    {
        cout<<"Digite o nome: "<<endl;
        cin>>nome[i];
        cout<<"Digite a unidade: "<<endl;
        cin>>unidade[i];
        cout<<"Digite a quantidade: "<<endl;
        cin>>quantidade[i];
        
    }
    for (int i=0; i < 5; i++)
    {
        cout<<nome[i]<<" ";
    }
    cout<<endl;
    for (int i=0; i < 5; i++)
    {
        cout<<unidade[i]<<" ";
    }
    cout<<endl;
    for (int i=0; i < 5; i++)
    {
        cout<<quantidade[i]<<" ";
    }
    cout<<endl;
    
return 0;
}
