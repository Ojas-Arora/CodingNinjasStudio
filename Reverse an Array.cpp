vector<int> reverseArray(int n, vector<int> &nums)
{
   vector<int> a;

    for (auto it=nums.end()-1;it>=nums.begin();it--){

        a.push_back(*(it));

    }

    return a;

}
