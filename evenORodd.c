#include <stdio.h>
int main()
{
    int num ;
    scanf("%d",&num);
 
    if(num%2==0)
        printf("%d is an EVEN number.",num);
    else
        printf("%d is an ODD number.",num);
 
    return 0;
}

	/*  Output :
			56
			56 is an EVEN number.   */