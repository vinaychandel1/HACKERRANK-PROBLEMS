#include <bits/stdc++.h>

using namespace std;


int main()
{   int n,k;
    string s;
    cin >> n >> s >> k;
    k=k%26;
    string ss;
    unsigned char en;
    for(char c:s){
        if(isalpha(c)==0)
        cout<<c;
        else {
        en=c+k;
        if(isupper(c)&&en>90)
        en=en-26;
        else if(islower(c)&& en>122)
        en=en-26;
        cout<<en;
        }
    }
    
    return 0;
}
