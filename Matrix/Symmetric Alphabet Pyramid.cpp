#include <iostream>
using namespace std;

class Solution {
public:
    void printSymmetricAlphabetPyramid(int n) {
        for (int i = 1; i <= n; i++) {
            char a = 'A';

            // Print leading spaces
            for (int j = 1; j <= n - i; j++) {
                cout << " ";
            }

            // Print alphabets
            for (int j = 1; j <= 2 * i - 1; j++) {
                cout << a;

                if (j < i) {
                    a++;
                } else {
                    a--;
                }
            }

            cout << endl;
        }
    }
};

int main() {
    int n;
    cin >> n;

    Solution obj;
    obj.printSymmetricAlphabetPyramid(n);

    return 0;
}
