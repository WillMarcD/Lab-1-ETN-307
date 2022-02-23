#include <iostream>
#include <math.h>
using namespace std;

double potencia(double base,int exponente){
	double result1 = 1;
	for(int a=1;a<=exponente;a++){
		result1=result1*base;
	}
	return result1;
}

double disc(double m, double n, double p){
	double result1;
	result1=potencia(n,2)-4*m*p;
	return result1;
}

int main(){
	double a,b,c;
	cout<<"RESOLVAMOS UNA ECUACION TIPO: ax^2+bx+c=0 \n\n";
	cout<<"introduzca el valor de a: ";
	cin>>a;

	if (a==0){
		cout<<"ERROR! a tiene que ser distinto de 0"<<endl;
	}else{
		cout<<"introduzca el valor de b: ";
		cin>>b;
		cout<<"introduzca el valor de c: "; 
		cin>>c;
	
	double D=disc(a,b,c);
		if (D >= 0){
			double x1,x2,R;
			x1=(-b+sqrt(D))/(2*a);
			x2=(-b-sqrt(D))/(2*a);
			cout<<"\nLas raices son: x1 = "<<x1<<" y x2 = "<<x2;
			cout<<"\n\nHECHO!!";
		}else{	
			double Re,Im,R;
			Re=(-b)/(2*a);
			Im=abs(sqrt(-D)/(2*a));
			cout<<"\nLas raices son: x1 = "<<Re<<" + "<<Im<<"i y x2 = "<<Re<<" - "<<Im<<"i";
			cout<<"\n\nHECHO!!";
		} 	
	
	}
			
	return 0;
}