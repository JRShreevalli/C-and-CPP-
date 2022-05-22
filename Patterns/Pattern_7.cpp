Pattern 7 :

Reverse Hill Pattern 
-> Increasing space 
-> Decreasing  star 
-> Decreasing star 

Output :  4 
*  *  *  *  *  *  *
    *  *  *  *  *
      *  *  *
         *

#include <iostream>
using namespace std;

int main()
{
    int row , col , n ;
    cin >> n ;
    for ( row = 1 ; row <= n ; row++ )
    {
        for ( col = 1 ; col <= row ; col++ )
        {
            cout <<  "  " ;
        }
        for ( col = row ; col < n ; col++ )
        {
            cout  << "*" << " " ;
        }
        for ( col = row ; col <= n ; col++ )
        {
            cout  << "*" << " " ;
        }
        cout << endl ;
    }
    return 0;
}
