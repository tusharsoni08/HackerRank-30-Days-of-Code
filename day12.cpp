class Grade :  public Student{
    private:
         int score;   
    public:
        Grade(string fn, string ln, int ph, int sc) : Student(fn, ln, ph) 
        {
            score = sc;
        };
        char calculate(){
            if(score < 40)
                return 'D';
            else if(score < 60)
                return 'B';
            else if(score < 75)
                    return 'A';
            else if(score < 90)
                    return 'E';
            else
                return 'O';
        }
};