#include<iostream>
#include<math.h>
#include<cstdio>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long n;
        scanf("%ld", &n);
        //printf("F'(%d)=%d\n", n, n*(n+1)*(n+2)/6);
        //printf("G(%d)=%.8f\n", n, sqrt(float(4*n*(n+1)*(n+2)/3-4*(n-1)*n*(n+1)/3+1))/n);
        printf("%.8f\n", sqrt(4.0*double(n+1)*double(n+2)/3/n-4.0*double(n-1)*double(n+1)/3/n+1.0/n/n));
    }
    return 0;
}
