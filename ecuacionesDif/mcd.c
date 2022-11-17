#include <stdio.h>
#include <time.h>

//int mcd(int numA, int numB);

//int main(){
	//int numA, numB, resultado=0;
	//time_t inicio, fin;

	//time(&inicio);

	//printf("\nIngresa el primer número:\n");
	//scanf(" %i", &numA);
	//printf("\nIngresa el segundo número:\n");
        //scanf(" %i", &numB);
	//resultado = mcd(numA, numB);
	//printf("\n El mcd de %i y %i es: %i\n", numA, numB, resultado);
	//time(&fin);
	//time_t lapso = fin - inicio;
	//printf("\n Tiempo medido: %ld segundos: \n", lapso);

	//return 0;
//}


//int mcd(int numA, int numB){
	//int temp;

	 //while( numB != 0){
           //temp = numA;
           //numB = numA % numB;
           //numA = temp;
        //}
//return numA;
//}

int main()
{
    int numero1, numero2;
    int residuo, mcd;
    time_t inicio, fin;

    time(&inicio);
    printf("Numero1: ");
    scanf("%d", &numero1);

    printf("Numero2: ");
    scanf("%d", &numero2);

    do
    {
        residuo = numero1 % numero2;

        if (residuo != 0)
        {
            numero1 = numero2;
            numero2 = residuo;
        }
        else
        {
            mcd = numero2;
        }

    } while (residuo != 0);

    time(&fin);
    time_t lapso = fin - inicio;
    printf("El mcd es: %d\n", mcd);
    printf("\n Tiempo medido: %ld segundos: \n", lapso);
    
return 0;
}
