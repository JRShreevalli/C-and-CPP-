Pattern 3 : 

DECREASING TRIANGLE PATTERN 

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
        for ( col = row ; col <= n ; col++ )
        {
            cout << "*" << " " ;
        }
        cout << endl ;
    }
    return 0;
}
