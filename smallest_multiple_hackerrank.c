#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
   int t;
    scanf("%d\n",&t);
    for(int a=1;a<=t;a++)
    {
        int n;
        scanf("%d",&n);
        int x,y,smallest;
        x = 1;
        y = 1;
        smallest = 0;
        while(x>0)
        {
            y = 1;
            while((x%y == 0)&&(y<=n))
            {
                if(y == n)
                {
                    smallest = x;
                    break;
                }
                y++;
            }
            x++;       
         if(smallest > 0)
         {
             break;
         }
        }
       printf("%d\n",smallest);
        }
    return 0;
}