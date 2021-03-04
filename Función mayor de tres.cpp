#include <iostream>
#include<string.h>

using namespace std;

using std::cout;
using std::endl;


int mayor(int a, int b);

int main(){
	cout<<"Bienvenido, Programa que indica el mayor de tres numeros enteros"<< std::endl;
	int N1, N2,N3;
	cout<<"Por favor ingrese el primer numero:";
	cin>>N1;
	cout<<"Ahora el segundo por favor:";
	cin>>N2;
	cout<<"Por favor ingrese el tercer numero:";
	cin>>N3;
	int max=(mayor(mayor(N1,N2),N3) );
	cout<<" El numero mayor es "<<max<< std::endl;
}

int mayor(int a, int b){
	int c;
	if(a>b){ c=a;
	}
	else { c=b;
	return c;
	
	}
	
}
