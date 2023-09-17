#include <bits/stdc++.h> 
vector<int> rotateArray(vector<int>& arr, int n) {
   vector<int> result;

    for(int i=1;i<n;i++){

        result.push_back(arr[i]);

    }

    result.push_back(arr[0]);

    return result;
}
