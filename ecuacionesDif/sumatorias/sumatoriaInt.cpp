
//funcion de riemann 

/**
*
*
*
*
**/

#include <iostream>
#include <math.h>

using namespace std;

#define f(x) 16-(pow(x,2))

float riemann( float inicio, float fin);

int main(){
	printf("Calcular la f(x)=16-x^2 en el intervalo [0,3]");
	riemann;
	printf("\n\nEl area es: %f", sum);
  return 0;
}


/**
*
*
*
*
**/

float riemann( float inicio, float fin){
	float i,sum = 0, n = 1000;
	float ancho = (fin - inicio)/n;

	for(i = inicio, i<fin, i=i+ancho){
		sum = sum+ancho*(f(i+(ancho/2));
	};
  return sum;
}

