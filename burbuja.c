#include <stdio.h>

/*
@autor:
 * Cesar villalobos
 * Estudiante: Ing.Sistemas UDI
*/

int main(){
	int array[5]={3,4,1,8,5}; //Se crea un vector de dimensión 5
	int i,j,aux;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){ /*Se recorren las posiciones para ello hay que tener claro que las
							iteraciones necesarias para que un vector de dimension n esté ordenado
							es n**2*/
			if(array[j]>array[j+1]){ /*Se compara la posición actual con la siguiente, si la actual
									   es mayor a la siguiente se entra al condicional*/
				aux=array[j]; //Se guarda la posición actual en una variable temporal
				array[j]=array[j+1]; //Se reemplaza la posición actual por la siguiente quedando la menor más a la izquierda
				array[j+1]=aux; //Y en la posición más a la derecha se asigna lo que se había guardado en la variable temporal
			}
		}
	}
	for (i=0;i<5;i++){
		printf("%d",array[i]); //Se imprime el vector recorriendo todas sus posiciones
	}
}
