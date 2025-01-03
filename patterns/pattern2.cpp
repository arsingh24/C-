#include<bits/stdc++.h>
using namespace std;

int main(){
    
// // // pattern19
// int n ;
// cout<<"n= \n";
// cin>>n;
// int i = 1;
// while(i<=n){
//     // for space
//     int space =1;
//     while(space<=i-1){
//         cout<<" ";
//         space++;
//     }
//     int j =1;
//     while(j<=n-i+1){
//         cout<<j+i-1;
//         j++;
//     }
//     i++;
//     cout<<endl;
// }


// // pattern20
// int n;
// cout<<"n= \n";
// cin>>n;
// int i =1;
// int count =1;
// while(i<=n){
//     int j =1;
//     int k =1;
//     while(k<=n-i){
//         cout<<" ";
//         k++;
//     }
//     while(j<=i){
//         cout<<count;
//         j++;
//     count++;
//     }
//     cout<<endl;
//     i++;

// }



// int n;
// cout<<"n =  \n";
// cin>>n;
// int i=1;
// while(i<=n){
//     // space
//     int space =1;
//     while(space<=n-i){
//         cout<<" ";
//         space++;
//     }
//     // 1st pattern
//     int j=1;
//     while(j<=i){
//         cout<<j;
//         j++;
//     }
//     // second pattern
//     int k =1;
//     int start = i-1;
//     while(k<=i-1){
//         cout<<start;
//         k++;
//         start--;
//     }

//     cout<<endl;
//     i++;
// }


// dabbang pattern codehelp

int n ,i =1;
cout<<"n = \n";
cin>>n;
while (i<=n){
    // 12345
    int j=1;
    while(j<=n-i+1){
        cout<<j;
        j++;
    }

    // star
    int star = 1;
    while(star<=2*(i-1)){
        cout<<"* ";
        star++;
    }

    // 54321
    int rev =1;
    int start = n;
    while(rev<=n-i+1){
        cout<<start;
        start--;
        rev++;
    }
    i++;
    cout<<endl;
}
}