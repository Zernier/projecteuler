#include<iostream> 
 
using namespace std; 
// sum of digits of 2^1000
int main() 
{ 
	int array[500]; 
	int sum =0; 
	array[0]=1; 
	for(int j=1;j<500;j++) 
		array[j]=0; 
	for(int i=1;i<1001;i++) 
	{ 
		array[0]=2*array[0]; 
		for(int k=1;k<500;k++) 
			array[k]=2*array[k] + array[k-1]/10; /*carry the digit over and over and spill over the second digit
            it multiplies itself, and takes the first digit from the previous one and inputs it into itself */
		for(int j=0;j<500;j++) 
            array[j]=array[j]%10; // converste evrything into single digits
	} // fair warning, when visualising the array, the entire thing is reversed
	for(int i=0;i<500;i++) 
	sum = sum + array[i]; 
	cout<<sum; 
} 
