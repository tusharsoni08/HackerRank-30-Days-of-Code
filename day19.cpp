class Calculator : public AdvancedArithmetic{
        int divisorSum(int n){
            int i = 2;
            if(n == 1)
                return 1;
                
            int sum = 1 + n;
            
            while(i <= n/2){
                if(n%i == 0)
                    sum +=i;
                i++;
            }
            return sum;
        }
};