#include <stdio.h>

void printMat(int* matrix, int size){

    printf("[");
    //i represents the current row being printed
    for(int i = 0; i < size; i++){
        printf("\n");
        //j represents the item that's being printed on row i
        for(int j = 0; j < size; j++){
            //size * i + j represents the position of the item in the matrix
            printf("%d,\t",matrix[size * i + j]);
        }
    }
    printf("]\n");

}

void printVec(int* vector, int size){
    printf("[");
    //i represents the current row being printed
    //in a vector, there is only one item in every row
    for(int i = 0; i < size; i++){
        printf("\n");
        printf("%d,\t",vector[i]);
    }
    printf("]\n");
}

void matVecMult(int* matrix, int* vector, int* output, int size){

    // i represents the row being worked on
    for(int i = 0; i <size; i++){
        // 
        output[i] = 0;
        // j represents the item being worked on for the matrix
        for(int j = 0; j < size; j++){
            // each item in the output matrix is a sum from multiple multications
            // the number of multiciations is equal to the size
            output[i] += matrix[size * i + j] * vector[j];
        }
    }

}