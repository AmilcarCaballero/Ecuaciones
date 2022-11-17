/**
*@file desplazamientos.cpp
*@author Amilcar Caballero
*@date 17/10/2022
*@param Desarrollar un programa que permita, a partir de una función y puntos iniciales y finales,
*	calcular el desplazamiento de la variable dependiente y aplicar a los siguientes (utilizar
*	ambos métodos y calcular el error):
*		1. f(x,y) = x^2 – 3x^3 y^2 + 4x – 2y^3 + 6 (x,y) se mueven de (-2,3) a (-2.02,3.01)
*		2. f(x,y) = x^2 – 2xy + 3y (x,y) se mueven de (1,2) a (1.03, 1.99)
*		3. f(x,y,z) = x^2 *z^3 – 3yz^2 + x^-3 + 2y^1/2 *z (x,y,z) se mueven de (1,4,2) a (1.02, 3.97,1.96)
*		4. w = r^2 + 3sv + 2p^3 (r,s,v,p) se mueven de (1, 2, 4, 3) a (1.02, 1.99, 4.01, 2.97)
**/

#include <iostream>
#include <cmath>

using namespace std;

#define F(x,y) = x^2 – 3x^3 y^2 + 4x – 2y^3 + 6

float derivarX(float x, float y, float h){
        float dfx=0.0, t=x+h, t2=x-h;
                dfx=(F(t,y)-F(t2,y))/(2*h);
return dfx;
}

float derivarY(float x, float y, float h){
        float dfy=0.0, t=y+h, t2=y-h;
                dfy=(F(x,t)-F(x,t2))/(2*h);
return dfy;
}

float desplazamineto(float x, float y, float x2, float y2){
	float w=0.0, ds=x2-x, ds2=y2-y;
		w=F(x+ds,y+ds2)-F(x,y); 
return w;
}


int main(void){
        float dp,dr,dz;
	
        cout<<endl<<"Las derivadas parciales son: "<<endl;
        dp=derivarX(1,1,0.1);
        dr=derivarY(1,1,0.1);
	dz=desplazamiento(-2,3,-2.02,3.01);
        cout<<endl<<"Derivada en x: "<<dp<<endl;
        cout<<"Derivada en y: "<<dr<<endl;
	cout<<"Desplazamiento: "<<dz<<endl;
return 0;
}

