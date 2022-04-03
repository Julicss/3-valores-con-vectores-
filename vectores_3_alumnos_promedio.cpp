#include <stdio.h>

main(){
	
	int i;
	float promedio;
	int V[3]; //indica la cantidad de espacio abajo se pone una variable no numero//
	int contador2=0;
	int contador1=0;
	
	
	printf("\n\nIngrese 3 valores enteros:");
  

  for(i=0;i<3;i++) {
  	 scanf("%d",&V[i]);
	  
	  
	    if(V[i]%2){	
		contador2=contador2 +1;	
	}else{
		
    	contador1=contador1 +1;	
	    }
  }	
	

	printf("\n\nLos numeros pares son: %d", contador1);
	printf("\n\nLos numeros impares son: %d", contador2);
		
	promedio=(float) (V[0]+V[2]+V[1])/3;
	
		
	printf("\n\nEl promedio de los 3 valores es %f",promedio);	

	return 0;
}
