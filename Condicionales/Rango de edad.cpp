// Rango de edad (Este caso: 18-25)

#include <iostream>

using namespace std;


int main(){
	int edad;
	
	
	cout<<"Digite su edad: ";
	cin>>edad;
	
	if((edad>=18)&&(edad<=25)){
		cout<<"Su edad esta en el rango 18-25";
	}
	else {
		cout<<"Su edad NO esta en el rango 18-25";
	}
	
	
	
	
	return 0;
}
