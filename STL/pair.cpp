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




void printVec(vector<pair<int, int>>v)
{
    cout << "size = " << v.size() << endl;
    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i].ff << " " << v[i].ss << endl;
    }cout << endl;
}

void practice()
{
    // -----pair declaration-----

// pair<int , string> p ;
// p = mp(10 , "arman");
// p = {10 , "nusrat"};
// cout << p.ff << " " << p.ss << endl;

// ------pair copying------

// pair<int , string>p;
// p = mp(20 , "arman");
// pair<int,string>&p1 = p;
// p1.ff = 30;
// cout << p.ff << " " << p.ss << endl;

//------array of pair------

// pair<int , int> p[3];
// for (int i = 0; i < 3; ++i)
// {
//     // int x , y;
//     // cin >> x >> y;
//     // p[i] = mp(x, y);
//     cin >> p[i].ff >> p[i].ss;
// }
// //swap(p[0],p[2]);
// for (int i = 0; i < 3; ++i)
// {
//     cout << p[i].ff << " " << p[i].ss << endl;
// }

//------vector of pair------

    // int n;cin>>n;
    // vector<pair<int, int>>v;
    // printVec(v);

    // for (int i = 0; i < n; ++i)
    // {
    //     int x , y;
    //     cin >> x >> y;
    //     v.pb({x,y});
    // }
    // printVec(v);



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
