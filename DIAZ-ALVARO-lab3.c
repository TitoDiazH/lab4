#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  
FILE * entrada = fopen("codigo.txt", "r");
FILE * salida = fopen("traduccion.txt", "w");
if(entrada == NULL) {
      perror("Error al abrir archivo");
      return(-1);}
int c;
char string[3];
char a;

while(!feof(entrada)) {
      fscanf(entrada, "%s", string);
      int val = atoi(string);
      fprintf(salida, "%c",val);
}
fclose(entrada);
fclose(salida);

return 0;
}