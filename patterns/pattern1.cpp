#include<bits/stdc++.h>

using namespace std;

int main(){
    // int num;
    // cout<<"enter num";
    // cin>>num;

    // int i = 1;
    // int sum = 0;

    // while(i<=num){
    //     sum=sum+i;
    //     i++;
    // }
    // cout<<sum;

    // even no sum

    // int num;
    
    // cout<<"enter num\n";
    // cin>>num;

    // // int i =1;
    // int sum =0;

    // while(i<=num){
    //     if (i%2==0){
    //         sum+=i;
    //     }
    //     i++;
    // }
    // cout<<sum;

    // int i =2;
    // while (i<num)
    // {
    //     if(num%i==0){
    //         cout<<"not prime";
    //     }
    //     else{
    //         cout<<"prime";
    //     }
    //     cout<<"\n";
    //     i++;
    // }
    
// =============Patterns=====================================

    // patterns1
    // int n;
    // cout<<"enter n = \n";
    // cin>>n;
    // int i = 1;
    // while(i<=n){
    //     int j =1;
    //     while(j<=n){
    //         cout<<"*";
    //         j++;
    //     }
    //     cout<<"\n";
    //     i++;
    // }


    // int n;
    // cout<<"enter n = \n";
    // cin>>n;
    // int i = 1;
    // while(i<=n){
    //     int j =1;
    //     while(j<=n){
    //         cout<<i;
    //         j++;
    //     }
    //     cout<<"\n";
    //     i++;
    // }

    // pattern2

    // int n;
    // cin>>n;
    // int count =1;
    // int i = 1;
    // while(i<=n){
    //     int j = 1;
    //     while(j<=n){
    //         cout<<j;
    //         j++;   
    //     }
    //     i++;
    //     cout<<"\n";
    // }


    // // pattern3
    // int n;
    // cin>>n;
    // int count =1;
    // int i = 1;
    // while(i<=n){
    //     int j = 1;
    //     while(j<=n){
    //         cout<<count;
    //         j++;
    //         count++;
    //     }
    //     i++;
    //     cout<<"\n";
    // }

// pattern4
    // int n;
    // cout<<"n ";
    // cin>>n;
    // int i= 1;
    // while(i<=n){
    //     int j = 1;
    //     while(j<=i){
    //         cout<<"*";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

// pattern5
    // int i = 1;
    // int n;
    // cout<<"n= ";
    // cin>>n;
    // int count =1;
    // while(i<=n){
    //     int j = 1;
    //     while(j<=i){
    //         cout<<count;
    //         j++;
    //     }
    //     count++;
    //     i++;
    //     cout<<endl;
    // }

// pattern6
    // int i = 1;
    // int n;
    // cout<<"n= ";
    // cin>>n;
    // int count =1;
    // while(i<=n){
    //     int j = 1;
    //     while(j<=i){
    //         cout<<count;
    //         j++;
    //     count++;
    //     }
    //     i++;
    //     cout<<endl;
    // }

// pattern7
    // int i = 1;
    // int n;
    // cout<<"n= ";
    // cin>>n;
    // int count =1;
    // while(i<=n){
    //     int j = 1;
    //     while(j<=i){
    //     cout<<i+j-1;
    //     j++;
    //     }
    //     i++;
    //     cout<<endl;
    // }

// pattern8
    // int i = 1;
    // int n;
    // cout<<"n= ";
    // cin>>n;
    // while(i<=n){
    // int count = i;
    //     int j = 1;
    //     while(j<=i){
    //     cout<<count;
    //     count--;
    //     j++;
    //     }
    //     i++;
    //     cout<<endl;
    // }
    // OR
    // int i = 1;
    // int n;
    // cout<<"n= ";
    // cin>>n;
    // int count =1;
    // while(i<=n){
    //     int j = 1;
    //     while(j<=i){
    //     cout<<i-j+1;
    //     j++;
    //     }
    //     i++;
    //     cout<<endl;
    // }


// pattern9
//   int i = 1;
//     int n;
//     cout<<"n= ";
//     cin>>n;
//     while(i<=n){
//         int j = 1;
//         while(j<=n){
//             char ch ='A'+i-1;
//             cout<<ch;
//             j++;
//         }
//         i++;
//         cout<<endl;
//     }

// pattern 10
// int n ;
// cout<<"n= ";
// cin>>n;
// int i = 1;
// int count =0;
// while(i<=n){
//     int j = 1;
//     while(j<=n){
//     char ch = 'A'+count;
//         cout<<ch;
//         j++;
//         count++;
//         ch++;
//     }
//     cout<<endl;
//     i++;
// }
// // OR
// int n ;
// cout<<"n= ";
// cin>>n;
// int i = 1;
// char ch ='A';
// while(i<=n){
//     int j = 1;
//     while(j<=n){
//         cout<<ch;
//         j++;
       
//         ch++;
//     }
//     cout<<endl;
//     i++;
// }

// pattern 11

// int n;
// cin>>n;
// int i=1;
// while(i<=n){
//     int j =1;
//     while(j<=n){
//         cout<<j+i-1;
//         j++;

//     }
//     cout<<endl;
//     i++;
// }
// OR for abc
// int n;
// cin>>n;
// int i=1;

// while(i<=n){
//     int j =1;
//     while(j<=n){
//     char ch ='A'+j+i-1-1;
//         cout<<ch;
//         j++;

//     }
//     cout<<endl;
//     i++;
// }


// Pattern12
// int n;
// cin>>n;
// int i=1;
// while(i<=n){
//     int j =1;
//     while(j<=i){
//     char ch='A'+i-1;
//         cout<<ch;
//         j++;

//     }
//     cout<<endl;
//     i++;
// }


// Pattern13
// int n;
// cout<<"n= \n";
// cin>>n;
// int i=1;
// char ch='A';
// while(i<=n){
//     int j =1;
//     while(j<=i){
//         cout<<ch;
//         j++;
//         ch++;
//     }
//     cout<<endl;
//     i++;
// }

// pattern14
// int n;
// cout<<"n= \n";
// cin>>n;
// int i=1;
// while(i<=n){
//     int j =1;
//     while(j<=i){
//      char ch ='A'+i+j-2;
//         cout<<ch;
//         j++;
//     }
//     cout<<endl;
//     i++;
// }

// // pattern 15
// int n;
// cout<<"n= \n";
// cin>>n;
// int i=1;
// while(i<=n){
//     int j =1;
//     while(j<=i){
//     char ch ='A'+n-i+j-1;
//         cout<<ch;
//         j++;
//     }
//     cout<<endl;
//     i++;
// }



// // pattern 15
// int n;
// cout<<"n= \n";
// cin>>n;
// int i=1;
// while(i<=n){
//     int j =1;
//     // for space
//       int k =1;
//     while(k<=n-i){
//         cout<<" ";
//         k++;
//       }
//     //   for star
//     while(j<=i){
//       cout<<"*";
//         j++;
//     }
//     cout<<endl;
//     i++;
// }

// // pattern 16
// int n;
// cout<<"n= \n";
// cin>>n;
// int i=1;
// int count =n;
// while(i<=n){
//     int j =1;
//     //   for star
//     while(j<=count){
//       cout<<"*";
//         j++;
//     }
//     count--;
//     cout<<endl;
//     i++;
// }

//OR
// int n;
// cout<<"n= \n";
// cin>>n;
// int i=1;
// while(i<=n){
//     int j =1;
//     //   for star
//     while(j<=n-i+1){
//       cout<<"*";
//         j++;
//     }
//     cout<<endl;
//     i++;
// }

// pattern16
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
//         cout<<"*";
//         j++;
//     }
//     i++;
//     cout<<endl;
// }

// // pattern17
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
//         cout<<i;
//         j++;
//     }
//     i++;
//     cout<<endl;
// }

// pattern18
// int n ;
// cout<<"n= \n";
// cin>>n;
// int i = 1;
// while(i<=n){
//     // for space
//     int space =1;
//     while(space<=n-i){
//         cout<<" ";
//         space++;
//     }
//     int j =1;
//     while(j<=i){
//         cout<<i;
//         j++;
//     }
//     i++;
//     cout<<endl;
// }




}