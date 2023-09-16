#include<iostream>
using namespace std;

bool sortcheck( int *a, int n)
{
   int temp=0;
   for(int i=0; i<n-1; i++)
   {
     if(a[i]>a[i+1])
     {
         temp=temp+1;
     }
   }
   if(temp==0)
   {
       return false;
   }
   else return true;
}
void bubblesort( int *a , int n)
{
    for( int i=0; sortcheck(a,n) ; i++)
    {
        // instead of sortcheck i<n-1 can also be used
        // also changing j<n-i-1 too
        for(int j=0; j<n-1 ; j++)
        {
            int temp=0;
            if(a[j]>a[j+1])
            {
               temp=a[j];
               a[j]=a[j+1];
               a[j+1]=temp;
            }
        }
    }
}
int main()
{
    int n;
    //cout<<"Array size";
    //cin>>n;
    //int arr[n];
    int arr[]={1, 100, 0, -12, 45, -67, 7, 19, -2, 23, 518, 0};
    n = sizeof(arr)/sizeof(int);
    bubblesort( arr, n );
     for(int i=0; i<n; i++)
    {
       cout<<arr[i];
       cout<< "  ";
    }
    
    return 0;
}