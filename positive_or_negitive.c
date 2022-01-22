#include <stdio.h> 
  
int main() 
{ 
    int value; 
 
    scanf("%d", &value); 
  
    if (value > 0) 
        printf("%d is positive.", value); 
    else if (value < 0) 
        printf("%d is negative.", value); 
    else if (value == 0) 
        printf("%d is zero.", value); 
  
    return 0; 
} 


	/* Output :
			6
			6 is positive.      */