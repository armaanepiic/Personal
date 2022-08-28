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

void printVec(vector<int>v)
{
    cout << "size = " << v.size() << endl;
    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i] << " ";
    } cout << endl << endl;
}

void practice()
{
    // ------- vector of vectors-------
    int N;
    cin >> N;
    vector< vector<int> >v;
    for (int i = 0; i < N; ++i)
    {
        int n;cin>>n;
        vector<int>temp;
        for (int i = 0; i < n; ++i)
        {
            int x;cin>>x;
            temp.pb(x);
        }
        v.pb(temp);
    }
    for (int i = 0; i < N; ++i)
    {
        printVec(v[i]);
    }
    // pushing another vector to v
    vi p;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int x;cin>>x;
        p.pb(x);
    }
    v.pb(p);
    for (int i = 0; i < v.size(); ++i)
    {
        printVec(v[i]);
    }
    // after pop_back()
    v.pop_back();
    for (int i = 0; i < v.size(); ++i)
    {
        printVec(v[i]);
    }
}




int main()
{
#ifndef ONLINE_JUDGE
    freopen("F:/io/input.txt", "r", stdin);
    freopen("F:/io/output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    practice();



    return 0;
}
