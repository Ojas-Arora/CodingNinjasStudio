int searchInsert(vector<int>& arr, int m)
{
	    int low = 0, high = arr.size()-1;

        int ans=arr.size();

 

        while(low<=high) {

            int mid = (low+high)/2;

 

            if(arr[mid]>=m){

                ans=mid;

                high = mid-1;

            }

            else

            low=mid+1;

        }

        return ans;
}
