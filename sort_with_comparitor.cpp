#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

vector<int> sortingWithComparator(vector<int> a, bool flag){
    // your code  goes here
    
    if(flag){
        sort(a.begin(), a.end());
    }
    else
    {
        sort(a.begin(), a.end(), greater<int>());
    }
    
    return a;
    
}
