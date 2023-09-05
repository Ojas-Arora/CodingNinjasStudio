int countDigits(int n){
	int cnt=0,rem=0;

    int num=n;

    while(num>0){

        rem=num%10;

        

            if(rem!=0 && n%rem==0){

                cnt++;

            }

        

        

        num=num/10;

    }

    return cnt;	
}
