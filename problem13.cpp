// sum of the firtst ten digits of the 100 digit number

#include <bits/stdc++.h>


using namespace std;

int main() {

int number_set[500] = {0};
int sum =  0;
ifstream myFile("eulerproblem13.txt");
string number_line;
int number_line_arr[50];
while(getline(myFile,number_line)) {

for (int i = 0; i < 50; i++) {
number_line_arr[i] = int(number_line[i]) - 48; 
number_set[49-i] += number_line_arr[i];
}

for(int k = 0; k < 500; k++) {
        number_set[k]+= number_set[k-1]/10; }
for(int i = 0; i < 500; i++) {
        number_set[i] = number_set[i]%10; }


}

myFile.close();
int final_ele;
for (int i = 499; i >= 50; i--) {
    if (number_set[i] != 0) {
        final_ele = i;
        break; }
}

for (int j = final_ele; j >= final_ele-9; j--)  {
    cout << number_set[j]; }

}
