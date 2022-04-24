#include <stdio.h>
#include<locale.h>
void main()
{
int arr1[10], arr2[10], arr3[10]; //Declaración de los arreglos
int i,j=0,k=0,n;
printf("\n\t\t------------------------------------------------------");
printf("\n\t\t\tcleaSeparación de arreglos en pares e impares");
printf("\n\t\t------------------------------------------------------\n\n\n");

printf("Introduce un número de elementos para almacenar en el arreglo: ");
scanf("%d",&n);

printf("Introduce %d elementos en el arreglo :\n",n);
	for(i=0;i<n;i++)
            {
	      printf("Elemento - %d: ", i+1);
	      scanf("%d",&arr1[i]);
	    }

       for(i=0;i<n;i++)
	    {
		if (arr1[i]%2 == 0)//Almacena los valores Pares del arreglo 1 en el 2do arreglo.
	    	{
		   	arr2[j] = arr1[i];
			j++;
	    	}
		else//Almacena los valores Impares del arreglo 1 en el 3er arreglo
		{
		   	arr3[k] = arr1[i];
		   	k++;
		}
           }

printf("\nLos elementos pares son: \n");
    for(i=0;i<j;i++)
	    {
		printf("%d\n",arr2[i]);
	    }

printf("\nLos elementos impares son:\n");
    for(i=0;i<k;i++)
    {
	printf("%d\n", arr3[i]);
    }

printf("\n\n");
 }
