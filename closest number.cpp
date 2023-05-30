#include <bits/stdc++.h>

using namespace std;

int compare(int x,int y)
{
    return x<y;
}

int main()
{
    vector<int> arr,temp;
    int n,diff,x;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        arr.push_back(x);
    }
    sort(arr.begin(),arr.end(),compare);
    
    diff=arr[1]-arr[0];
    for(int i=2;i<n;i++)
    {
        if(diff>(arr[i]-arr[i-1]))
        {
            diff=arr[i]-arr[i-1];
            temp.clear();
            temp.push_back(arr[i-1]);
            temp.push_back(arr[i]);
        }
        else if(diff==(arr[i]-arr[i-1]))
        {
            temp.push_back(arr[i-1]);
            temp.push_back(arr[i]);
        }
    }
    for(int i=0;i<temp.size();i++)
    {
        cout<<temp[i]<<" ";
    }
    return 0;    
}
