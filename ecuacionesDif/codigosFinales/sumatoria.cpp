/#**
@file sumatoria.cpp
@brief Este programa permite el calculo de área bajo la curva mediante el metodo de Riemann
@date 01-Sep-2022
**/
	//LIBRERIAS
#include <iostream>
#include <math.h>
using namespace std;


	//FUNCIÓN MATEMÁTICA
//#define F(x) 16-(pow(x,2))
//#define F(x)(1/x)
//#define F(x)(1/(1+x))
#define F(x)(1/sqrt(1+pow(x,2)))
//#define F(x)(sqrt(1+pow(x,3)))
//#define F(x)(1/sqrt(4-pow(x,2)))


	//FUNCIONES
/**
@brief esta funcion calcula la sumatoria de riemann estre dos puntos "x"
@date 01-Sep-2022
@param a, dato entero para el limite inferior
@param b, dato entero para el limite superior
@param div, dato entero para el numero de divisiones
**/
float sumatoriaCentro(float a, float b, int div){
	float i, dx;
	float resultado=0;
		dx=(b-a)/div;
		for(i=a;i<b-dx;i=i+dx){
			resultado = resultado+dx*(F(i+(dx/2)));
		}
return resultado;
}



float sumatoriaTrapezoide(float a, float b, int div){
        float i, dx;
        float resultado=0;
                dx=(b-a)/div;
                for((i=a+dx);i<(b);i=i+dx){
                        resultado = resultado+(2*(F(i)));
                }
	resultado=(dx/2)*(resultado+F(a)+F(b));
return resultado;
}

float integrarSimpson(float a, float b, int divisiones){
        float dx, subintervalos[divisiones+1], sumatoria=0, resultado;
                dx=(b-a)/divisiones;
                subintervalos[0]=a;
                        for(int i=1; i<=divisiones; i++){
                                subintervalos[i]=a+(dx*i);
                        }
                        for(int j=1; j<=(divisiones/2); j++){
                                sumatoria=sumatoria+(F(subintervalos[2*j-2])+4*F(subintervalos[2*j-1])+F(subintervalos[2*j]));
                        }
                resultado=(sumatoria*dx)/3;
return resultado;
}


	//MAIN
int main(void){
	float lim_inf=0.0, lim_sup=0.0;
	int divisiones=0, divisionesC=1;
	float resultadoT=0.0, temporalT=0.0, resultadoS=0.0, temporalS=0.0;
		cout<<"\n--SUMATORIA DE RIEMANN--"<<endl;
		cout<<"\nIngresa el limite inferior: ";
		cin>>lim_inf;
		cout<<"\nIngresa el limite superior: ";
		cin>>lim_sup;
                cout<<"\nIngresa el numero de divisiones: ";
                cin>>divisiones;
		do{
			resultadoT=sumatoriaTrapezoide(lim_inf, lim_sup, divisionesC);
			temporalT=resultadoT;
                        resultadoT=sumatoriaTrapezoide(lim_inf, lim_sup, divisionesC++);
		}while(resultadoT!=temporalT);

                do{
                        resultadoS=integrarSimpson(lim_inf, lim_sup, divisionesC);
                        temporalS=resultadoS;
                        resultadoS=integrarSimpson(lim_inf, lim_sup, divisionesC++);
                }while(resultadoS!=temporalS);

		cout<<endl<<"CONVERGENCIA"<<endl;
                        cout<<endl<<"->RESULTADO TRAPEZOIDE: "<<temporalT<<endl;
                        cout<<endl<<"->RESULTADO SIMPSON: "<<temporalS<<endl;
                cout<<endl<<"MANUAL"<<endl;
                        cout<<endl<<"->RESULTADO TRAPEZOIDE: "<<sumatoriaTrapezoide(lim_inf, lim_sup, divisiones)<<endl;
                        cout<<endl<<"->RESULTADO SIMPSON: "<<integrarSimpson(lim_inf, lim_sup, divisiones)<<endl;
                cout<<endl<<"% PORCENTAJE ERROR"<<endl;
		cout<<endl<<"PORCENTAJE DE ERROR TRAPEZOIDE "<<(abs((temporalT-sumatoriaTrapezoide(lim_inf, lim_sup, divisiones)))/sumatoriaTrapezoide(lim_inf, lim_sup, divisiones))*100<<" %"<<endl;
                cout<<endl<<"PORCENTAJE DE ERROR SIMPSON "<<(abs((temporalS-integrarSimpson(lim_inf, lim_sup, divisiones)))/integrarSimpson(lim_inf, lim_sup, divisiones))*100<<" %"<<endl;



	/*	for(divisiones=3;divisiones<=10;divisiones++){
			cout<<endl<<"**********PARA N="<<divisiones<<"************"<<endl;
			cout<<"\nEL RESULTADO DE LA SUMATORIA CENTRO ES : "<<sumatoriaCentro(lim_inf,lim_sup,divisiones)<<endl;
                	cout<<"\nEL RESULTADO DE LA SUMATORIA TRAPEZOIDE  ES : "<<sumatoriaTrapezoide(lim_inf,lim_sup,divisiones)<<endl;
			cout<<endl<<"Da ENTER para continuar..."<<endl;
			getchar();
			getchar();
		}*/
return 0;
}
