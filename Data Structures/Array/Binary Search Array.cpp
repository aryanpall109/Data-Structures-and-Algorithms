#include <iostream>
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
int binarysearch (int *a, int l,int h, int key)
{
    if(h>=1)
    {
        int mid = l + (h-l)/2;
        if(key== a[mid]){
            return mid;
        }
        if(key > a[mid]){
            return binarysearch (a, mid+1, h, key);
        }
        
        return binarysearch (a, l, mid-1, key);
    }
    return -1;
}
int main()
{
    int n;
    //cout<<"Array size";
    //cin>>n;
    //int arr[n];
    int arr[]={1, 100, 0, -12, 45, -17, 7, 19, -2, 23, 6};
    n = sizeof(arr)/sizeof(int);
    insertionsort(arr,n);
     for(int i=0; i<n; i++)
    {
       cout<<arr[i];
       cout<< "  ";
    }
    int x = binarysearch ( arr,0,n,-12);
    cout<<"\nPosition of -12 in Sorted Array : "<<x+1;
    
    return 0;
}