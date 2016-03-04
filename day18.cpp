#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
#include <stack>
#include <string>
using namespace std;

class Palindrome {
    private:
        stack<char> s;
        queue<char> q;
    
    public:
        
        void pushCharacter(char ch){
            s.push(ch);
        }
    
        void enqueueCharacter(char ch){
            q.push(ch);
        }
    
        char popCharacter(){
            char c = s.top();
            s.pop();
            return c;
        }
    
        char dequeueCharacter(){
            char chr = q.front();
            q.pop();
            return chr;
        }

};