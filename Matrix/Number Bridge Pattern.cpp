#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        int a = 1;

        for(int j = 1; j <= i; j++) {
            cout << a;
            a = a + 1;
        }

        for(int j = 1; j <= 2 * n- 2*i; j++) {   
            cout << " ";
        }

        for(int j = 1; j <= i; j++) {
            a-=1;
            cout << a;
        }

        cout << endl;
    }

    return 0;
}
