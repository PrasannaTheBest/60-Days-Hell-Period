#include<iostream>
using namespace std;
void checkevenodd(int n){
    if(n%2==0){
        cout<<"number is even"<<endl;
    }
    else{
        cout<<"number is odd"<<endl;
    }
}

// Function to check if a number is positive or negative
void numcheck(int n){
    if(n>0){
        cout<<"number is +ive"<<endl;
    }
    else{
        cout<<"number is -ive"<<endl;
    }
}

// Function to print numbers from n down to 1
void oneton(int n){
    for(int i=n;i>=1;i--){
        cout<<i<<" ";
    }
}

int main(){
    int b;
    cout<<"enter the number to perform";
    cin>>b;
    checkevenodd(b);
    numcheck(b);
    oneton(b);
    return 0;
}
