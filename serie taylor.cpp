#include <iostream>
#include<math.h>

using namespace std;

double potencia(double base,int exponente){
	double result1 = 1;
	for(int a=1;a<=exponente;a++){
		result1=result1*base;
	}
	return result1;
}

long double factorial(long int p){
	long double result2=1;
	for(int i=1;i<=p ;i++){
		result2=result2*i;
	}
	return result2; 
}

double taylor(double x,long int grado){
	double result3=1;
	for(double i=1;i<=grado;i++){
		result3=result3+((potencia(2,i)*potencia(x,i))/factorial(i));
	}
	return result3;
}

double resto(double x, long int grado){
	double result4;
	result4=abs((potencia(2,grado+1)*pow(3,2*x)*potencia(x,grado+1))/(factorial(grado+1)));
	return result4;
}

int main(){
	double x;
	int n;
	cout<<"introduzca el valor de x: ";
	cin>>x;
	cout<<"introduzca el grado: ";
	cin>>n;
	cout<<"la aproximacion con x = "<<x<<" y grado = "<<n<<" para e^2*"<<x<<" es: "<<taylor(x,n)<<endl;
	cout<<"Resto --> 0 < R < "<<resto(x,n)<<endl;
	cout<<"\n\nHECHO!!";
	return 0;
}
