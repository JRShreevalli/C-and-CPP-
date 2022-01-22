#include<stdio.h>
int main() 
   {
    int intType;
    float floatType;
    double doubleType;
    char charType;

    printf("Size of int: %ld bytes\n", sizeof(intType));
    printf("Size of float: %ld bytes\n", sizeof(floatType));
    printf("Size of double: %ld bytes\n", sizeof(doubleType));
    printf("Size of char: %ld byte\n", sizeof(charType));
    
    return 0;
  }


	/* Output:
			Size of int: 4 bytes                                                                                                           			Size of float: 4 bytes                                                                                                          			Size of double: 8 bytes                                                                                                         			Size of char: 1 byte       */                                                                                                     
                       