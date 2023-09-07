vector<int> printNos(int x) {
        if(x==1){

          return {1};
        }

        vector<int> v = printNos(x - 1);

        v.push_back(x);

        return v;
}
