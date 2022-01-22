#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
    int main()
    {
       int no;
        scanf("%d",&no);
        for(int a=1;a<=no;a++)
        {
           unsigned long long int count=0,temp=0,tot,t,i;
            scanf("%llu\n",&t);
            for(i=1;i<t;i++)
            {
                if((i%3==0)&&(i%5==0))
                 count += i;
                else if((i%3==0)||(i%5==0))
                 temp += i;
            }
            tot =  temp + count;
            printf("%llu\n",tot); 
        }
    
    return 0;
}