#include <stdio.h> 
  
int main() 
{ 
  
    long longType; 
    int integerType; 
    long int longIntegerType; 
    long long int longlongIntegerType; 
    float floatType; 
    double doubleType; 
    long double longdoubleType; 
  
    printf("Size of longType is: %ld\n", 
           sizeof(longType)); 
    printf("Size of integerType is: %ld\n", 
           sizeof(integerType)); 
    printf("Size of longIntegerType is: %ld\n", 
           sizeof(longIntegerType)); 
    printf("Size of longLongIntegerType is: %ld\n", 
           sizeof(longlongIntegerType)); 
    printf("Size of floatType is: %ld\n", 
           sizeof(floatType)); 
    printf("Size of doubleType is: %ld\n", 
           sizeof(doubleType)); 
    printf("Size of longDoubleType is: %ld\n", 
           sizeof(longdoubleType)); 
    return 0; 
} 

/* Output:
		Size of longType is: 8                                                                                                          
		Size of integerType is: 4                                                                                                       
		Size of longIntegerType is: 8                                                                                                   
		Size of longLongIntegerType is: 8                                                                                               
		Size of floatType is: 4                                                                                                         
		Size of doubleType is: 8                                                                                                        
		Size of longDoubleType is: 16     */