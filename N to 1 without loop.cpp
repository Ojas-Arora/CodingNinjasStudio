/*
    Time Complexity: O( n ) 
    Space Complexity: O( n )
    
    where n is the integer.
*/

void recursiveFunction(int x, vector<int>& ans) {
    if(x == 0) {
        return;
    }
    // Insert element in the array
    ans.push_back(x);
    
    // Call recursive function
    recursiveFunction(x - 1, ans);
}

vector<int> printNos(int x) {
    // Declaring empty integer array
    vector<int> ans;
    
    // Calling recursive function
    recursiveFunction(x, ans);
    
    return ans;
}
