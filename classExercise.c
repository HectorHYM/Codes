#include <stdio.h>

void sort(int a[], int n);
void swap(int *x, int *y);
void values(int a[], int n);
void pantalla(int a[], int n);

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void sort(int a[], int n){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(a[i] > a[j]){
                swap(&a[i], &a[j]);
            }
        }
    }
}

void values(int a[], int n){
    for(int i=0; i<n; i++){
        printf("Ingrese el valor número %d: ", i+1);
        scanf("%d", &a[i]);
        printf("\n");
    }
}

void pantalla(int a[], int n){
    for(int i=0; i<n; i++){
        printf("Valor %d en la posición %d", a[i], i+1);
        printf("\n");
    }
}

void main(){
    int n = 0;
    
    printf("Ingrese el la cantidad de números a ordenar: ");
    scanf("%d", &n);
    printf("\n\n");
    
    int a[n];
    
    values(a, n);
    printf("ORIGINAL\n");
    pantalla(a, n);
    printf("\n");
    sort(a, n);
    printf("ORDENADOS\n");
    pantalla(a, n);
}