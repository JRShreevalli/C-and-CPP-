#include <stdio.h> 
  
int main() 
{ 
    int m,n,quotient = 0,remainder = 0; 
  
    scanf("%d %d", &m,&n); 
  
    quotient = m / n; 
    remainder = m % n; 

    printf("Quotient : %d\n", quotient); 
    printf("Remainder : %d", remainder); 
  
    return 0; 
} 

  /*  Output :
		100  20
		Quotient  : 5
		Remainder  : 0    */