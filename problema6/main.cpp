#include <iostream>
#include <cmath>

using namespace std;

int i=0;

int k=0;
int d=0;
int a=0;
int b=0;
int n=0;
int sk=0;


int main()
{
    cin >> a;
    cin >> b;
    for (i=a;i<b;++i)
    {
        k = 0;
        for (d=1;d<=sqrt(i);++d)
        {
            if (i%d==0)
            {
                if (i%2==0)
                {
                    ++k;
                }
                if (i != i/d && (i/d)%2==0)
                {
                    ++k;

                }
            }
        }
        cout << i << " are " << k << " divizori pari" << "\n";

    }

    //1,2,4,5,10,20
    return 0;
}
