#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, m;
        cin >> n >> m;
        string a;
        cin >> a;

        int count[7] = {0}; 
        for (char c : a) {
            count[c - 'A']++;
        }

        int min_problems_needed = 0;

        for (int i = 0; i < 7; ++i) {
            int round = m;
            if (count[i] < round) {
                min_problems_needed += round - count[i];
            }
        }

        cout << min_problems_needed << endl;
    }

    return 0;
}
