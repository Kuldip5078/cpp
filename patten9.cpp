#include <iostream>
using namespace std;
int main()
{
    int i, j, k=11 ;

    for (i = 1; i <= 10; ++i)
    {
        for (j = 1; j <= 5; j++, k++)
        {
            if(i%2!=0)
            {
            cout << "\t"<<k;
            }
        }
        cout << "\n";
    }
}