vector<int> rotateArray(vector<int>arr, int k) {
     int i,temp,n=arr.size();

    while(k>0)

    {

        temp=arr[0];

        for(i=0;i<n;i++)

        {

            if(i==(n-1))

            {

                arr[i]=temp;

                break;

            }

            else

            {

                arr[i]=arr[i+1];

            }

        }

        k--;

    }

    return arr;
}
