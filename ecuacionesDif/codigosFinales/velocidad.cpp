/**
*@file velocidad.cpp
*@brief Este programa cálcula un aproximada para la derivada de una función de velocidad
*@author Clase de Ecuaciones diferenciales 
*@date 25 Ago 2022 
**/

	//DECLARACIÓN DE LIBRERIAS
#include <iostream>
#include <math.h>
using namespace std;

	//DEFINICIÓN DE LA FUNCIÓN
#define F(t)(pow(t,2)-6.0*t)

	//FUNCIONES
/**
*@brief Esta función devuelve la derivada de de una función a partir de dos punto
*@author Clase de Ecuaciones diferenciales
*@date 25 Ago 2022
*@psrsm s, vslor entero  para el punto inicial
*@param h, valor entero para el incremento respecto al punto a
*return df, valor flotante para la derivada de la función
**/
float derivarFuncion(float a, float h){
	float df, t=a+h;

		df=(F(t)-F(a))/h;
	return df;
}

	//MAIN
int main(){
	float a =0.0f, h=0.01f;
	cout<<"\n--DERIVADAS PARA T EN 0 Y 4--"<<endl;
	cout<<"para t=0: "<<derivarFuncion(a,h)<<endl;
	a=4.0;
	cout<<"para t=4: "<<derivarFuncion(a,h)<<"\n"<<endl;
	cout<<"--DERIVADAS PARA VALORES ENTRE 0 y 5--"<<endl;
	for(float a=0;a<5;a+=0.5){
		cout<<"--> para a="<<a<<"\t:\t "<<derivarFuncion(a,h)<<endl;
	}
return 0;
}
