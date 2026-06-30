#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"enter the digit";
    cin>>num;
    int mr=0;
    int sum=0;
    while(num>0){
        sum+=num%10;
        num=num/10;
    }
    while(sum>=10){
        mr=0;
        while(sum>0){
            mr=mr+sum%10;
            sum=sum/10;
        }
        sum=mr;
    }
    cout<<"sum is"<<sum;
    return 0;
}
