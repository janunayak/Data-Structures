include <iostream>
#include <stack>
#include <string>
using namespace std;
class Bracket {
    public:
    Bracket(char type, int position):
        type(type),
        position(position)
    {}

    bool Matchc(char c) {
        if (type == '[' && c == ']')
            return true;
        if (type == '{' && c == '}')
            return true;
        if (type == '(' && c == ')')
            return true;
        return false;
    }
    char type;
    int position;
};

int main() {
    string text;
    getline(cin, text);
    stack <Bracket> opening_brackets_stack;
    int pos;
    for (int position = 0; position < text.length(); ++position) {
        char next = text[position];
                if (next == '(' || next == '[' || next == '{') {
             Bracket data =Bracket(next, position);
            opening_brackets_stack.push(data);
        }
        if (next == ')' || next == ']' || next == '}') {
            // opening brackets should exist first
            if(opening_brackets_stack.empty()){
                cout << position+1 << endl;
                return 0;
            }
            // match
            if(opening_brackets_stack.top().Matchc(next))
                opening_brackets_stack.pop();
            // not match
            else{
                cout << position+1 << endl;
                return 0;
            }
        }
    }
    if(opening_brackets_stack.empty())
        cout << "Balanced" << endl;
    else
        cout << opening_brackets_stack.top().position+1 << endl;
    return 0;
}
