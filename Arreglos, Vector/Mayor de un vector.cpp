//Mayor elemento de un vector

#include <iostream>
#include <conio.h>

using namespace std;


int main(){
	int numeros[100], n, mayor = 0;
	
	
	cout<<"Digite el numero de elementos del vector: ";
	cin>>n;
	
	
	for(int i=0; i<n; i++){
		cout<<i+1<<". Digite un numero: ";
		cin>>numeros[i];
		
		if(numeros[i] > mayor){
			mayor = numeros[i];
		}
	}
	
	cout<<" El mayor elemento del vector es: "<<mayor<<endl;
	
	
	
	getch();
	return 0;
}
