#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int e = 0;
        bool flag = true;

        for (int i = 0; i < n; i++) {
            if (s[i] == '.') {
                e++;
            }

            if (i > 0 && i < n - 1) {
                if (s[i - 1] == '.' && s[i] == '.' && s[i + 1] == '.') {
                    cout << 2 << endl;
                    flag = false;
                    break;
                }
            }
        }

        if (flag) {
            cout << e << endl;
        }
    }

    return 0;
}
