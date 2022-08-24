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




void practice()
{

    // Insertion Sort
    // Time Complexity 
    // Best Case O(n)
    // Worst Case O(n^2)

    int n;cin>>n;
    vector<int>v;
    for (int i = 0; i < n ; i++)
    {
        int x;cin>>x;
        v.pb(x);
    }
    for (int i = 1 ; i < n; i++)
    {
        for (int j = i ; j >0 ; j--)
        {
            if(v[j] < v[j-1]){
                swap(v[j] , v[j-1]);
            }
            else
                break;
        }
    }
    out(v);


    
}



int main()
{


    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    practice();


    return 0;
}
