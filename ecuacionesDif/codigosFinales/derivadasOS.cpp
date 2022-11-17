/**
*@file derivadasOS.cpp
*@date 4/10/2020
*@author Amilcar Caballero
*@param Encontrar las derivas de 1 a la 4 por los metodos de  sustitución
*	y una función para cada  derivada (dependencia y recursión)
**/

#include <iostream>
#include <cmath>

using namespace std;

//central
float funcion(float x){
	float a;
	a = //funcion
	return a;
}

float Derivada1(float x, float h){
	float a;
	a=(funcion(x+h)-funcion(x-h))/2*h;

	return a;
}

float Derivada2(float x, float h){
	float a;
	a = (funcion(x+2*h)-2*funcion + funcion(x-2*h))/(4*pow(h,2))
	return a;
}

float Derivada3(float x, float h){

}

float Derivad4(float x, float h){

}




