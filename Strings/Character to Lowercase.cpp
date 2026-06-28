#include <iostream>
using namespace std;

// Function to convert uppercase character to lowercase
void lowercase(char a){
    char b;
    if(a>='A'&&a<='Z'){
        b=a-'A'+'a';
        cout<<b;
    }
    else {
        cout<<"character is already in the lowercase";
    }
}

int main() {
    lowercase('D');
    return 0;
}
