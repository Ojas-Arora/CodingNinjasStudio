bool palindrome(int n)
{
     int temp = n ; 

 

    int ans=0 ; 

 

    while(n>0)

    {

        ans = ans*10 + (n%10);

 

        n=n/10;

 

    }

    if(temp==ans)

    return true ;

    else 

    return false;
}
