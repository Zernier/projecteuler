#include <bits/stdc++.h>

using namespace std;

long long f[1000], len;

void primeFact(long long n) {
    if(n == 1) {
        len++;
        f[len] = 2;
        return;
    }
    int d = 2;
    while(1LL * d * d <= n && n > 1) {
        int k = 0;
        while(n % d == 0) {
            k++;
            n /= d;
        }
        if(k > 0) {
            len++;
            f[len] = d;

        }
        d++;
    }
    if(n > 1) {
        len++;
        f[len] = n;
    }
}

int main()
{
    primeFact(600851475143);


cout <<f[len];
    return 0;
}
