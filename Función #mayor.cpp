#include <iostream>
#include<string.h>
using namespace std;

using std::cout;
using std::endl;
void mayor(int a, int b);

int main(){
	cout<<"Bienvenido, Programa que indica el mayor de dos numeros enteros"<< std::endl;
	int N1, N2;
	cout<<"Por favor ingrese el primer numero:";
	cin>>N1;
	cout<<"Ahora el segundo por favor:";
	cin>>N2;
	mayor(N1,N2);
}
void mayor(int a, int b){
	if(a>b){
		cout<<"El primer numero "<<a<< " es mayor";
	}
	else if(b>a){
		cout<<"El segundo numero "<<b<< " es mayor";
	}
	
}

