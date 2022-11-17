#include <iostream>
#include <cmath>
using namespace std;
#define I(x)(0.2+(25*x)-((200)*(pow(x,2)))+((675)*(pow(x,3)))-((900)*(pow(x,4)))+((400)*(pow(x,5))))


float SimpsonUnTercio(float a, float b){
        float dx, fa,fb, fI, resultado=0;
                dx=(b-a)/2;
                fa=I(a);
                fb=I(b);
                fI=I(((b-a)/2));
                resultado=(dx/3)*(fa+(4*fI)+fb);
return resultado;
}

float SimpsonTresOctavos(float a, float b){
        float dx, fa,fb, fI1, fI2, resultado=0;
                dx=(b-a)/3;
                fa=I(a);
                fb=I(b);
                fI1=I(((2*a+b)/3));
                fI2=I(((a+2*b)/3));
                resultado=((3*dx)/8)*(fa+(3*fI1)+(3*fI2)+fb);
return resultado;
}

float sumatoriaTrapezoide(float a, float b, int div){
        float i, dx;
        float resultado=0;
                dx=(b-a)/div;
                for((i=a+dx);i<(b);i=i+dx){
                        resultado = resultado+(2*(I(i)));
                }
        resultado=(dx/2)*(resultado+I(a)+I(b));
return resultado;
}

int main(void){
        float Integral1,Integral2,Integral3, Vreal=1.64053, Error=0;
        cout<<endl<<"Las Integrales son: "<<endl;
        Integral1=SimpsonUnTercio(0, 0.8);
        Integral2=SimpsonTresOctavos(0, 0.8);
        Integral3=sumatoriaTrapezoide(0,0.8, 100);
        cout<<endl<<"SOLUCION REAL = 1.64053";
        Error=((abs(Integral1-Vreal))/(Vreal))*100;
        cout<<endl<<"Con Un Tercio: "<<Integral1<<" con %"<<Error<<" de error"<<endl;
        Error=((abs(Integral2-Vreal))/(Vreal))*100;
        cout<<"Con Tres Octavos: "<<Integral2<<" con %"<<Error<<" de error"<<endl;
        Error=((abs(Integral3-Vreal))/(Vreal))*100;
        cout<<"Con trapezoide: "<<Integral3<<" con %"<<Error<<" de error"<<endl;

return 0;
}

