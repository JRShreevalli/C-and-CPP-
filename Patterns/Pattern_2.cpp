Pattern 2 :

INCREASING TRIANGLE PATTERN 

Output :  4
*
* *
* * *
* * * *
 
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
            cout << "*" << " " ;
        }
        cout << endl ;
    }
    return 0;
}
