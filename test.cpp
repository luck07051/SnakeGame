#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    clock_t t = clock();
    clock_t fram = 0.5 * CLOCKS_PER_SEC;
    while(1)
    {
        if ( clock() - t >= fram )
        {
            t = clock();
            cout << 'f' << endl;
        }
    }
    return 0;
}
