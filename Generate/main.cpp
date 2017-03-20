#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    for(long long int i = 10 ; i < 1000 ; i *= 10)
    {
        for(long long int j = 0 ; j < i ; j++)
        {
            cout<<rand()<<' ';
        }
        cout<<endl;
    }
    return 0;
}
