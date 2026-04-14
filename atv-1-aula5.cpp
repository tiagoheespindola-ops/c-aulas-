#include <iostream>
using namespace std;

void ShowLista(int lista[10], int *contador)
{
	for(int i = 0 ; i<10 ; i++)
	{
		cout << lista[i] << " ";
		*contador = i+1;
	}
	cout << endl;

};

int main() {
	int contagem = 0;
	int lista[10] = {8,7,6,5,4};
	int aux = 9;
	
	lista[aux] = 3;
	ShowLista(lista, &contagem);
	cout<<"O total de elementos: "<<contagem<<endl;
	
return 0;
}
