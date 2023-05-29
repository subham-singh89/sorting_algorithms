#include <bits/stdc++.h>
using namespace std;
void insertionSort(vector <int>  ar) {
    int n = ar.size();
    if(n==0)
        return;
    if(n==1)
        cout<<ar[n-1]<<endl;
    int curr = ar[n-1];
    int i=n-2;
    while(i>=0){
        if(ar[i]>=curr){
            ar[i+1]=ar[i];
        }
        else{
            ar[i+1]=curr;
            i=-1;
        }
        for(int j=0;j<n;j++)
            cout<<ar[j];
        cout<<endl;
        if(i==0){
            ar[i]=curr;
            for(int j=0;j<n;j++)
                cout<<ar[j];
            cout<<endl;
        }
        i--;
    }

}


int main() {
   vector <int>  ar;
   int ar_size;
cin >> ar_size;
for(int i=0; i<ar_size; i++) {
   int ar_tmp;
   cin >> ar_tmp;
   ar.push_back(ar_tmp); 
}

insertionSort(ar);
   
   return 0;
}
