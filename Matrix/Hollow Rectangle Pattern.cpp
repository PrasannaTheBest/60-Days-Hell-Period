#include <iostream>
using namespace std;

int main() {
    int n;
    int m;
    cout<<"number of times or size";
    cin>>n;
    cout<<"number 2";
    cin>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(i==1||i==n||j==1||j==m){
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
