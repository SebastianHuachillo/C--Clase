#include<iostream>
using namespace std;

int main()
{
		
		float arreglo[8],promedio=0;
		
		cout << endl;
		
		for(int i=0; i<8; i++){
			
			cout << "Temperatura " << i + 1 << ": " ; cin >> arreglo[i];
			
			promedio = promedio + arreglo[i];
		}
		cout << "\nEl promedio de las temperaturas es: " << (float)promedio/8 << endl;



	return 0;
}


