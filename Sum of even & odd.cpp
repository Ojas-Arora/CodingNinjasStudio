#include<iostream>

using namespace std;

 

int main() {

    

    int n;

    cin>>n;

 

    int evensum = 0;

    int oddsum = 0;

 

    while(n>0){

         

        int digit = n%10;

        if(digit%2 == 0){

            evensum = evensum + digit;

            n=n/10;

        }

        else if(digit == 0){

            n=n/10;

        }

        

        else {

            oddsum = oddsum +digit;

            n=n/10;

        }

    

        }   

        cout<<evensum<<" "<<oddsum;

        

    }
