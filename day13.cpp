
class MyBook : public Book{
    private:
        int prc;
    public:
        MyBook(string title, string author, int price) : Book(title, author){
            prc = price;
        }
        void display(){
            cout << "Title: " << title << endl;
            cout << "Author: " << author << endl;
            cout << "Price: " << prc << endl;
        }
};
