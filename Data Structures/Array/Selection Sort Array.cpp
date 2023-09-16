#include<iostream>
using namespace std;


int maxarr( int *a, int n)
{
    int max=a[0];
    int temp=0;
   for(int i=0; i<n; i++)
   {
       if(max<a[i])
       {
           max=a[i];
           temp=i;
       }
   }
   return temp;
}
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
void selecsort( int *a , int n)
{
    int temp=0;
    int temp2=0;
    int len=n;
    for(int i=0; sortcheck(a, len) ; i++)
    {
        temp=maxarr( a , n);
        temp2= a[n-1];
        a[n-1]=a[temp];
        a[temp]=temp2;
        n=n-1;
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
    selecsort( arr, n );
     for(int i=0; i<n; i++)
    {
       cout<<arr[i];
       cout<< "  ";
    }
    
    return 0;
}