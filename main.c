#include <stdio.h>
#include <string.h>
int main(){
  printf("Bienvenido, vamos a calcular el area de un cilindro. \n");

  float Radio,Altura;
  printf("Por favor ingresa el valor del radio: \n");
  if(scanf("%f",&Radio) !=1) {
    printf("Por favor ingresa un numero valido \n");
    return 1;
  }
  
  printf("Por favor ingresa el valor de la altura: \n");
  if(scanf("%f",&Altura) !=1) {
    printf("Por favor ingresa un numero valido \n");
    return 1;
  }
  
  float Resultado=(2*3.1416*Radio*(Radio+Altura));
  printf("El área del cilindro es: %f cm^2\n", Resultado);
  return 0;
}