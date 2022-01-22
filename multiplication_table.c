#include <stdio.h>
int main() {
    int n, i, range;
    printf("Enter an integer: ");
    scanf("%d", &n);
    printf("Enter the range: ");
    scanf("%d", &range);
    for (i = 1; i <= range; ++i) {
        printf("%d * %d = %d \n", n, i, n * i);
    }
    return 0;
}



	/*  Output:
			
			Enter an integer: 5                                                                                                           
			Enter the range: 15                                                                                                             			5 * 1 = 5                                                                                                                       			5 * 2 = 10                                                                                                                    
			5 * 3 = 15                                                                                                                      			5 * 4 = 20                                                                                                                      			5 * 5 = 25                                                                                                                      			5 * 6 = 30                                                                                                                      			5 * 7 = 35                                                                                                                      			5 * 8 = 40                                                                                                                      			5 * 9 = 45                                                                                                                      			5 * 10 = 50                                                                                                                     			5 * 11 = 55                                                                                                                     			5 * 12 = 60                                                                                                                     			5 * 13 = 65                                                                                                                     			5 * 14 = 70                                                                                                                     			5 * 15 = 75 		*/