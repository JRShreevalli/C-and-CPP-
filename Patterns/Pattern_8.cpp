Patter 8 :

Output : 5

          *
        * * *
      * * * * *
    * * * * * * *
  * * * * * * * * *
    * * * * * * *
      * * * * *
        * * *
          *
#include <iostream>
using namespace std;

int main()
{
    int row , col , n ;
    cin >> n ;
   
    for ( row = 1 ; row < n ; row++ )
    {
        for ( col = row ; col <= n ; col++ )
        {
            cout <<  "  " ;
        }
        for ( col = 1 ; col < row ; col++ )
        {
            cout  << "*" << " " ;
        }
        for ( col = 1 ; col <= row ; col++ )
        {
            cout  << "*" << " " ;
        }
        cout << endl ;
    }
   
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
