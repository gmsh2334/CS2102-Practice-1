#include <iostream>

using namespace std;

int main() {

	char entrada[100];

	char change;

	bool flag=1;

	while(flag==1){

	cout << "Ingrese la cadena a codificar: ";
	cin >> entrada;

	cout << "\nLa cadena codificada es: ";
		for(int i=0; entrada[i]!='\0'; i++){
			change=entrada[i]-7;
			cout<<change;
		}

	cout << "\n\nDesea codificar otra cadena (1=si, 0=no): ";
	cin >> flag;
	cout<< "\n#####################################################\n";

	}
return 0;
}
