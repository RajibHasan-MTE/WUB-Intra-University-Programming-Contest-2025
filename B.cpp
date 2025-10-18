/*
Author  : Rajib Hasan
GitHub  : https://github.com/RajibHasan-MTE
Date    : 2025-10-12
Problem : https://vjudge.net/contest/755448#problem/B
Contest :
Language: C++17 (or C++20)
*/


#include <bits/stdc++.h>


using namespace std;




int main(){

    int n;
    cin>>n;
    vector<int> a(n);

    for(int i=0; i<n; i++) cin >> a[i];

    set<int> seen;
    vector<int> result;


    for(int i = n - 1; i >= 0; i--){
        if(seen.find(a[i]) == seen.end()){
            seen.insert(a[i]);
            result.push_back(a[i]);
        }
    }

    reverse(result.begin(), result.end()); // Restore the orginal order

    cout<<result.size() <<"\n";
    for(int x : result) cout << x << " ";
    cout << "\n";

    return 0;
}
