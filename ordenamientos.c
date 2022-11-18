#include <stdio.h>
#include <stdlib.h>
int a[5];

void leer_archivo(char texto){
	FILE* archivo;
	char texto[20];
    char c;
    int i=0;
    int j=0;

	archivo = fopen("datos.txt","rt");
    do{
        c = fgetc(archivo);
        if(c == ','){
            a[j] = atoi(texto);
            j++
            for(int z=0; i<i; z++){
                texto[z]=0;
            }
            i=0;
            continue;
        }
    }while()

}

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

int particion(int a[], int izq, int der){
	int pivote = a[izq]; //seleccionamos el elemento pivote

		while(1){//mientras sea 1
			while(a[izq] < pivote){ //compara que todos los
						//elementos a la izquierda
						//sean menores al pivote
				izq++;
			}
			while(a[der] > pivote){//compara que todos los
					       //elementos de la derecha
					       //sean mayores al pivote
				der--;
			}
			if(izq >= der){
				return der;
			}else{
				intercambio(&a[izq], &a[der]);
				izq++;
				der--;
			}
		}
}

void quicksort(int a[], int izq, int der){
	if(izq < der){
		int indice_de_particion = particion(a, izq, der);
		quicksort(a, izq, indice_de_particion);
		quicksort(a, indice_de_particion+1, der);
	}
}


void insertionsort(int a[], int d){
	int i;
	int j;
	for(int i=1; i<d; i++)
	{
		int key=a[i];
		int j=i-1;
		
		while (key<a[j] && j>=0)
		{
			a[j+1] = a[j];
			--j;
		}
		a[j+1]=key;

	}
}

void bubble_sort(int a[], int d){
	for(int i=1; i<=d; i++)
		for(int j=0; j<=d-1; j++)
			if(a[j]> a[j+1])
				intercambio(&a[j], &a[j+1]);
}

void searching(int a[], int d){
	int pos = 0;
	int dato = 5;

	while(pos<d){
		
	}
}

void main(){
	int d=5;
    
	leer_archivo();
    pantalla(a, d);
	//insertionsort(a, d);
	//bubble_sort(a,d);
	quicksort(a, 0, d-1);
	pantalla(a, d);
	printf("\n\n");
	return 0;
}

/*for(int i=0; i<n; i++){
	if(num == a[i]){
		printf("Se encontro tu numero");
	}else{
		printf("No se encontro");
	}
}*/