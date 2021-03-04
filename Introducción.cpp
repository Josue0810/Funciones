#include <iostream>
#include<string.h>

using namespace std;

using std::cout;
using std::endl;


void suma(int a, int b);

int main(){
	cout<<"Bienvenido, Programa que suma dos numeros enteros"<< std::endl;
	int N1, N2;
	cout<<"Por favor ingrese el primer numero para la suma:";
	cin>>N1;
	cout<<"Ahora el segundo por favor:";
	cin>>N2;
	suma(N1,N2);
    return 0;
}

void suma(int a, int b){
	int c= a+b;
	cout<<"La suma de "<<a<<" mas "<<b<< " es "<<c<< std::endl;
}
