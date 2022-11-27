//Bismillahir rahmanir rahim
//Arman Hossain C193033
//Programming is nothing but an addiction.
#include <bits/stdc++.h>
using namespace std;


using ll    =   long long int;
using ull   =   unsigned long long;
using vi    =   vector < int >;
using vll   =   vector < ll >;
using vc    =   vector < char >;
using vs    =   vector < string >;
using vvi   =   vector < vector < int > >;
using vvs   =   vector < vector < string > >;






#define     pb              push_back
#define     mp              make_pair
#define     ff              first
#define     ss              second
#define     sortv           sort(v.begin(), v.end())
#define     rev_sortv       sort(v.begin(), v.end(), greater<int>())
#define     inv             vi v;for(int i = 0; i < n; ++i){int x;cin >> x; v.pb(x);};
#define     out(v)          for(auto value:v){cout<<value<<" ";}cout<<endl;
#define     pout(p)         for(auto value:p){cout<<value.ff<<" "<<value.ss<<endl;}cout<<endl;
#define     sz(s)           (s).length()
#define     all(x)          (x).begin(), (x).end()
#define     digits(x)       trunc(log10(x))+1
#define     maxelement(x)   max_element(v.begin(),v.end()) - v.begin()
#define     minelement(x)   min_element(v.begin(),v.end()) - v.begin()
// string to int stoi(x)
// int/double to string to_string(x)


int dx[8] = {1, -1, 0,  0, 1,  1, -1, -1};
int dy[8] = {0,  0, 1, -1, 1, -1,  1, -1};
string alpha = " abcdefghijklmnopqrstuvwxyz";

void pairs()
{
    // ----- pair -----

    // initialization

    // pair <int,string> p;
    // // p = make_pair(2 , "arman");
    // p = {2 , "Arman"};
    // cout << p.first << " " << p.second << endl;


    // pair copy & reference

    // pair < int,string > p;
    // p = {2 , "Arman"};
    // pair < int,string > p1 = p; // copy
    // // pair < int,string > p1 = p; // reference
    // p1.first = 3;
    // cout << p.first << endl;



    // array of pair

    pair <int, int> p[3];
    for (int i = 0; i < 3; ++i)
    {
        int x , y;
        cin >> x >> y;
        p[i] = make_pair(x , y);
    }
    // for (int i = 0; i < 3; ++i)
    // {
    //     cout << p[i].first << ' ' << p[i].second << endl;
    // }
    // for(auto value : p)
    //     cout << value.ff << ' ' << value.second << endl;
    swap(p[0] , p[2]);
    for (auto value : p)
        cout << value.first << ' ' << value.second << endl;

}
void printVec(vector < int > &v)
{
    cout << "size = " << v.size() << endl;
    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i] << ' ';
    }
    cout << endl;
}
void printVecPair(vector <pair <int, int> > &v)
{
    cout << "size = " << v.size() << endl;
    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i].first << ' ' << v[i].second << endl;
    }
}
void vectors()
{
    // initialization

    // vector < int > v;
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; ++i)
    // {
    //     int x;
    //     cin >> x;
    //     printVec(v);
    //     v.push_back(x);
    // }
    // printVec(v);

    // vector <int> v(10);// 0 initialize hobe
    // printVec(v);
    // v.push_back(4);
    // printVec(v);
    // // v.resize(3);
    // // printVec(v);

    // vector<int>v(10 , 7);
    // printVec(v);
    // v.pop_back();
    // printVec(v);


    // vector < int > v(5 , 4);
    // vector < int > v1 = v;  // copying a vector O(n)
    // // vector < int > &v1 = v;  // copying a vector by reference O(n)
    // v1.push_back(5);
    // printVec(v);
    // printVec(v1);


    // vectors of pair

    // vector < pair<int, int> > v;
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; ++i)
    // {
    //     int x , y;
    //     cin >> x >> y;
    //     v.push_back({x, y});
    // }
    // printVecPair(v);


    // vectors of arrays
    // int N;
    // cin >> N;
    // vector < int > v[N];
    // for (int i = 0; i < N; ++i)
    // {
    //     int n;
    //     cin >> n;
    //     for (int j = 0; j < n; ++j)
    //     {
    //         int x;
    //         cin >> x;
    //         v[i].push_back(x);
    //     }
    // }
    // for (int i = 0; i < N; ++i)
    // {
    //     printVec(v[i]);
    // }



    // vector of vectors

    // int N;
    // cin >> N;
    // vector < vector < int > > v;
    // for (int i = 0; i < N; ++i)
    // {
    //     int n;
    //     cin >> n;
    //     vector<int>temp;
    //     for(int j = 0 ; j < n ; j++)
    //     {
    //         int x;
    //         cin >> x;
    //         temp.push_back(x);
    //     }
    //     v.push_back(temp);
    // }
    // v[0].push_back(10);
    // v.push_back(vector<int>());
    // cout << "size of vector of vectors = " << v.size() << endl;
    // for (int i = 0; i < v.size(); ++i)
    // {
    //     printVec(v[i]);
    // }



    // add element at the beginning 

    int n;
    cin >> n;
    vector<int>v;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        v.pb(x);
    }

    cout << "size = " << v.size() << endl;
    for(auto value : v)
        cout << value << ' ';
    cout << endl;

    // add element at the beginning 
    int target = 55;
    v.insert(v.begin() , target);
    cout << "size = " << v.size() << endl;
    for(auto value : v)
        cout << value << ' ';
    cout << endl;
    // delete an element from the beginning
    v.erase(v.begin());
    cout << "size = " << v.size() << endl;
    for(auto value : v)
        cout << value << ' ';
    cout << endl;



}
void iterators()
{
    // vector
    // vector<int>v;
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; ++i)
    // {
    //     int x;
    //     cin >> x;
    //     v.push_back(x);
    // }
    // vector<int> :: iterator it ;
    // for(it = v.begin() ; it != v.end() ; it++)
    //     cout << *it << ' ';
    // cout << endl;


    // pairs

    // vector < pair < int , int > > v;
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; ++i)
    // {
    //     int x , y;
    //     cin >> x >> y;
    //     v.push_back({x, y});
    // }


    // vector < pair < int , int > > :: iterator it;
    // for (it = v.begin(); it != v.end(); ++it)
    // {
    //     // cout << (*it).first << ' ' << (*it).second << endl;
    //     cout << it->first << ' ' << it->second << endl;
    //     // when iterator points a pair we can use ->
    // }

    // ranges based for loops

    // vector<int>v;
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; ++i)
    // {
    //     int x;
    //     cin >> x;
    //     v.push_back(x);
    // }
    // // for(auto value : v)value++;// copying
    // // for(auto &value : v)value++;// copying by reference
    // for(auto &value : v)
    //     cout << value << ' ';
    // cout << endl;

    // vector<pair<int,int>>v;
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; ++i)
    // {
    //     int x , y;
    //     cin >> x >> y;
    //     v.push_back({x,y});
    // }
    // for(auto &value : v)
    //     cout << value.first << ' ' << value.second << endl;
}
void printMaps(unordered_map<int, string>&m)
{
    cout << "size = " << m.size() << endl;

    //map < int , string > :: iterator it;
    // for(it = m.begin() ; it != m.end() ; it++){
    //     cout << (*it).first << ' ' << (*it).second << endl;
    //     // cout << it->first << ' ' << it->second << endl;

    for (auto &value : m)
        cout << value.first << ' ' << value.second << endl;
}
void maps()
{
    // map value insertion takes O(log(n))
    // map < int , string > m; //O(log(n))
    // // map < string , string > m; // key_string.size() * O(log(n))

    // m[1] = "arman";
    // m[5] = "nusrat";
    // m[3] = "student";
    // // m[3] = "couple";
    // m.insert({4 , "IIUC"});
    // // m[7];
    // printMaps(m);//O(log(n))
    // // m.erase(7);
    // // printMaps(m);

    // auto it = m.find(5);
    // if(it != m.end())
    //     m.erase(it);
    // printMaps(m);
    // m.clear();
    // printMaps(m);


    // auto it = m.find(3);    // O(log(n))
    // if(it == m.end())
    //     cout << "No Value"<<endl;
    // else
    //     cout << (*it).first << ' ' << (*it).second << endl;


    // unordered_map

    unordered_map < int, string > m;
    // unordered_map < vector<int> ,string > m; -> (error complex data type)

    // insertion -> O(1)
    // m.find() m.erase() -> O(1)

    int n;
    cin >> n;
    m[1] = "arman";
    m[2] = "nusrat";
    m[8] = "IIUC";
    m[3] = "Male";
    m[9] = "female";
    m[5] = "couple";

    printMaps(m);
}
void printSet(set < string > s)
{
    cout << "size = " << s.size() << endl;
    // set < string > :: iterator it;
    // for(it = s.begin() ; it != s.end() ; it++)
    //     cout << *it << ' ';

    for (auto value : s)
        cout << value << " ";
    cout << endl;
}
void sets()
{
    // set

    // set < string > s; //O(log(n))
    // // s.insert("arman");
    // // s.insert("Nusrat");
    // // s.insert("IIUC");

    // int n;
    // cin >> n;
    // for (int i = 0; i < n; ++i)
    // {
    //     string x;
    //     cin >> x;
    //     s.insert(x);
    // }
    // auto it = s.find("abc");
    // if (it != s.end()){
    //     // cout << *it << endl;
    //     s.erase(it);
    // }
    // else
    //     cout << "No value" << endl;
    // printSet(s);


    // unordered_set
    // O(1)
    // doesn't allow complex data structures

    // unordered_set < string > s;
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; ++i)
    // {
    //     string x;
    //     cin >> x;
    //     s.insert(x);
    // }
    // for(auto value : s)
    //     cout << value << ' ';
    // cout << endl;

    // multiset
    // O(log(n))

    multiset < string > s;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        string x;
        cin >> x;
        s.insert(x);
    }
    for (auto value : s)
        cout << value << ' ';
    cout << endl;


    //value deletion
    // s.erase("abc");

    // iterator deletion
    auto it = s.find("abc");
    if (it != s.end())
        s.erase(it);
    for (auto value : s)
        cout << value << ' ';
    cout << endl;
    // value delete korle target er moto shob element delete hoye jabe
    // iterator delete korle only target er moddho theke ekta delete hobe
}
void dsa()
{

    // map of pair and vector

    // map < pair<string , string> , vector<int> > m;
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; ++i)
    // {
    //     pair < string,string > p;
    //     string  x , y;
    //     cin >> x >> y;
    //     p = make_pair(x,y);
    //     int t;
    //     cin >> t;
    //     while(t--) {
    //         int temp;
    //         cin >> temp;
    //         m[p].push_back(temp);
    //     }
    // }
    // for(auto &value : m)
    // {
    //     auto &name = value.first;
    //     auto &list = value.second;
    //     cout << name.first << ' ' << name.second << ' ';
    //     cout << "size = " << list.size() << endl;
    //     for(auto val : list)
    //         cout << val << ' ';
    //     cout << endl;
    // }

    // set of pair

    // set < pair<int,int> > s;
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; ++i)
    // {
    //     int x , y;
    //     cin >> x >> y;
    //     s.insert({x,y});
    // }
    // cout << "size = " << s.size() << endl;
    // for(auto value : s)
    //     cout << value.first << ' ' << value.second << endl;

}

void stacks()
{
    // push
    // pop
    // size

    // stack < int > st;
    // st.push(2);
    // st.push(3);
    // st.push(4);
    // st.push(5);
    // while(!st.empty()) {

    //     cout << st.top() << endl;
    //     st.pop();
    // }

    stack <vector<int> > st;
    int n;
    cin >> n;
    for (int i = 0 ; i < n ; i++)
    {
        int t;
        cin >> t;
        vector < int > temp;
        for (int j = 0; j < t; ++j)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        st.push(temp);
    }
    cout << st.size() << endl;
    while(!st.empty()) {
        cout << st.top().size() << endl;
        for(int i = 0 ; i < st.top().size() ; i++)
            cout << st.top()[i] << ' ';
        cout << endl;
        st.pop();
    }

}

void queues()
{
    // push
    // pop
    // front

    queue < string > q;
    q.push("arman");
    q.push("nusrat");
    q.push("iiuc");
    q.push("noakhali");
    q.push("sitakund");
    while(!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }


}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("F:input.txt", "r", stdin);
    freopen("F:output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);



    //pairs();

    // vectors();

    // iterators();

    // maps();

    // sets();

    // dsa();

    // stacks();

    // queues();

    return 0;
}
