// Raiz cuadrada y potencia

#include <iostream>
#include <math.h>

using namespace std;

int main(){
	float x, y, resultado = 0;
	
	cout<<"Digite el valor x: "; cin>>x;
	cout<<"Digite el valor y: "; cin>>y;
	
	resultado = (sqrt(x))/(pow(y,2)-1);
	
	cout<<"\nEl resultado es: "<<resultado<<endl;
	
	
	return 0;
}

