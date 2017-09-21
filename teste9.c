/****************************************************
* Trabalho 2: Numeros Primos
* Nome e Matricula: Samantha Vieira Borges Pacheco, 0050014668
* Professor: Alex Salgado
*****************************************************/ 

#include <stdio.h>

#define TRUE 1
#define FALSE 0

int main()
{
    int n;			
    int d;					
	int primo; 
	int r;
    
    printf("\nOla, meu nome eh Samantha Vieira e vou calcular numeros primos");
    
    do 
    {
		printf("\nEntre com um numero inteiro positivo:");
    	scanf("%d", &n);

	}
	while(n<0);
    

    	if (n <= 1 || (n != 2 && n % 2 == 0))
			primo = FALSE;	/* numeros negativos nao sao primos, ja 1 nao eh primo e 2 eh o unico numero par primo */
    	else
			primo = TRUE;	


    	d = 3;
    	while (primo && d <= n / 2) {
			if (n % d == 0)
	    	primo = 0;
		d = d + 2;		/* testando apenas os numeros impares */
    }

   	 	if (primo)
			printf("%d o numero eh primo \n", n);
    	else
			printf(" %d o numero nao eh primo \n", n);
    
   		printf("\nDeseja continuar? 1-Sim/2-Nao");
    	scanf("%d", &r);
    	if(r==1)
    	return 0;
    	else
    	printf("\nObrigado, ate a proxima! Para ver o meu codigo entre no link https://github.com/samanthavbp\n");
    
		system("pause");
    	
		
}
