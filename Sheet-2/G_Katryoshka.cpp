#include <iostream>
using namespace std;

typedef long long ll;

ll n, m, k;

bool can_make(ll x) {
    // Try to make x dolls
    for (ll two_eye = 0; two_eye <= min(x, n / 2); two_eye++) {
        ll remaining_eyes = n - 2 * two_eye;
        ll remaining_dolls = x - two_eye;
        ll remaining_mouths = m;

        if (remaining_dolls <= remaining_eyes + remaining_mouths) {
            return true;
        }
    }
    return false;
}

int main() {
    cin >> n >> m >> k;

    ll low = 0, high = k, ans = 0;
    while (low <= high) {
        ll mid = (low + high) / 2;
        if (can_make(mid)) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    cout << ans << "\n";
    return 0;
}
