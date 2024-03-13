#include <iostream>
#include <cmath>

using namespace std;

int k=0;
int d=0;
int n=0;
int sk=0;


int main()
{
    cin >> n;
    for (d=1;d<=sqrt(n);++d)
    {
        if (n%d==0)
        {
            if (d%2==0)
            {
                sk+=d;
            }
            if (d != n/d)
                {
                if ((n/d)%2==0)
                {
                    sk+=n/d;
                }
            }
        }
    }
    cout << sk << "\n";


    return 0;
}
