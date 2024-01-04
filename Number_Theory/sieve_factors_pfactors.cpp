// Arman Hossain C193033
// Programming is fun with emotion
#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
using ull = unsigned long long;
using vi = vector<int>;
using vll = vector<ll>;
using vc = vector<char>;
using vs = vector<string>;
using vvi = vector<vector<int>>;
using vpi = vector<pair<int, int>>;
using vvs = vector<vector<string>>;

#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define sz(s) (s).length()
#define digits(x) trunc(log10(x)) + 1
#define all(x) (x).begin(), (x).end()
#define sumvec(x) accumulate((x).begin(), (x).end(), 0)
#define uniq_element(x) unique((x).begin(), (x).end()) - (x).begin()
#define rev_sort(x) sort((x).begin(), (x).end(), greater<int>())
#define maxelement(x) max_element((x).begin(), (x).end()) - (x).begin()
#define minelement(x) min_element((x).begin(), (x).end()) - (x).begin()
#define print_sieve for (int i)

int dx[8] = {1, -1, 0, 0, 1, 1, -1, -1};
int dy[8] = {0, 0, 1, -1, 1, -1, 1, -1};

const int N = 10000000;
bool sieve[N];


void generate_sieve()
{
    vi primes;
    sieve[0] = sieve[1] = 1;
    for (int i = 2; i * i < N; i++)
    {
        if (!sieve[i])
        {
            for (int j = i * i; j < N; j += i)
                sieve[j] = 1;
        }
    }
    for (int i = 0; i < N; i++)
    {
        if(sieve[i] == 0)
            primes.pb(i);
    }
    for (int i = 0; i < primes.size(); i+=100)
    {
        cout << primes[i] << endl;
    }
    
    
}

void factors()
{
    int n;
    cin >> n;
    vector<int> facts;
    facts.pb(1), facts.pb(n);
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0 && i * i != n)
        {
            facts.pb(i);
            facts.pb(n / i);
        }
        else
            facts.pb(i);
    }
    sort(all(facts));
    for (auto &&it : facts)
        cout << it << endl;
}

void prime_factors()
{
    int n;
    cin >> n;
    map<int, int> pfacts;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                pfacts[i]++;
                n /= i;
            }
        }
    }
    if (n != 1)
        pfacts[n]++;

    for (auto &&it : pfacts)
    {
        cout << it.ff << ' ' << it.ss << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // generate_sieve();
    // factors();
    // prime_factors();
    return 0;
}
