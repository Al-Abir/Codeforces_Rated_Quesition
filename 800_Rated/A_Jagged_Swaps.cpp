#include <iostream>
#include <vector>
using namespace std;

bool canSortPermutation(vector<int>& a) {
    int n = a.size();

   for (int i = 1; i < n - 1; ++i) {
        if (a[i-1] < a[i] && a[i] > a[i+1]) {
            swap(a[i], a[i+1]);
        }
    }
 
    for (int i = 1; i < n; ++i) {
        if (a[i-1] > a[i]) return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t; 
    while (t--) {
        int n;
        cin >> n; 
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        if (canSortPermutation(a)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
