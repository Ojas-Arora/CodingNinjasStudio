long reverseBits(long n) {
     long long ans=0;

    for(int i=0;i<32;i++){

        ans=(ans<<1)|((n>>i)&1);

        

    }

    return  ans;
}
