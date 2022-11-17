#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

//ecuación f(x)=x^2 -7, donde x1= 2.5

#define f(x)(pow(x,2)-7)
#define b 2.5

double metodoNewton(double n);
double derivarF(double a, double h);

int main(){
	int i = 0;

	printf("Método Newton\n");
	printf("Problema: f(x)= x^2 -7\n");
	printf("----------------------------------------------------------------------------------------");
	printf("\n\n");

	metodoNewton(b); 
	return 0;
}

//funciones

double derivarF(double a, double h){
	double df,x = a + h;
	return df=(f(x)-f(a))/h;
}

double metodoNewton(double n){
	int i = 0;
	double resultados[50];
	double df= derivarF(b,0.0001);
	double a = 0, h= 0.0001;
	double x = a + h;



	cout<< "\nIteración "<<x*n<<"\tresultado" <<endl;
	for(i=0; i<10;i++){
		resultados[i] = n-(f(n))/df;
		cout<< "\n" << i+1 << "\t" << n << "\t" << resultados[i] << endl;
		n+=0.1;
		df = temp
		df = df -  
	}
return df;
}


