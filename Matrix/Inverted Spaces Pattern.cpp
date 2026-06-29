#include <iostream>
using namespace std;

int main() {
    int a;
    cout<<"enter";
    cin>>a;
    for(int i=1;i<=a-1;i++){
        for(int j=a-1;j>=i;j--){
            cout<<"  ";
        }
    }
    return 0;
}
