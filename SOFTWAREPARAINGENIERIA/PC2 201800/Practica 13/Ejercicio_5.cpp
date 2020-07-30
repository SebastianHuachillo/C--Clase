#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>

using namespace std;

int main()
{
		
		int N,x;
		
		srand(time(NULL));
		
		do{
			
			cout << "Ingrese el valor de N: "; cin >> N;
			
			if(N<0 || N > 10){
				
			cout << "Error, vuelva a ingresar\n\n";
			}
		}
		while(N<0 || N >10);

		string paises[] = {"Peru", "Chile","Brasil", "Venezuela","Argentina", 
						"Ecuador","Uruguay", "Colombia", "Bolivia", "Paraguay"};
						
		cout << "\nLa cadena formada es: ";
		
		string idx[N];
		
		for(int i=0; i<N; i++){
			
			do{
				x = rand() % (9 - 0 + 1 ) + 0; 
			  }
			while(paises[x] == "a");
			
			idx[i] = paises[x];
			
			paises[x] = "a";
			
		}
		
		for(int i=0; i<N; i++){
			
			cout << idx[i] << " - ";
		}
		
		cout << "\b\b" << " ";
		
	return 0;
}


