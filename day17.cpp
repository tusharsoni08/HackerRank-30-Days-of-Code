class myexception : public exception{
    virtual const char* what() const throw(){
        return "n and p should be non-negative";
    }
}myex;


class Calculator{
    public:
        int power(int a, int b){
            if(a<0 || b<0)
                throw myex;
            else{
                int ans = pow(a, b);
                return ans;
            }
        }
};