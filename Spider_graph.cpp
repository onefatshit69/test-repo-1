//C0de by Akshit

#include<bits/stdc++.h>
using namespace std;
#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define F(i,a,b) for(long long int i=a;i<b;i++)
#define pb push_back
#define modz 1000000007
#define el cout<<endl;
#define ll long long int
#define ull unsigned long long int

ll prod(vector<ll>A){
    ll array_sum = 0;
    ll n=A.size();
    F(i,0,n){
        array_sum = array_sum + A[i];
        array_sum%=modz;
    }
    ll array_sum_square = array_sum * array_sum;
    array_sum_square%=modz;
    ll individual_square_sum = 0;
    F(i,0,n){
        individual_square_sum += A[i]*A[i];
        individual_square_sum%=modz;
    }
    return (array_sum_square - individual_square_sum)/2;
}

ll solve(unordered_map<ll,vector<ll>> &mp , int n){
    ll ans=0;
    for(ll i=1;i<=n;i++){
        if(mp[i].size()>1){
            ull temp=0;
            vector<ll> vec;
            for(ll nbr:mp[i]){
                vec.pb(mp[nbr].size()-1);
            }
            temp = prod(vec)%modz;
            ans+=temp;
        }
        ans%=modz;
    }
    return ans;
}
int main(){
    FASTIO
    ll n;
    cin>>n;
    unordered_map<ll,vector<ll>> mp;
    F(i,1,n){
        ull a,b;
        cin>>a>>b;
        mp[a].pb(b);
        mp[b].pb(a);
    }
    cout<<solve(mp,n);
}