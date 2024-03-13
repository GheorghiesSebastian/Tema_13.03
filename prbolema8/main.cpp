#include <iostream>
#include <cmath>

int a,d,j,n,inz2 = 0;
int inz=9999;


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
               inz2 = inz;
               inz = d;
            }
            if (d != n/d && n/d != 0 && n/d != 1)
            {
                if (n/d <inz)
                {
                inz2 = n/d;
                }
            }
        }
    }

    for (d=1;d<=sqrt(n);++d)
    {
        if (n%d==0)
        {
            if (d <inz && d != 0 && d != 1 && inz2 != inz)
            {
               inz2 = d;
            }
            if (d != n/d && n/d != 0 && n/d != 1)
            {
                if (n/d <inz2 && inz2 != inz)
                {

                inz2 = n/d;
                }
            }
        }
    }
    cout << inz << " " << inz2;
    return 0;
}

//1,3,5,15
