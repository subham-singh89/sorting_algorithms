#include <bits/stdc++.h>

using namespace std;

bool myfun(string x,string y)
{
    if(x.length()!=y.length())
    {
        return (x.length()<y.length());
    }
    else{
        return x<y;
    }
}

int main()
{
    int n;
    cin>>n;
    vector<string> unsorted(n);
    for(int i=0;i<n;i++)
    {
        cin>>unsorted[i];
    }
    sort(unsorted.begin(),unsorted.end(),myfun);
    for(string s: unsorted)
    {
        cout<<s<<endl;
    }
    return 0;
}
