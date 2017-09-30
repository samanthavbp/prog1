#include<stdio.h>

int main()
{
  int num, maior = 0, menor = 0, y=0;
  
    printf("Digite uma temperatura:");
    scanf("%d",&num);
    
  menor = num;
  maior = num;
  
  for( y = 1; y < 4; y++ )
  {
    
    printf("Digite uma temperatura:");
    scanf("%d",&num);
  
    if(num > maior) maior = num;
    if(num < menor) menor = num;
    
  }

  printf ("Menos quente :%d graus Celsius e mais quente :%d graus Celsius\n",menor, maior);
  
  system("pause");
  return 0;
  
}
