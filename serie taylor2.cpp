#include <iostream>
#include<math.h>
using namespace std;

long double potencia(double base,int exponente){
	double result1 = 1;
	for(int a=1;a<=exponente;a++){
		result1=result1*base;
	}
	return result1;
}

double taylor(double x,int grado){
	double result3=0;
	for(double i=1;i<=grado;i++){
		result3=result3+(potencia(-1,i-1)*potencia(x,i))/(i);
	}
	return result3;
}


int main(){
	double x;
	int n;
	cout<<"introduzca el valor de x: ";
	cin>>x;
	cout<<"introduzca el grado: ";
	cin>>n;
	cout<<"la aproximacion con x = "<<x<<" y grado = "<<n<<" es: "<<taylor(x,n)<<endl;
	cout<<"HECHO!!";
	return 0;
}