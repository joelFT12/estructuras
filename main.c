#include <stdio.h>
#include <stdlib.h>
#include "cabeceras.h"

int main(int argc, char** argv) {
    
    int vector[5]= {1,2,3,4,5};
    size_t tamanio= LENGHT(vector);
    
   Recorrer(vector,tamanio);
   
    return (EXIT_SUCCESS);
}

