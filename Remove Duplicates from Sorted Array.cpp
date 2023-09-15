int removeDuplicates(vector<int> &arr, int n) {
   int count = 0;

 

    for(int i=1;i< n; i++){

 

        if(arr[i-1] < arr[i])   count ++;

 

    }

 

    return count+1;

 	


}
