#include <iostream>
using namespace std;

void solve() {
    int T;
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K;

        // Calculate the sum of the first K natural numbers
        long long sum_k = K * (K + 1) / 2;

        if (sum_k > N) {
            cout << "NO" << endl;
        } else {
            // Calculate the minimum length needed with the necessary separations
            // Minimum length required = sum_k + (K - 1)
            long long min_length_required = sum_k + (K - 1);
            
            if (min_length_required <= N) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
