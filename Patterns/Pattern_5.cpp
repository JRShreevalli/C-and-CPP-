Pattern  5:

[ Increasing space and decreasing start ]

Output :  4
  * * * *
    * * *
      * *
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
            cout << " " << " " ;
        }
        for ( col = row ; col <= n ; col++ )
        {
            cout  << "*" << " " ;
        }
        cout << endl ;
    }
    return 0;
}
