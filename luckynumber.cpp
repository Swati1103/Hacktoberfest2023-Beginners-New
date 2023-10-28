#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    bool isLucky(int n) {
        // code here
        for(int i=2;i<=n;i++){
            if(n%i==0)
            return false;
            
            n=n-n/i;
        }
        return true;
    }
};

signed main(){

int T;
cin>>T;

while(T--){
int n;
cin>>n;

Solution obj;

if(obj.isLucky(n)) 
cout<<"1\n";
else
cout<<"0\n";
}
}
