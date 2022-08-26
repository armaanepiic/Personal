//Bismillahir rahmanir rahim
//Arman Hossain C193033
//Programming is nothing but an addiction.
#include <bits/stdc++.h>
using namespace std;
#define     pb          push_back

#define     sortv       sort(v.begin(), v.end())
#define     rev_sortv   sort(v.begin(), v.end(), greater<int>())

using ll    =   long long int;
using ull   =   unsigned long long;
using vi    =   vector<int>;
using vll   =   vector<ll>;
using vc    =   vector<char>;
using vs    =   vector<string>;

void lets_code()
{
    int n;      // length of the string
    cin >> n;
    string s;
    cin >> s;
    bool flag = false;

    vc v;
    int a = 0 , b = 0 , l = 0 , r = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= n - i; j++)
        {
            int temp = i;
            int k = j;
            while (temp--)
            {
                v.pb(s[k]);
                k++;
            }
            for (int l = 0; l < v.size(); ++l)
            {
                cout << v[l];
            } cout << endl;
            v.clear();
        }

    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    lets_code();

    return 0;
}
