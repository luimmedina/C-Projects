// Porcentaje notas

#include <iostream>

using namespace std;

int main(){
	float practica, teorica, participacion, nota_final = 0;
	
	cout<<"Digite nota practica: "; cin>>practica;
	cout<<"Digite nota teorica: "; cin>>teorica;
	cout<<"Digite nota participativa: "; cin>>participacion;
	
	
	practica *= 0.30; //Igual que practica = practica * 0.30;
	teorica *= 0.60;
	participacion *= 0.10;
	
	nota_final = practica + teorica + participacion;
	
	cout<<"\nLa nota final es: "<<nota_final;
	
	
	return 0;
}
