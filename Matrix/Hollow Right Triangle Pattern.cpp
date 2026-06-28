#include <iostream>
using namespace std;

int main() {
    int a;
    cout<<"enter";
    cin>>a;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=i;j++){
            if(j==1||i==a||j==i){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}
