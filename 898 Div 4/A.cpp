// NGUYEN QUANG HUY
// STUDENT ID: 523H0140
// CLASS: 23H50301
// FACULTY: INFORMATION TECHNOLOGY
// MAJOR: COMPUTER SCIENCE
// TON DUC THANG UNIVERSIRY

#include <bits/stdc++.h>
using namespace std;
#define st first
#define nd second
#define pb push_back
#define pf push_front
#define _pb pop_back
#define _pf pop_front
#define lb lower_bound
#define ub upper_bound
#define ll long long
#define lli long long int
#define ull unsigned long long
#define ldb long double
#define db double
#define str string
#define gcd __gcd
#define lcm(a, b) (a) / gcd((a), (b)) * (b)
#define oo (int)2e9 + 1

// abc YES
// acb YES
// bac YES
// bca NO
// cab NO
// cba YES

bool check(string s)
{
	if(s == "abc" || s == "acb" || s == "bac" || s == "cba") return true;
	else return false;
}

signed main() 
{
    //ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
	
	int test_case;
	cin >> test_case;
	string s;

	for(int i = 0; i < test_case; i++)
	{
		cin >> s;
		if(check(s)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
    return 0;
}
