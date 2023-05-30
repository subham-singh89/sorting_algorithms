#include<iostream>
using namespace std;

void insertion_sort(int n,int arr[])
{
    int key=0, j=0,count=0;
    for(int i=1;i<n;i++)
    {
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j=j-1;
            count++;
        }
        arr[j+1]=key;
    }
    cout<<count<<endl;
}

int main()
{
    int n;
    cin>>n;
    int myarr[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>myarr[i];
    }
    insertion_sort(n,myarr);
    return 0;
}
