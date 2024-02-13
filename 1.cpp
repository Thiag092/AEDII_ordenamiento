#include <stdio.h>
#include <string.h>

typedef int tVector [5];

void cargarVector();
void visualizar(tVector);
bool elemEncontrado(int, tVector);

int elemento, posicion;
tVector vector;

int main(){
	cargarVector();
	visualizar( vector);
	elemEncontrado( elemento,  vector);
	printf ("Se encontro el elemento?: %s", elemEncontrado(elemento, vector) ? "si" : "no");
		return 0;
}

void cargarVector(){
	int i;
	for(i=0;i<5;i++){
	printf("Ingrese un numero entero para la posicion %d\n", i+1);
	scanf("%d", &vector[i]);
}
}

void visualizar(tVector pVector){
	int i;
	for (i=0;i<5;i++){
		printf("%d	|", pVector[i]);
	}
}

bool elemEncontrado(int pElem, tVector pVector){
	int i;
	printf("\nIngrese elemento a buscar\n");
	scanf ("%d", &pElem);
	for(i=0;i<5;i++){
		if(pVector[i]==pElem ){
					return (pElem==pVector[i]);

		}
		
	}

}
