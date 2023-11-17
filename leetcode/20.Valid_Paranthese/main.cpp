#include <iostream>
#include <stack>
using namespace std;

bool isValid(string s) {
    stack<char> stack_of_brackets;
    for(char character : s) {
        if(character == '{' || character == '[' || character == '(') {
            stack_of_brackets.push(character);
        } else if(stack_of_brackets.empty() || 
            (character == '}' && stack_of_brackets.top() != '{')|| 
            (character == ']' && stack_of_brackets.top() != '[') ||
            (character == ')' && stack_of_brackets.top() != '(')) {
                return false;
            }else stack_of_brackets.pop();
    }       
    return stack_of_brackets.empty();
}


int main() {
    string s;
    cin>>s;

    cout<<isValid(s)<<endl;

    return 0;
}