/***

   * Author : SUARABH UPADHAYAY
   * E-mail : upadhyaysaurabh5960@gmail.com
   
***/


#include<bits/stdc++.h>
using namespace std;
int main(){
   
   cout<<"Enter number of elements in an array : ";


   // Declaring and aking length of array as input 

   int n;
   cin>>n;

   cout<<"\nNow Enter Array elements on by one : ";

  // Declaring and aking array as input 

   int arr[n];

   for(int i=0;i<n;i++)
      cin>>arr[i];

   // Initialising GCD 

   int GCD=arr[0];

   // Taking GCD of array 

   for(int i=1;i<n;i++)
      GCD=__gcd(arr[i],GCD);

   // Printing GCD of array 

   cout<<"\nThe GCD of given array is : "<<GCD;
}