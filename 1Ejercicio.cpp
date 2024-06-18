/*Diseñar un algoritmo que imprima en la pantalla los primeros “n” múltiplos de 7 (positivos 
mayores que cero)
*/

#include <iostream>
using namespace std;

int main(){
	int n, i, m7;
	cout <<" Ingresa la cantidad de numeros multiplos de 7: ";
	cin >> n;
	cout << "MULTIPLICANDO  MULTIPLICADOR  PRODUCTO" << endl;
	i=1;
	do{
		m7 = i * 7;
		cout << "    "<< i << "         * " << "       "<<7 << "     = "<< m7 << endl;
		i++;	
	}while(i<=n);
	
	return 0;
}
