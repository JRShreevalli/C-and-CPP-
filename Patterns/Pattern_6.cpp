Pattern 6 :  

HILL PATTERN 
-> Decreasing space 
-> Increasing start
-> Increasing star

Output : 3
      *
    * * *
  * * * * * 

#include <iostream>
using namespace std;

int main()
{
    int row , col , n ;
    cin >> n ;
    for ( row = 1 ; row <= n ; row++ )
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
    return 0;
}
