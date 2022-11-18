#include <stdio.h>

int t = 0; //Tamaño del array

void insertionSort(int a[], int n){ //Pasamos el array y el tamaño del array, t=n
    for(int i = 1; i<n; i++){ //Recorrido desde la posición 2 hasta el tamaño
        int key = a[i]; //key es igual al valor de la posición 2
        int j = i-1; // j = 0
        while(key < a[j] && j>=0){ 
            a[j+1] = a[j];
            --j;
        }
        a[j+1]=key;
    }
}

void bubbleSort(int a[], int n){
    for(int i=1; i<n; i++){
        for(int j=0; j<n-1;j++){
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1]=temp;
            }
        }
    }
}

void pantalla(int a[], int n){
    for(int j=0; j<n-1; j++){
        printf("%d, ", a[j]);
    }
    printf("%d\n", a[n-1]);
}

void main(){

    printf("Ingresa los numeros a permutar: ");
    scanf("%d", &t); //Tamaño del array
    printf("\n");

    int a[t]; //Array declarado con el tamaño

    for(int i=0; i<t; i++){
        printf("Ingrese el valor %d: ", i+1);
        scanf("%d", &a[i]); //Se asignan los valores a cada posición del array
    }

    printf("\nValores desordenados: ");
    pantalla(a, t); //Se imprimen los valores como se insertaron
    //insertionSort(a, t);
    bubbleSort(a, t); //Se aplica alguna función
    printf("\nValores ordenados: ");
    pantalla(a, t); //Se imprimen los valores ordenados dependiendo de la funció aplicada
    //insertionSort(a, t);
    //bubbleSort(a, t);

}