#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {

FILE * arch = fopen("ordenar.txt", "r");

char linea [100];

int * numeros = malloc(11*sizeof(int));

while(!feof(arch)) {
    fgets(linea, 99, arch);
    int i=0; 
    printf("linea = %s\n", linea);
    char token=strtok(linea, " ");
    while(token!=NULL) {
    printf("token es %s\n", token); 
    *(numeros+i)=atoi(token); 
    i++;
    token=strtok(NULL, "");
    }

    for(int j=0;j<i;j++) { 
        printf("%d", numeros[j]);
    }

    printf("\n");
}
free(numeros);
}