#include <stdio.h>
#include <stdlib.h>
/*
 *  Melhor caso do BubbleSort é quando já está ordenado
 *  O(N)
 *  e no pior caso do BubbleSort ele tem
 *  O(N*N).
 * 
 * 
 */

typedef int tipoDado;  //Deixando o tipo do dado de maneira abstrata para depois caso necessaria
                       //alguma modificação seja só necessario mudar aqui

void swap(tipoDado *a, tipoDado *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}


void rBubbleSort(tipoDado *array, int size){
    if(size < 1) return;

    for(int i = 0; i < size; i++){
        if(array[i] > array[i + 1]){
            swap(&array[i], &array[i+1]);
        }
    }
    rBubbleSort(array, size-1);

}


int main(){
    int tam,i,*v;

    printf("Digite o tamanho do vetor: ");
    scanf("%d",&tam);

    v=(int*)malloc(tam*sizeof(tipoDado));   //Alocando dinamicamente o vetor

    printf("Digite o vetor: ");
    for(i = 0; i < tam; i++)scanf("%d",&v[i]);

    rBubbleSort(v,tam-1);                   //Ordenando o vetor

    printf("Vetor ordenado: ");
    for(i = 0; i < tam; i++)printf("%d ",v[i]);

    printf("\n\n");

    return 0;
}
