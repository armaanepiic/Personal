//Bismillahir rahmanir rahim
//Arman Hossain C193033
//Programming is nothing but an addiction.
//C:\Users\ARMAN HOSSAIN\AppData\Roaming\Sublime Text 3\Packages\User

#include <bits/stdc++.h>
using namespace std;


using ll    =   long long int;
using ull   =   unsigned long long;
using vi    =   vector<int>;
using vll   =   vector<ll>;
using vc    =   vector<char>;
using vs    =   vector<string>;
using pis   =   pair<int , string>;
using pii   =   pair<int , int>;




#define     pb              push_back
#define     mp              make_pair
#define     ft              first
#define     sc              second
#define     sortv           sort(v.begin(), v.end())
#define     rev_sortv       sort(v.begin(), v.end(), greater<int>())
#define     inv             vi v;for(int i = 0; i < n; ++i){int x;cin >> x; v.pb(x);};
#define     out(v)          for(int i = 0; i < v.size(); ++i){cout << v[i] << " ";}cout << endl;
#define     sz(s)           (s).length()
#define     all(x)          (x).begin(), (x).end()
#define     digits(x)       trunc(log10(x))+1
#define     even(x)         (x)%2
#define     inn             int n;cin>>n;


void pair()
{
    syntax   :   pair (data_type1, data_type2) Pair_name

    pair <int , string> p(2 , "abc");

    pair<int , string> p;

    --------- make_pair() function ---------

    syntax   :   Pair_name = make_pair (value1,value2);

    p = mp(2 , "abc");

    p = {2 , "abc"};

    cout << p.ft << " " << p.sc << endl;


    --------- swap function ---------

    syntax   :   pair1.swap(pair2) ;

    pair<int , string>a,b;

    a = mp(100 , "arman");
    b = mp(500 , "nusrat");

    cout << "Before swapping:" << endl;

    cout << a.ft << " " << a.sc << endl;
    cout << b.ft << " " << b.sc << endl;

    a.swap(b);

    cout << "After swapping:"<< endl;


    cout << a.ft << " " << a.sc << endl;
    cout << b.ft << " " << b.sc << endl;


    ------------------- copy a pair-------------------

    pair<int , string>p;
    p = mp(100 , "arman");
    cout << p.ft << " " << p.sc << endl;

    pair<int , string> &p1 = p;

    by reference

    p1.ft = 300;
    p1.sc = "nusrat";

    cout << p.ft << " " << p.sc << endl;


    -------- pair of array ----------


    int a[] = {1,2,3};
    int b[] = {2,3,4};


    pair<int, int>p_array[3];


    p_array[0] = mp(1,2);
    p_array[1] = mp(2,3);
    p_array[2] = mp(3,4);

    taking input

    for (int i = 0; i < 3; ++i)
    {
        cin >> p_array[i].ft;
        cin >> p_array[i].sc;
    }


    swap(p_array[0] , p_array[2]);

    for (int i = 0; i < 3; ++i)
    {
        cout << p_array[i].ft << " " << p_array[i].sc << endl;
    }


}
void printVec(vector<int>v)
{
    cout << "size: " << v.size() << endl;
    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i] << " ";
    }
    v.pb(2);
    cout << endl;
}

void vectorr()
{
    int n; cin >> n;
    vector<int>v;
    for (int i = 0; i < n; ++i)
    {
        int x; cin >> x;
        printVec(v);

        v.pb(x);
    }
    printVec(v);


    vector<int> v(5);
    printVec(v);
    v.pb(10);
    printVec(v);



    vector<int>v(10 , 5);
    printVec(v);

    v.pop_back();
    printVec(v);



    -------- copy a vector--------
    O(n)

    vector<int>v(10 , 8);
    vector<int>v1 = v;
    printVec(v1);
    v1.pop_back();
    printVec(v);
    printVec(v1);


    vector<int>v(5 , 1);
    printVec(v);


    ------ pass vector by reference--------

    vector<int>v(5 , 1);
    oi function er parameter er age & dite hobe
    printVec(v);
    printVec(v);


    vi v(5 , 2);

    vi &v2 = v;
    // copying v to v2 by reference
    printVec(v2);
    v.pb(5);
    printVec(v2);

    vector<string>v;
    for (int i = 0; i < 5; ++i)
    {
        string s;
        cin >> s;
        v.pb(s);
    }
    printVec(v);

}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("F:/io/input.txt", "r", stdin);
    freopen("F:/io/output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    pair();

    vectorr();

    return 0;
}
