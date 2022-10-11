#include <iostream>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	
	
	int cantidadDeNumeros;
	cout<<"Numero mayor y numero menor"<<endl;
	cout<<"Digite la cantidad de numeros a evaluar: "<<endl;
	cin>>cantidadDeNumeros;
	
	int numeroMenor = 0;
	int numeroMayor = 0;
	
	for(int i = 0; i < cantidadDeNumeros; i++){
		int temporal;
		cout<<"Digite el numero en la posicion "<<(i+1)<<endl;
		cin>>temporal;
		
		if (i == 0) {
			numeroMenor = temporal;
		} else if (temporal < numeroMenor){
			numeroMenor = temporal;
		}
		if(temporal > numeroMayor){
			numeroMayor = temporal;
		}
		if(temporal >= 28 && temporal <= 8){
			cout<<"La talla es: S"<<endl;
		} else if(temporal >= 32 && temporal <= 12){
			cout<<"Talla L"<<endl;
		} else if(temporal >= 34 && temporal <= 14) {
			cout<<"Talla es: Xl"<<endl;
		}
	}
	cout<<"El numero menor es: "<<numeroMenor<<endl;
	cout<<"El numero mayor es: "<<numeroMayor<<endl;
	
	
	
	
	
	
	
	
	return 0;
}
