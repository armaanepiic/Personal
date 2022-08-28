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
#define     out(v)          for(auto value : v){cout<<value<<" ";}cout<<endl;
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
    // ------- iterator of a vector--------

    // int n;cin >>n;
    // vector<int>v;for (int i = 0; i < n; ++i)
    // {
    //     int x;cin >> x;
    //     v.pb(x);
    // }
    // vector<int> :: iterator it = v.begin();
    // for (it = v.begin() ; it != v.end() ; ++it)
    // {
    //     cout << (*it) << " ";
    // }


    // ------- iterator of a vector of pair--------

    // vector<pair<int, int> > p;

    // p = {{1,2} , {2,3} , {3,4}};
    // vector<pair<int,int>> :: iterator it;
    // for(it = p.begin(); it != p.end() ; ++it)
    // {
    //     // cout << (*it).ff << " " << (*it).ss << endl;

    //     cout << (it->first) << " " << (it->second) << endl; 
    // }

    // -------- range based for loop----------

    // int n;
    // cin>>n;
    // vector<int>v;
    // for (int i = 0; i < n; ++i)
    // {
    //     int x;cin>>x;
    //     v.pb(x);
    // }
    // for(int &value : v)value++;
    // by reference changing the actual value of the vector

    // for(int value : v)// copying the actual value
    //     cout << value << " ";


    // range base for loop for a vector of pair

    // vector<pair<int,int>>v;
    // int n;
    // cin>>n;
    // for (int i = 0; i < n; ++i)
    // {
    //     int x , y;
    //     cin >> x >> y;
    //     v.pb({x,y});
    // }
    // for(pair<int,int> value : v)
    //     cout << value.ff << " " << value.ss << endl;

    // ----------- auto keyword ----------

    // auto a = 156.4564;
    // cout << a ;

    // int n;cin>>n;
    // vector<int>v;
    // for (int i = 0; i < n; ++i)
    // {
    //     int x;cin>>x;
    //     v.pb(x);
    // }
    // // for(auto it = v.begin() ; it != v.end() ; it++)
    // //     cout << (*it) << " ";
    // for(auto value : v)
    //     cout << value << " ";

    // int n;
    // cin >> n;
    // vector<pair<int,int>>v;
    // for (int i = 0; i < n; ++i)
    // {
    //     int x,y;
    //     cin >> x >> y;
    //     v.pb({x,y});
    // }
    // for(auto value : v)
    //     cout << value.ff << " " << value.ss << endl;

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

