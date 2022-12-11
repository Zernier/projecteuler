// sum of all prime numbers below 2 mil

#include <bits/stdc++.h>

using namespace std;

long long const n =2000000;
bool isPrime[n];

void sieve() {
for (int i = 2; i <= n; i++)
    isPrime[i] = true;
for (long long i =2; i <= n/2; i++)
    if (isPrime[i] == true)
        for (int j = i*2 ; j <= n; j+=i) 
            isPrime[j] = false;
}

int main() {
long long sum = 0;

sieve();

for (int i = 2; i <= n; i++) 
    if (isPrime[i] == true)
        sum += i;


cout << sum;
}
