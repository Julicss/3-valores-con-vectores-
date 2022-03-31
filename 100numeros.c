#include <stdio.h>

main(){
	
int numeros;
int sumap;
int sumai;


    while(numeros>-1){
	
      printf("Ingresar 100 numeros:");
      scanf("%d",&numeros);	
	if(numeros%2){
	
	 sumai=numeros+sumai;
		
	}
	else
	
	  sumap=numeros+sumap;
	  
   }


   if(sumap<sumai){
   	
   	printf("\n\nLa suma de los impares es: %d",sumai);

   }
   else 
   printf("\n\nLa suma de los pares es: %d",sumap);

	
 return 0;	
}


