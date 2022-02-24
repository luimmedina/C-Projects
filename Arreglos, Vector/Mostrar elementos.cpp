/*

Mostrar los elementos de un arreglo con sus indices asociados

*/

#include <iostream>
#include <conio.h>

using namespace std;


int main(){
	int numeros[100], n;
	
	cout<<"Digite el numero de elementos del vector: ";
	cin>>n;
	
	
	for(int i=0; i<n; i++){
		cout<<"Digite un numero: ";
		cin>>numeros[i];
	}
	
	
	for(int i=0; i<n; i++){
		cout<<i<<" -> "<<numeros[i]<<endl;
	}
	
	
	getch();
	return 0;
}
