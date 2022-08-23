#include <iostream>
#include<stdio.h>
void QS (int L[], int ini, int fin);
void prt_array (int array[], int size);
void IS(int array[], int size);
void swap(int *a, int *b);
void SS(int array[], int size);
void printArray(int array[], int size);







int main (int argc, char *argv[]){
    int i, L[7]={1,2,3,4,5,6,7};
    QS(L, 0, 6);

//acá empieza IS
    int data[]={1,2,3,4,5,6,7};
    int size = sizeof (data) / sizeof(data[0]);
    IS(data, size);
    prt_array (data, size);
    //aca terma IS
    //inicia SS

    SS(data, size);
    printArray(data, size);

    //ytermina SS
    for (i=0; i<7; i++){
        printf("%d\t", L[i]);

    }
    return 0;
}


