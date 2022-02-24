//Tabla de multiplicar
/*
Usuario ingresa numero del 1 - 10
Salida: Tabla de multiplicar de ese numero
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int numero;
	
	do{
		cout<<"Digite un numero: "; cin>>numero;
	}while((numero<1) || (numero>10));
	
	
	for(int i=1;i<=20;i++){
		cout<<numero<<" * "<<i<<" = "<<numero*i<<endl;
	}
	
	cout<<"\n\n";
	system("pause");
	
	return 0;
}
