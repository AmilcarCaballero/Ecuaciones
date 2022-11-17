#include <iostream>
#include <math.h>

using namespace std;


#define F(x) 0.2+25x

//funciones

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
//1/3
float integrarSimpson(float a, float b, int divisiones){
        float dx, subintervalos[divisiones+1], sumatoria=0, resultado;
                dx=(b-a)/divisiones;
                subintervalos[0]=a;
                        for(int i=1; i<=divisiones; i++){
                                subintervalos[i]=a+(dx*i);
                        }
                        for(int j=1; j<=(divisiones/2); j++){
                                sumatoria=sumatoria+(F(subintervalos[2*j-2])+4*F(subintervalos[2*j-1])+F(subinterval>
                        }
                resultado=(sumatoria*dx)/3;
return resultado;
}


 //main
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
                        cout<<endl<<"->RESULTADO TRAPEZOIDE: "<<sumatoriaTrapezoide(lim_inf, lim_sup, divisiones)<<e>
                        cout<<endl<<"->RESULTADO SIMPSON: "<<integrarSimpson(lim_inf, lim_sup, divisiones)<<endl;
                cout<<endl<<"% PORCENTAJE ERROR"<<endl;
                cout<<endl<<"PORCENTAJE DE ERROR TRAPEZOIDE "<<(abs((temporalT-sumatoriaTrapezoide(lim_inf, lim_sup,>
                cout<<endl<<"PORCENTAJE DE ERROR SIMPSON "<<(abs((temporalS-integrarSimpson(lim_inf, lim_sup, divisi>
return 0;
}
