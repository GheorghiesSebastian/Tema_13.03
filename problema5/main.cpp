#include <iostream>
#include <cmath>

using namespace std;

int k=0;
int d=0;
int n=0;
int sk=0;
double j=0;


int main()
{
    cin >> n;
    for (d=1;d<=sqrt(n);++d)
    {
        if (n%d==0)
        {
            ++k;
            sk+=d;
            if (d != n/d)
            {
                ++k;
                sk+=n/d;
            }
        }
    }
    j = sk/k;
    cout << j;


    return 0;
}
