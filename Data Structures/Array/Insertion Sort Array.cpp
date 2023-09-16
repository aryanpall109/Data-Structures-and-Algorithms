#include<iostream>
using namespace std;

void insertionsort( int *a , int n)
{
    int i, key, j;
    for( i=1; i<n; i++)
    {
       key = a[i];
       j=i-1;
       while(j>=0 && a[j]>key )
       {
           a[j+1]= a[j];
           j= j-1 ;
       }
       a[j+1] = key;
    }
}
int main()
{
    int n;
    //cout<<"Array size";
    //cin>>n;
    //int arr[n];
    int arr[]={1, 100, 0, -12, 45, -17, 7, 19, -2, 23, 6};
    n = sizeof(arr)/sizeof(int);
    insertionsort( arr, n );
     for(int i=0; i<n; i++)
    {
       cout<<arr[i];
       cout<< "  ";
    }
    
    return 0;
}