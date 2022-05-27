/*
Given an integer vector and a bool variable flag, your task is to sort the vector in 
accordance to the boolean value. If the bool value passed is true then sortit in non-decreasing 
order or vice versa. Use any sort you want.
*/

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
