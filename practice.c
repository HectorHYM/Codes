#include <stdio.h>

void pantalla(int a[], int n){
    for(int j=0; j<n-1; j++){
        printf("%d, ", a[j]);
    }
    printf("%d\n", a[n-1]);
}

void intercambio(int *x, int *y)/*swap()*/
{
	int temp = *x;
	*x = *y;
	*y = temp;	
}

void ordenamiento(int a[], int n){
    for (int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(a[i] > a[j]){
                intercambio(&a[i], &a[j]);
            }
        }
    }
}

void searching(int a[], int n){

int dato=5;

	for(int i=0; i<n; i++){
        if(dato == a[i]){
            printf("%d en la posición %d", dato, i);
            printf("\n\n");
        }
    }
}

int main(){
    int n = 0;

    printf("Ingrese el tamaño del array: ");
    scanf("%d", &n);
    printf("\n");
    int a[n];

    for(int i=0; i<n; i++){
        printf("Ingrese el valor de la posición %d: ", i+1);
        scanf("%d ", &a[i]);
    } 

    /*for(int i=0; i<n; i++){
        printf("%d ", a[i]);
    }*/

    /*for (int i=1; i<n; i++){
        for(j=i+1; j<n; j++){
            if(a[i] > a[j]){
                intercambio(&a[i], &a[j]);
            }
        }
    }*/

    printf("Valores no ordenados \n\n");
    pantalla(a, n); 
    printf("\n\n");
    ordenamiento(a, n);
    printf("Valores ordenados \n\n");
    pantalla(a, n);
    printf("\n\n");
    searching(a, n);
    printf("\n\n");