class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0,product=1;

        if(n==0){
            return 0;
        }
     
        while(n!=0){
            int r=n%10;
            sum+=r;
            product*=r;
            n/=10;
        }
        return product-sum;
    }
};
