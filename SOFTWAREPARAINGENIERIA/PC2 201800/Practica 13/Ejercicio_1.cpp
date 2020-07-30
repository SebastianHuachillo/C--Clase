
#include<iostream>
#include<string>

using namespace std;

string generaClave(string);

int main()
{

		string cad;
		
		do
		{
			cout << "Ingrese una cadena de vocales: "; 
			getline(cin, cad);
			

			if(cad.length() > 15 ) {
				
			cout << "Error, ingrese nuevamente\n\n";
			
			}
		}
		while(cad.length() > 15 ); 
		
		cout << "\nLa clave formada es: " << generaClave(cad);
					
	return 0;
	
}

string generaClave(string str){
	
	string cad1 ,cad2= "";
	
	for(int i=0; i<str.length(); i++){
		
		if(str[i] == 'a'){
			
		cad1 = "*- ";
		cad2 = cad2 + cad1;	
		}
		
		else if(str[i] == 'e'){
			
		cad1 = "*-* ";
		cad2 = cad2 + cad1;
		
		}
		
		else if(str[i] == 'i'){
			
		cad1 = "**-* ";
		cad2 = cad2 + cad1; 
		}
		else if(str[i] == 'o'){
			
		cad1 = "*-** ";
		cad2 = cad2 + cad1;	
		}
		else if(str[i] == 'u'){
			
		cad1 = "**-- ";
		cad2 = cad2 + cad1;
		}
		}
		
		return cad2;
}


