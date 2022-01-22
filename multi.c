#include <stdio.h>
int main() 
  {
    double m, n, product;
    scanf("%lf %lf", &m, &n);  
 
    // Calculating product
    product = m * n;

    // Result up to 2 decimal point is displayed using %.2lf
    printf("Product = %.2lf", product);
    
    return 0;
}




/* Output :
		6.9  3.8
		Product = 26.22   */