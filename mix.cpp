/*Given two arrays of integers A and B of sizes m and n, respectively. Write a function
named MIX(), which will produce a third array named C, such that the following
sequence is followed.
• All even numbers of A from left to right are copied into C from left to right.
• All odd numbers of A from left to right are copied into C from right to left
• All even numbers of B from left to right are copied into C from left to right.
• All odd numbers of B from left to right are copied into C from right to left.
A, B and C are passed as arguments to MIX( ).
e.g. A is {3, 2, 1, 7, 6, 3} and B is {9, 3, 5, 6, 2, 8, 10},
the resultant array C is {2, 6, 6, 2, 8, 10, 5, 3, 9, 3, 7, 1, 3}.
*/

#include<iostream>
using namespace std;
int main ()
{ cout<<"[www.moznum.blogspot.com]"<<endl<<endl; 



 int soa,sob,soc,a,b;   // Here "soa", "sob" & "soc" are the size of array.
 cout<< "Please Enter the Length Of array A: ";
 cin>>soa;
 cout<<endl;
 cout<< "Please Enter the Length Of array B: ";
 cin>>sob;
 int A[soa];     //Creating Array of the size of A.
 int B[sob];  //Creating Array of the size of B.
 soc=soa+sob; //Creating Array By Adding both size of A & B.
 int C[soc];
 cout<<endl<< "Please Enter the values in array A: ";
 cout<<endl;
 for(int i=1;i<=soa;i++)
  {
  cin>>A[i];    // Taking input in array A.
  
     }

 cout<<endl;
 cout<< "Please Enter the values in array B: ";
 cout<<endl;
 for(int i=1;i<=sob;i++)
  {
  cin>>B[i];   // Taking input in array B.

     }
  cout<<endl;
  
  
  a=1;       //here "a" is use to store even values in array C from left to right ,starting from first index of array C.
  b=soc;  //here "b" is use to store odd values in array C from right to left ,starting from last index of array C.
  cout<<"Now the array C is= "<<endl;
 for(int i=1;i<=soa;i++)
  {
        if(A[i]%2==0)
         {
          C[a]=A[i];
         a++;
         }
             else
             {
              C[b]=A[i];
              b--;
             }
     }
   
for(int i=1;i<=sob;i++)  // This loop is started right after where the last loop done its work.
  {
        if(B[i]%2==0)
         {
          C[a]=B[i];
         a++;
         }
             else
             {
              C[b]=B[i];
              b--;
             }
     }

for(int i=1;i<=soc;i++)  // This loop is for printing.
  {
  cout<<C[i]<<endl;

     }
}