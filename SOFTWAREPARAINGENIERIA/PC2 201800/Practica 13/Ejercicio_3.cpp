
#include<iostream>

using namespace std;

float evaluaFuncion(float, float, float);

int main()
{
	
	int N;
	float a,b,c;
	
	cout << "Ingrese la cantidad de funciones: "; cin >> N;
	cout << endl;
	
	for(int i=1; i<=N; i++){
		
	cout << endl << "Funcion " << i << " : " << endl;
	
	cout << "Ingrese el valor para x: "; cin >> a;
	cout << "Ingrese el valor para y: "; cin >> b;
	cout << "Ingrese el valor para z: "; cin >> c;
	
	cout << "\nResultado de la evaluacion: " << evaluaFuncion(a,b,c) << endl;
	}

	return 0;
}

float evaluaFuncion(float x, float y , float z){
	
	float formula;
	
	formula = 3  * x - 0.5 * y + 4 * z;
	
	return formula;
	
	
}
