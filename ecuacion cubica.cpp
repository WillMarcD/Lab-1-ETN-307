#include <iostream>
#include <math.h>

using namespace std;

long double potencia(double base,int exponente){
	long double result1 = 1;
	for(int a=1;a<=exponente;a++){
		result1=result1*base;
	}
	return result1;
}

int main(){
	float a,b,c,d;
	cout<<"RESOLVAMOS UNA ECUACION TIPO: ax^3+bx^2+cx+d=0 \n\n";
	cout<<"introduzca el valor de a: ";
	cin>>a;

	if (a==0){
		cout<<"ERROR! a tiene que ser distinto de 0"<<endl;
	}else{
		cout<<"introduzca el valor de b: ";
		cin>>b;
		cout<<"introduzca el valor de c: "; 
		cin>>c;
		cout<<"introduzca el valor de d: "; 
		cin>>d;
	
	long double m,n,p,u,v,x1,xRe,xIm;
	m=(c/a)-(potencia(b,2)/(3*potencia(a,2)));
	n=(d/a)+((2*potencia(b,3))/(27*potencia(a,3)))-((b*c)/(3*potencia(a,2)));
	p=(m/3)*(m/3)*(m/3)+(n/2)*(n/2);
	u=cbrt(-(n/2)+sqrt(p));
	v=cbrt(-(n/2)-sqrt(p));
	x1=u+v-(b/(3*a));
	xRe=-(u/2)-(v/2)-(b/(3*a));
	xIm=((sqrt(3)*u)/2)-((sqrt(3)*v)/2);
	
	cout<<"\nLas raices son: x1 = "<<x1<<" , x2 = "<<xRe<<" + "<<xIm<<"i y x3 = "<<xRe<<" - "<<xIm<<"i";
	cout<<"\n\nHECHO!!";
	}
	
	return 0;
	}
	
	
	