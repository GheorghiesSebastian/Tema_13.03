#include <iostream>
#include <cmath>

int a,d,j,n = 0;
int inz=99999;


using namespace std;

int main()
{
    cin >> n;
    for (d=1;d<=sqrt(n);++d)
    {
        if (n%d==0)
        {
            if (d <inz && d != 0 && d != 1)
            {
               inz = d;
            }
            if (d != n/d && n/d != 0 && n/d != 1)
            {
                if (n/d <inz)
                {
                inz = n/d;
                }
            }
        }
    }
    cout << inz;
    return 0;
}
