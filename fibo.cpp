#include <iostream> 
using namespace std;

int fib(int n) {
if(n == 1) { return 1;}
if(n == 0) { return 0;}
else {return (fib(n-2) + fib(n-1) );} // since everything begins with a base of 1, or 0, and summing it from there, with fib(7) and fib(6),e.g. the additions will combine to add fib (8)
}

int main() {
  cout << fib(4000000);
}
