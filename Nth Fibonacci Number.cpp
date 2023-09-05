#include<bits/stdc++.h>
using namespace std;

int fib(int i){

        if(i==1 || i==2)

                return 1;

        else

                return fib(i-1) + fib(i-2);

}

int main()

{

        int n,sum=0;

        cin >> n;

        sum = fib(n);

        cout << sum;

}
