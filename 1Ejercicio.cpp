#include <iostream>
using namespace std;

int main(){
	int n, i, m7;
	cout <<" Ingresa la cantidad de numeros multiplos de 7: ";
	cin >> n;
	i = 1;
	while (i<=n){
		m7 = i * 7;
		cout << m7 << endl;
		i++;	
	}
	return 0;
}