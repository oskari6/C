#include <stdio.h>
#include <stdlib.h>

int main(){
    //allocating memory
    //void pointer not optimal
    int count = 20;
    int* array = malloc(sizeof(int) * count);

    //if system is memory constraint
    if(array == NULL){
        printf("Memory allocation failed");
        return 1;
    }

    count++;
    //create new memory or expand the current memory
    int* array2 = realloc(array, sizeof(int) * count);

    if(array2 == NULL){
        printf("New memory allocation failed..\n");
        return 1; //still possible to continue, not necessary to return 1
    } else {
        array = array2;
    }
    
    for(int i = 0; i < count; i++){
        array[i] = i;
    }

    for(int i = 0; i < count; i++){
        printf("%i ", array[i]);
    }

    printf("\n");

    free(array); //good practice
    return 0;
}