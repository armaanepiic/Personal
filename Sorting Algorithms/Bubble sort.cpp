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
    // Bubble sort algorithm

    // Time complexity
    // best case O(n)
    // worst case O(n^2)

    int n , i;cin>>n;
    vector<int>v;
    for (int i = 0; i < n; i++)
    {
        int x;cin>>x;
        v.push_back(x);
    }
    bool flag = 0;
    for (i = 0 ; i < n-1 ; i++)
    {
        for (int j = 0; j < n-i-1 ; j++)
        {
            if(v[j] > v[j+1]){
                swap(v[j] , v[j+1]);
                flag = 1;
            }
        }
        if(flag == 0)
            break;
    }
    cout << "i = " << i << endl;
    out(v);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    practice();


    return 0;
}
