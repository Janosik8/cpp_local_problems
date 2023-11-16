#include <iostream>
#include <stack>
using namespace std;

bool isValid(string s) {
    stack<char> stack_of_brackets;
   for(int i = 0; i < s.length(); i++) {

    if(s[i] == '{' || s[i] == '[' || s[i] == '('){
        stack_of_brackets.push(s[i]);
    }else if(!stack_of_brackets.empty()){
        switch (s[i])
        {
        case ')': if (stack_of_brackets.top() == '(') stack_of_brackets.pop(); else return false; break;
        case '}': if (stack_of_brackets.top() == '{') stack_of_brackets.pop(); else return false; break;
        case ']': if (stack_of_brackets.top() == '[') stack_of_brackets.pop(); else return false; break;
        default: return false; 
        }
    }else return false;
}
    if(!stack_of_brackets.empty()) return false;
        return true;
}


int main() {
    string s;
    cin>>s;

    cout<<isValid(s)<<endl;

    return 0;
}