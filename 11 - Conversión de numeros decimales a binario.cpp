#include <iostream>
#include <bitset>
using namespace std;

int main() {
	int numeroDecimal;
	char opcion;
    
     cout<<endl<<"***** BIENVENIDO AL CALCULO DE NUMERO DECIMAL A BINARIO *****"<<endl<<endl;
	cout << "RECUERDA QUE: Un numero decimal es como cualquier numero comun"<<endl;
	cout<< "como 10, 5 o 3, pero tambien puede tener punto decimal como 0.5 o 3.14."<<endl<<endl;
	
    do{
   	
    cout << "Ingrese un numero decimal: ";
    cin >> numeroDecimal;
    
    string binario = bitset<8>(numeroDecimal).to_string();
    
    size_t pos = binario.find('1');
    if (pos != string::npos) {
        binario = binario.substr(pos);
    }
    
    cout <<endl<< "El numero binario es: " << binario << endl;
		
		cout << endl << "Desea calcular otro numero? (S/N): ";
        cin >> opcion;
        cout << endl;
        
    } while (opcion == 'S' || opcion == 's');
 		
 		cout<<"HASTA PRONTO :)"<<endl;
   
   return 0;
}

