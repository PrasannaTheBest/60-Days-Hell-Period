// 🚩 FLAG: NEED TO WATCH / REVIEW AGAIN

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter the n";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }

        char ch = 'A' + (n - i);
        for (int j = 1; j <= i; j++) {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }

    return 0;
}
