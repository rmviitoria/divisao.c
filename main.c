/******************************************************************************

Crie um programa que recebe dois valores inteiros A e B pelo teclado e imprime o valor de A dividido por B. 
Entretanto, se o valor de B for 0, imprima uma mensagem de erro e não faça a divisão.


*******************************************************************************/
#include <stdio.h>

int main()
{
  int a, b;
  
  printf("Digite o valor de A: ");
  scanf("%d", &a);
  printf("Digite o valor de B: ");
  scanf("%d", &b);
  
  if(b == 0){
      printf("Erro! Não foi possivel realizar a divisão.");
  }else{
      printf("%d dividido por %d é %d", a, b, a/b);
  }
  return 0;
}

