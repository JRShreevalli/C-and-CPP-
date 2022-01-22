#include<stdio.h>
int main ()
{
    int req;
    scanf("%i",&req);
    for(int a=1;a<=req;a++)
    {
        unsigned long int i,value,tot,square=0,add=0;
        scanf("%lu\n",&value);
        for(i=1;i<=value;i++)
        {
           add = add + i ;
           square = square + i*i;
        }
        tot = add*add - square;
        printf("%lu\n",tot);
    }
    return 0;
}
  