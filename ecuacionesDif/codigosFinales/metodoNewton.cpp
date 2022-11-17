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
//#define G(x)(pow(x,2)-7)
//#define G(x)(pow(x,3)-(3*x)+1)
//#define G(x)(x-cos(x))
#define G(x) sin(x)-cos(x) ¿-1.1
#define x1 1.1
#define iteracionesMaximas 50

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

                df=(G(t)-G(a))/h;
        return df;
}
/**
**/
void  metodoNewton(float n){
	float resultado=0, temporal=0, df=derivarFuncion(n,0.0001);
        bool convergencia=false;
        int i=0;
			cout<<"\nITERACIÓN\txn\t\tresultado"<<endl;

			//Ciclo iterativo para el cálculo
			do{
				temporal=(float)(n-(G(n))/df);//Formula de Newton-Raphson
				cout<<"\n\t"<<i+1<<"|\t"<<n<<"\t\t"<<temporal<<endl;
				resultado=temporal-n;//Comparación de resultados
				if(resultado==0 || fabs(resultado)<0.0001){
					convergencia=true;
					cout<<"\n-- HAY CONVERGENCIA :) --\n"<<endl;
				}
				else{
					n=temporal;//siguiente valor de xn
				}
				i++;//Incremento contador
			}while(convergencia==false && i<iteracionesMaximas);
return;
}

//MAIN
int main(void){
	cout<<"\n--MÉTODO DE NEWTON--\n"<<endl;
	metodoNewton(x1);
return 0;
}
