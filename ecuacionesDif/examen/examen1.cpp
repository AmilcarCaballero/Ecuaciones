/**
*@file examen1.cpp
*@brief  Este programa contiene los codigos del examen 1 de la materia  programación en ecuaciones diferenciales
*@author Amilcar Caballero 
*@date 22-09- 2022
**/

#include <iostream>
#include <math.h>

using namespace std;

//ecuación
#define G(x) sin(x)-cos(x)-1.1
#define iteracionesMax 50
#define x1 1.1

//función derivar
float derivarFuncion(float a, float h){
        float derivar, t=a+h;

	derivar=(G(t)-G(a))/h;

 return derivar;
}

//función metodo newton
void  metodoNewton(float n){
        float resultado=0, temporal=0, derivar=derivarFuncion(n,0.0001);
        bool convergencia=false;
        int i=0;
                        cout<<"\nITERACIÓN\txn\t\tresultado"<<endl;

                        //Ciclo iterativo para el cálculo
                        do{
                                temporal=(float)(n-(G(n))/derivar);
                                cout<<"\n---\t"<<i+1<<"---\t"<<n<<"\t\t"<<temporal<<endl;
                                resultado=temporal-n;//Comparación de resultados
                                if(resultado==0 || fabs(resultado)<0.0001){
                                        convergencia=true;
                                        cout<<"\n--CONVERGENCIA--\n"<<endl;
                                }
                                else{
                                        n=temporal;//siguiente valor de xn
                                }
                                i++;//Incremento contador
                        }while(convergencia==false && i<iteracionesMax);
return;
}

//main
int main(void){
	float a, h;

        cout<<"\n--MÉTODO DE NEWTON--\n"<<endl;
	cout << "\nIngrese el intervalo [a,b]:" << endl;
	cout << "\na = ";
	cin >> a;
	cout << "h = ";
	cin >> h;
	derivarFuncion(a,h);
        metodoNewton(x1);
return 0;
}

