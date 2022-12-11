#include <bits/stdc++.h>

using namespace std;

// sum of digits for 100!

int main() {

int array[500]; 
	int sum =0; 
	array[0]=1; 
	for(int j=1;j<500;j++) 
		array[j]=0; 
	for(int i=1;i<101;i++) // 100 occurrences of multiplcation
	{ 
		array[0]*= i; 
		for(int k=1;k<500;k++) 
			array[k]=array[k]*i + array[k-1]/10; /*carry the digit over and over and spill over the second digit
            it multiplies itself, and takes the first digit from the previous one and inputs it into itself */
            /* for each digit, multiply it by the current number in the factorial line, transferring the 
            second digit to the position, until the entire number is fully out in array form */
		for(int j=0;j<500;j++) 
            array[j]=array[j]%10; // converste evrything into single digits
	} // fair warning, when visualising the array, the entire thing is reversed
	for(int i=0;i<500;i++) 
	sum = sum + array[i]; 
	cout<<sum; 


}
