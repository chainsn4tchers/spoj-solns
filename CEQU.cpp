/*
  https://www.spoj.com/problems/CEQU/
*/
#include <bits/stdc++.h>
using namespace std;

#define vin(v) for (auto& x : v) cin >> x
#define pb(x) push_back(x);
#define mp(x, y) make_pair(x, y);
#define sz(x) (int)x.size()
#define log(x) cout << x << '\n'

typedef unsigned long long ull;
typedef long long           ll;
typedef double              dd;

const int MOD = 1000000007;
// const int MOD = 998244353;

ll gcd(ll a, ll b)
{
	if (!a || !b) return a | b;
	if (a == b) return a;
	while (b) {
		a %= b;
		swap(a, b);
	}
	return a;
}

bool find_soln(const ll c, const ll g)
{
	if (c % g) return false;
	return true;
}

void solve(int i)
{
	ll a, b, c;
	cin >> a >> b >> c;
	ll d = gcd(a, b);
	if (find_soln(c, d)) cout << "Case " << i << ": Yes\n";
	else cout << "Case " << i << ": No\n";
}

void tc()
{
	int t; cin >> t;
	int i = 1;
	while (t--) solve(i++);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	tc();

	return 0;
}
