#include <bits/stdc++.h>

using namespace std;
long long const n = 10000000;
bool isPrime[n];

int Sieve() {

for (long long i =2; i <= n; i++) {
    isPrime[i] = true;
}

for (long long i =2; i <= n/2; i++) {
    if (isPrime[i] == true) {
        for (long long j = i*2; j <= n; j+=i ) {
            isPrime[j] = false;
        }
    }
}
}

int main() {
int count = 0;

Sieve();


for (int i =2 ; i <= n; i++) {
    if (isPrime[i] == true) {
        count++;
    }
    if (count == 10001 ) {
        cout << i;
        break;
    }
}
}
