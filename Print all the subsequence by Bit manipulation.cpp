//Bismillahir rahmanir rahim
//Arman Hossain C193033
//Programming is nothing but an addiction.
#include <bits/stdc++.h>
using namespace std;


using ll    =   long long int;
using ull   =   unsigned long long;
using vi    =   vector<int>;
using vll   =   vector<ll>;
using vc    =   vector<char>;
using vs    =   vector<string>;
using vvi   =   vector<vector<int>>;




#define     pb              push_back
#define     mp              make_pair
#define     ff              first
#define     ss              second
#define     sortv           sort(v.begin(), v.end())
#define     rev_sortv       sort(v.begin(), v.end(), greater<int>())
#define     inv             vi v;for(int i = 0; i < n; ++i){int x;cin >> x; v.pb(x);};
#define     out(v)          for(int i=0;i<v.size();++i){cout<<v[i]<<" ";}cout<<endl;
#define     sz(s)           (s).length()
#define     all(x)          (x).begin(), (x).end()
#define     digits(x)       trunc(log10(x))+1
#define     even(x)         (x)%2
#define     inn             int n;cin>>n;






int main()
{
#ifndef ONLINE_JUDGE
    freopen("F:/io/input.txt", "r", stdin);
    freopen("F:/io/output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);



    // input :
    // 1. Input a string
    // 2. Input a int number n and give numbers

    
    string s;
    cin >> s;
    int len = s.length();
    double range = pow(2 , len);
    for (int i = 0; i < range ; ++i)
    {
        string a = "";
        for (int j = 0; j < len; ++j)
        {
            if(i & (1<<j))
                a += s[j];
        }
        cout << a << endl;
    }

    int n;cin>>n;
    vector<int>v;
    for (int i = 0; i < n; ++i)
    {
        int x;cin>>x;
        v.pb(x);
    }
    for (int i = 0; i < pow(2,n); ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if(i & (1<<j))
                cout << v[j];
        }
        cout << endl;
    }



    return 0;
}
