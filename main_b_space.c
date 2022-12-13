#include <stdio.h>
#include <stdlib.h>

#include "mylib/mylib.h"

#define LOWER -50
#define UPPER 50

int generateRandomInt(int lower, int upper){
    return (rand() % (upper - lower + 1)) + lower;
}

void initMat(int* matrix, int size){
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            matrix[size * i + j] = generateRandomInt(LOWER, UPPER);
        }
    }
}

void initVec(int* vector, int size){
    for(int i = 0; i < size; i++){
        vector[i] = generateRandomInt(LOWER, UPPER);
    }
}

int main(void){

    int size = 100;
    int* matrix = (int *) malloc(size * size * sizeof(int));
    int* vector = (int *) malloc(size * sizeof(int));
    int* result = (int *) malloc(size * sizeof(int));

    if((matrix == NULL) | (vector == NULL)){
        printf("Malloc is failed \n");
        exit(0);
    } else {
        initMat(matrix, size);
        printf("\nMatrix = ");
        printMat(matrix, size);
        initVec(vector, size);
        printf("\nVector = ");
        printVec(vector, size);
        for (int i = 0; i > -1; ++i){
            matVecMult(matrix, vector, result, size);
            printf("\nResult = " );
            printVec(result, size);
        }
    }

    free(matrix);
    free(vector);
    free(result);

    return 0;
}