#include<iostream>
#include<string>
using namespace std;

string cadenaNumerica(string);

int main()
{
	
	string cadena;
	
	cout << "Ingrese una cadena numerica: "; 
	getline(cin, cadena);
	
	cout << "\nLa cadena actualizada es: " << cadenaNumerica(cadena);
	
	return 0;
}

string cadenaNumerica(string str){
	
	string cad1;

	for(int i=0; i<str.length(); i++){
		
	if(str[i] == '1' || str[i] == '3' || str[i] == '5' || str[i] == '7' || str[i] == '9'){
			
			cad1 = str.insert(i+1,"***");
		
			
		}
	}	
	
	return cad1;
}



