/**
*@file d_Parciales.cpp
*@author Amilcar Caballero
*@date 17/10/2022
*@param Obtener la derivada parcial con respecto a x y a y, de
*	f(x,y) = x^2 + xy + y^2 y determinar la pendiente en el punto (1,1).
*
**/

#include <iostream>
#include <cmath>

using namespace std;

#define F(x,y)(pow(x,2)+(x*y)+pow(y,2))

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

int main(void){
        float dp,dr,dc;
        cout<<endl<<"Las derivadas parciales son: "<<endl;
        dp=derivarX(1,1,0.1);
	dr=derivarY(1,1,0.1);
        cout<<endl<<"Derivada en x: "<<dp<<endl;
        cout<<"Derivada en y: "<<dr<<endl;

return 0;
}
