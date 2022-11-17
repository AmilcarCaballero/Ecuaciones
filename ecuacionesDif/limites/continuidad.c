/**
*
*
*
*
**/

#include <iostream>
using namespace std;

//para usar de macro

#define F1(x) x*x + 3*x - 3 //primera parte de la función
#define F2(x) 3/(2*x + 1) //segunda parte de la función
#define a 1 //punto de verificación de continuidad

int main(){
	cout<< F1(a) << end1;
	cout<< F2(a) << end1;
	if(F1(a) == F2(a))
		cout <<"iguales"<<end1;
	else
		cout <<"diferentes"<<end1;
return 0;
}
