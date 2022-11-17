#include <iostream>
#include <math.h>
using namespace std;
//#define F(x)(x*sin(x))
//#define F(x) 16-(pow(x,2))
#define F(x)(1/x)
//#define F(x)(1/(1+x))
//#define F(x)(1/sqrt(1+pow(x,2)))
//#define F(x)(sqrt(1+pow(x,3)))
//#define F(x)(1/sqrt(4-pow(x,2)))

float integrarSimpson(float a, float b, int divisiones){
	float dx, subintervalos[divisiones+1], sumatoria=0, resultado;
		dx=(b-a)/divisiones;
		subintervalos[0]=a;
			for(int i=1; i<=divisiones; i++){
				subintervalos[i]=a+(dx*i);
				//cout<<dx;
			}
			for(int j=1; j<=(divisiones/2); j++){
				sumatoria=sumatoria+(F(subintervalos[2*j-2])+4*F(subintervalos[2*j-1])+F(subintervalos[2*j]));
				//cout<<sumatoria;
			}
		resultado=(sumatoria*dx)/3;
return resultado;
}

int main(void){
	float lim_inf, lim_sup;
	int divisiones;
		cout<<endl<<"--- MÉTODO SIMPSON ---"<<endl;
		cout<<"ingresa el limite inferior: ";
		cin>>lim_inf;
		cout<<"ingresa el limite superior: ";
		cin>>lim_sup;
		cout<<"Ingresa el numero de divisiones(entero par): ";
		cin>>divisiones;
		cout<<"->El resultado es: "<<integrarSimpson(lim_inf, lim_sup, divisiones)<<endl;
return 0;
}
