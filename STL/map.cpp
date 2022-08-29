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

void printMap(map<int,string>m)
{
    cout << "size = " << m.size() << endl; 
    for(auto i : m)cout << i.ff << " " << i.ss << endl;
}

void practice()
{
    // O(log(n))
    // map <int , string> m;
    // m[1] = "arman";
    // m[5] = "nusrat";
    // m[3] = "ayesha";
    // m.insert({4 , "ador"});
    // map<int,string> :: iterator it;
    // for(it = m.begin() ; it != m.end() ; it++){
    //     // cout << (*it).ff << " " << (*it).ss << endl;
    //     cout << it->first << " " << it->second << endl;
    // }

    // range based for loop
    // for(auto &it : m)
    //     cout << it.ff << " " << it.ss << endl;


    // O(log(n))
    // find function

    // auto it = m.find(4);
    // if(it != m.end())
    //     cout << it->ff << " " << it->ss << endl;
    // else
    //     cout << "NO value";  
    ///printMap(m);



    // erase() function O(log(n))
    // m.erase(3);

    // auto it = m.find(40);
    // if(it != m.end())
    //     m.erase(it);

   // printMap(m);

    // m.clear();

    // printMap(m);


    // int n;cin>>n;
    // map<string,int>m;
    // for (int i = 0; i < n; ++i)
    // {
    //     string s;
    //     cin >> s;
    //     m[s]++;
    // }
    // cout << "size = " << m.size() << endl;
    // for(auto i : m)
    //     cout << i.ff << " " << i.ss << endl;


    // --------- unordered maps-----------
    // m.find() takes O(1)

    // unordered_map < int,string > m;
    // m[1] = "arman";
    // m[2] = "nusrat";
    // m[4] = "ador";
    // m[7] = "ayesha";
    // m[10] = "marriage";

    // for(auto i : m)
    //     cout << i.ff << " " << i.ss << endl;
    
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

