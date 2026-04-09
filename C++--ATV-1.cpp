

#include <iostream>
using namespace std;

void maiorMenor (int *ponteiro1, int *ponteiro2){
    int trocaValor;
    if (*ponteiro1 < *ponteiro2){
        trocaValor = *ponteiro1;
        *ponteiro1 = *ponteiro2;
        cout<<"Valor de A: "<<*ponteiro1<<endl;
        *ponteiro2 = trocaValor;
        cout<<"Valor de B: "<<*ponteiro2<<endl;
    }
    else {
        cout<<"Valor de A: "<<*ponteiro1<<endl;
        cout<<"Valor de B: "<<*ponteiro2<<endl;
    }
}

int main()
{
   int a, b;    
   int *ponteiro1 = &a;
   int *ponteiro2 = &b;
   cout<<"escreva o valor de A ";
   cin>>a;
   cout<<"escreva o valor de B ";
   cin>>b;
   maiorMenor(ponteiro1,ponteiro2);
   
   
   
   return 0;
}
