#include <iostream>
using namespace std ;

class Parent
{
    public :
            void prog(int *pt)
                {
                    for(int i=0 ; i<=4 ; i++)
                    {
                        *( pt + i ) =  i * i ;
                    }
                }
};

int main()
{
    Parent ob ;
    int *pt , arr[5] ;
    pt = &arr[0] ;
    ob.prog(pt) ;
    for(int i=0 ; i<5 ; i += 1)
        cout << *(pt + i) << "  " ;
    cout << endl ;
    return 0 ;
}
