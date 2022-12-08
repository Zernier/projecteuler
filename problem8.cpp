#include <bits/stdc++.h>

using namespace std;


int main() {

ifstream numberfile("eulerproblem8.txt");
string line,number_line = "";
string thirt_str = "";
while(getline(numberfile, line)) {
    number_line += line;
}

numberfile.close();

long long max = 0, i = 0;
long long sum = 1;
int digit_in_line;
for (i = 0; i < 1001-13; i++) {
    thirt_str = number_line.substr(i,13);
    for(int j = 0; j < 13; j++ ) {
        digit_in_line = (int(thirt_str[j]) - 48);
        sum *= digit_in_line;
    }
   /* cout << sum <<" "; */
    if (sum > max) {
        max = sum;
    }
    thirt_str = "";
    sum = 1;
}


cout << max;
}

/* largest product in a series
Find the thirteen adjacent digits in the 1000-digit number that have the greatest product. What is the value of this product? */
