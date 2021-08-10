/*Write a function int ALTERSUM( int B[][5] , int N, int M) in c++ to find and 
return the sum of elements from all alternate elements of a two-dimensional array starting from B[0][0].*/

#include <iostream.h>
#include<conio.h>

#define x 10
#define y 5

int ALTERSUM(int B[][5], int M, int N)
{
int flag = 0, sum = 0;
for(int i = 0 ; i < M ; i++)
for(int j = 0 ; j < N ; j++)
{
if(flag == 0)
{ 
   sum = sum + B[i][j];
   flag = 1;
}
else
   flag = 0;
}

return sum;
}

void main()
{
int arr[x][y], r, c, i , j;

cout << "\n How many rows(<10)? " ;
cin >> r;

cout << "\n How many cols(< 5)?";
cin >> c;
/* Input elements */
for( i = 0 ; i < r ; i++)
for(j = 0 ; j< c ; j++)
{
cout << "\n Enter elements :";
cin >> arr[i][j];
}

/* display matrix */
for(i = 0; i < r  ; i++)
for(j = 0; j < c ; j ++)
    cout << arr[i][j] << " ";
cout<< endl;

int sum = ALTERSUM(arr, r, c);
cout << "\n The Sum of alternate elements = " << sum;

getch();
}
