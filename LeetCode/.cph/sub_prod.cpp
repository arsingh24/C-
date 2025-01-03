#include<bits/stdc++.h>

using namespace std;

int main(){
    int n ,prod = 1, sum = 0;
    cin>>n;
    while(n!=0){
    int digits = n%10;
    prod = prod*digits;
    sum = sum+digits;

    n = n/10;

    }

    int ans  = prod - sum ;
    cout<<ans;
}