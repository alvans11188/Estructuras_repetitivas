#include <iostream>
using namespace std;
//Diseñar un algoritmo que imprima en la pantalla los primeros “n” múltiplos de 7 (positivos mayores que cero).
//ENTRADA|| cantidadnumeros: cantidad de numeros multiplos de 7 a mostrar 		
//SALIDA|| multiplode7: numeros multiplos de 7

int main(){
	int cantidadnumeros, i, multiplode7;
	cout << "**************************************************" << endl << endl;
	do{
		cout <<"Ingresa la cantidad de numeros multiplos de 7: ";
		cin >> cantidadnumeros;
		cout << endl;
		if (cantidadnumeros>0){
			i=1;
			do{
				multiplode7 = i * 7;
				cout << i << ". multiplo: " << multiplode7 << endl;
				i++;	
			} while(i<=cantidadnumeros);
		}else if (cantidadnumeros == 0){
			cout << "Ok, no se mostrara nada.";
		} else{
			cout << "Se ingreso un dato invalido. Intente de nuevo."<< endl;
		}
		cout << endl;
	} while(cantidadnumeros<0);
	return 0;
}
