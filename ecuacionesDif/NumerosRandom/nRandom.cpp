/**
*
*
*
*
**/

#include <iostream>
#include <random>

using namespace std;

int main(){
	int numero, numero2;
	for(int i = 0; i<100;i++){
	numero = rand() % 100;
	numero2 = rand() % 100;
	cout << numero<< '\t' << numero2 << endl;
	}
return 0;
}
