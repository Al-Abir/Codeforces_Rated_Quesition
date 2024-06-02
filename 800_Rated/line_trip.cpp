#include<iostream>
#include<algorithm> // For std::max
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
 
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
 
        int ans = 0;
    
        for (int i = 0; i < n - 1; i++) {
            int sum = arr[i + 1] - arr[i];
            ans = max(ans, sum);
        }
 
 
        ans = max(ans, arr[0] - 0);
 
   
        int last_destination = k - arr[n - 1];
        ans = max(ans, 2 * last_destination);
 
        cout << ans << endl;
    }
 
    return 0;
}