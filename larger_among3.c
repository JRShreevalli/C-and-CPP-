#include <stdio.h>
int main() {
    
    double n1, n2, n3;
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    if (n1 >= n2 && n1 >= n3)
        printf("%.1lf is the largest number.", n1);
    else if (n2 >= n1 && n2 >= n3)
        printf("%.1lf is the largest number.", n2);
    else
        printf("%.1lf is the largest number.", n3);

    return 0;
}

	/* Output:
			1 4 35                                                                                                                         			35.0 is the largest number.  */		