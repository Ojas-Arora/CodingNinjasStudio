#include<vector>

int getSingleElement(vector<int> &arr){
	   int n=arr.size();

    // cin>>n;

 

    // vector<int> arr(n);

 

    // for(int i=0;i<n;i++)

    // {

    //     cin>>arr[i];

    // }

    int ele=-1;

    if(arr[0]!=arr[1])

    {

        ele= arr[0];

        // cout<<ele;

        return ele;

 

    }

    if(arr[n-1]!=arr[n-2])

    {

        ele= arr[n-1];

        // cout<<ele;

        return ele;

    }

    for(int i=0;i<n-1;i+=2)

    {

        if(arr[i] !=arr[i+1])

        {

            ele =arr[i];

            break;

        }

 

    }

    // cout<<ele;

    return ele;

 

    

}

