#include <bits/stdc++.h>

using namespace std;


int main() {
    int n;
    int k;
    int sum=0,diff=0;
    cin >>n;
    cin>>k;
    int ar[n];
    for(int i = 0; i < n; i++){
       cin >> ar[i];
    }
    for(int j=0;j<n;j++)
        {
        sum+=ar[j];
    }
    
    int b;
    cin >> b;
    sum=sum-ar[k];
    sum=sum/2;
    diff=b-sum;
    if(diff==0)
        {
      cout<<"Bon Appetit";
    }
    else
        {
        cout<<diff;
    }
    
    return 0;
}
