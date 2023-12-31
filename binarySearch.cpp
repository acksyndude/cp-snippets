#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define ld long double 
#define fi first 
#define se second 
#define mp make_pair 
#define pb push_back 
#pragma GCC optimize(1)
#define eb emplace_back 
#define pll pair<long long ,long long > 
#define ppll pair < pll , pll > 
#pragma GCC optimize(2)
#define sd(x) scanf("%d",&x) 
#define sld(x) scanf("%lld",&x) 
#define INF 1e18 
#define eps 0.00001 
#define le length 
#pragma GCC optimize(3,"Ofast","inline")
#define debug(n1) cout << n1 << endl 
#define rep(i , n) for(ll i = 0 ; i < n ; i++) 
#define per(i , j , n) for(ll i = j ; i >= n ; i--)

    long long int t = 1e+7;

int biSearch(vector<int>& ar, int  middle, int left, int right, int value, int size){
    cout << middle << " " << size << "\n";
    
    if (ar[middle] == value)return middle;
    if (left == right && ar[(left)]!=value) return -1;
    if ( middle > size || middle < 0 || right >= size || left < 0) return -1;
    
    if (ar[middle] > value){
        int right = middle;
        
        if (middle == (left+right)/2){
            right++;
        }
        
        middle = (right+left)/2;
        return biSearch(ar, middle, left, middle, value, size);
    }
    else if (ar[middle] < value){
        int left = middle;
        
        if (middle == (right+left)/2){
            left++;
        }
        
        middle = (right+left)/2;
        return biSearch(ar, middle, middle, right, value, size);
    }
}

int main() {
    vector<int> arr = {2,3,5,1,9,4,5,7,3};
    int x;
    cin >> x;
    
    int size = arr.size();
    sort(arr.begin(), arr.end());
    for (auto i: arr){
        cout << i << " ";
    }cout << "\n";
    
    int index = biSearch(arr, (size-1)/2, 0, size-1, x, size);
    cout << index << "\n";
    
    return 0;
}
