#include<stdio.h>  
 int main()    
    {    
        int x,y;
        scanf("%d %d",&x,&y);
        printf("x=%d\ny=%d",x,y);
        
        x=x+y;
        y=x-y;    
        x=x-y;    
        
        printf("\nAfter swap x=%d y=%d",x,y);    
    return 0;  
    } 

/*    Output :
		12  34                                                                                                                            		x=12                                                                                                                            
		y=34                                                                                                                            	
		After swap x=34 y=12    */                                                                                                        
                      