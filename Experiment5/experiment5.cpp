class Solution {
public:
    int nthMagicalNumber(int n, int a, int b) {
        long mod=1e9+7;
        long A=a,B=b;
        long l=min(a,b);
        long long r=1LL*n*min(a,b);

        while(B>0){
            long temp=A;
            A=B;
            B=temp%B;
        }
        long long lcm=(1LL*a*b)/A;

        while(l<r){
            long m=l+(r-l)/2;
            if(((m/a)+(m/b)-(m/lcm))<n) l=m+1;
            else r=m;

        }
        return l%mod;
    }
};

