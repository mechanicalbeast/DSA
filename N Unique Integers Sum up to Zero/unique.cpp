/***

   * Author : SUARABH UPADHAYAY
   * E-mail : upadhyaysaurabh5960@gmail.com
   
***/

#include <bits/stdc++.h>
using namespace std;

// Function to print distinct n
// numbers such that their sum is 0
void fun(int N)
{
	for (int i = 1; i <= N / 2; i++) {

		// Print 2 symmetric numbers
		cout << i << ", " << -i << ", ";
	}

	// print a extra 0 if N is odd
	if (N % 2 == 1)
		cout << 0;
}

int main(){
	int n = 10;

	fun(n);
}
