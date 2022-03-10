#include <iostream>
#include "biblioteca.hpp"

using namespace std;


int main(int argc, char** argv) {
	int n1, n2;
	cout<<"Suma de dos numeros"<<endl;
	cout<<"ingrese el primer numero"<<endl;
	cin>>n1;
	cout<<"ingrese el segundo numero"<<endl;
	cin>>n2;
	int resultados=sum(n1, n2);
	cout<<"Resultado suma"<< resultados<<endl;
	cout<<"Resta de dos numeros"<<endl;
	cout<<"ingrese el primer numero"<<endl;
	cin>>n1;
	cout<<"ingrese el segundo numero"<<endl;
	cin>>n2;
	int resultador=rest(n1, n2);
	cout<<"Resultado resta"<< resultador<<endl;
	cout<<"Multiplicacion de dos numeros"<<endl;
	cout<<"ingrese el primer numero"<<endl;
	cin>>n1;
	cout<<"ingrese el segundo numero"<<endl;
	cin>>n2;
	int resultadom=mult(n1, n2);
	cout<<"Resultado multiplicacion"<< resultadom<<endl;
	cout<<"Division de dos numeros"<<endl;
	cout<<"ingrese el primer numero"<<endl;
	cin>>n1;
	cout<<"ingrese el segundo numero"<<endl;
	cin>>n2;
	int resultadod=divis(n1, n2);
	cout<<"Resultado division"<< resultadod<<endl;
	
	
	system("pause");
	
}
