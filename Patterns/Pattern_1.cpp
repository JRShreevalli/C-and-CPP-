Pattern 1 :

O/P : 3
* * *
* * *
* * *
 
#include <iostream>
using namespace std;

int main()
{
    int row , col , n ;
    cin >> n ;
    for ( row = 1 ; row <= n ; row++ )
    {
        for ( col = 1 ; col <= n ; col++ )
        {
            cout << "*" << " " ;
        }
        cout << endl ;
    }
    return 0;
}
