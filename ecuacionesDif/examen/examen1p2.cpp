#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

#define G(x) pow((3*x-1)/(pow(x,2)+3),2)//ecuacion base
//#define G(x) ((-18*pow(x,3))+(18*pow(x,2))+50*x-18)/(pow((pow(x,2))+3),3)//segunda derivada

//funciones
float derivarFuncionProgresiva(float a,float h){
	float dfp, t=a+h;

	dfp=(G(t)-G(a))/h;
return dfp;
}

//float segundaDerivada(float a, float h){
//	float
//}

float derivarFuncionRegresiva(float a, float h){
	float dfr, t=a-h;

	dfr=(G(a)-G(t))/h;
return dfr;
}

float derivarFuncionCentral(float a, float h){
	float dfc, t=a+h, s=a-h;

	dfc=(G(t)-G(s))/(2*h);
return dfc;
}


//main
int main(){
	float a=0.0f, h=0.01f;
	cout<<"\n--DERIVADAS PROGRESIVAS PARA x EN 1 Y h 0.1--"<<endl;
        cout<<"para x=1: "<<derivarFuncionProgresiva(a,h)<<endl;
        a=1.0;
        cout<<"para h=0.1: "<<derivarFuncionProgresiva(a,h)<<"\n"<<endl;
        cout<<"--DERIVADAS PARA VALORES ENTRE 0 y 5--"<<endl;
        for(float a=0;a<5;a+=0.5){
                cout<<"--> para a="<<a<<"\t:\t "<<derivarFuncionProgresiva(a,h)<<endl;
	}
	cout<<"/n/n/n"<<endl;


 	cout<<"\n--DERIVADAS REGRESIVAS PARA x EN 1 Y h 0.1--"<<endl;
 	cout<<"para x=1: "<<derivarFuncionRegresiva(a,h)<<endl;
        a=1.0;
        cout<<"para h=0.1: "<<derivarFuncionRegresiva(a,h)<<"\n"<<endl;
        cout<<"--DERIVADAS PARA VALORES ENTRE 0 y 5--"<<endl;
        for(float a=0;a<5;a+=0.5){
                cout<<"--> para a="<<a<<"\t:\t "<<derivarFuncionRegresiva(a,h)<<endl;
	}
        cout<<"/n/n/n"<<endl;


	 cout<<"\n--DERIVADAS Central PARA x EN 1 Y h 0.1--"<<endl;
        cout<<"para x=1: "<<derivarFuncionCentral(a,h)<<endl;
        a=1.0;
        cout<<"para h=0.1: "<<derivarFuncionCentral(a,h)<<"\n"<<endl;
        cout<<"--DERIVADAS PARA VALORES ENTRE 0 y 5--"<<endl;
        for(float a=0;a<5;a+=0.5){
                cout<<"--> para a="<<a<<"\t:\t "<<derivarFuncionCentral(a,h)<<endl;
	}
        cout<<"/n/n/n"<<endl;
return 0;
}

