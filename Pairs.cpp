/*https://www.hackerrank.com/challenges/pairs/copy-from/214699770*/

#include<bits/stdc++.h>
const int N=1e5;
int nums[N];
#define MAX 100005
using namespace std;
int main(){
    int n,k;
    unordered_map<int, int>m;
    cin>>n>>k;
    for(int i=0;i<n;i++){
       scanf("%d",&nums[i]);
       m[nums[i]]++;
    }
    int count=0;
    for (int i=0; i<n; i++) {
    int temp=nums[i]-k;
    if(m[temp]==1) count++;
    }
    cout<<count;
}
