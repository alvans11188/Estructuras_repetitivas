/*Dise�ar un algoritmo que imprima en la pantalla los primeros �n� m�ltiplos de 7 (positivos 
mayores que cero)
*/

#include <iostream>
using namespace std;

int main(){
	int n, i, m7;
	cout <<" Ingresa la cantidad de numeros multiplos de 7: ";
	cin >> n;
	i = 1;
	cout << "MULTIPLICANDO  MULTIPLICADOR  PRODUCTO" << endl;
	while (i<=n){
		m7 = i * 7;
		cout << "    "<< i << "         * " << "       "<<7 << "     = "<< m7 << endl;
		i++;	
	}
	return 0;
}
