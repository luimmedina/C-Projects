//Arreglos o Arrays (Vector)
//Vector de numeros y calcule la suma de elementos
#include <iostream>
#include <conio.h>


using namespace std;

int main(){
	int numeros[] = {1, 2, 3, 4, 5};
	
	int suma = 0;
	
	
	for(int i = 0; i < 5; i++ ){
		suma += numeros[i];
		
	}
	
	cout<<"La Suma de los elementos del vector es: "<<suma<<endl;
	
	
	
	getch();
	return 0;
}
