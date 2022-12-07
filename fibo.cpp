#include <bits/stdc++.h>
using namespace std;

long long fib(long long n) {
if(n == 1) { return 1;}
if(n == 0) { return 0;}
return (fib(n-2) + fib(n-1) ); // since everything begins with a base of 1, or 0, and summing it from there, with fib(7) and fib(6),e.g. the additions will combine to add fib (8)
}

int main() {
int sum = 0;
  for (int i = 1; i < 100; i++) {
    if (fib(i) % 2 == 0) {
        sum += fib(i);
    }
    if (fib(i) >= 4000000) {
        break;
    }
  }

cout << sum;
}
