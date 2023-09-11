vector<int> generateFibonacciNumbers(int n) {
     int a=0,b=1,s=0;

    vector<int> v;

    for(int i=0;i<n;i++){

        v.push_back(a);

        s=a+b;

        a=b;

        b=s;

    }

    return v;
}
