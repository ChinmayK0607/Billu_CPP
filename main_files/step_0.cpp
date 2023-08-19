#include<string>
#include<iostream>
#include"Reader.hpp"
using namespace std;

string READ(string input) {
    Tokenize tokenize {input};
    while(auto tok = tokenize.next()){
        cout<< "[" << *tok << "]\n";
    }
    return input;
}
string EVAL(string input) {
    return input;
}
string PRINT(string input) {
    return input;
}
string rep(string input) {
    auto ast = READ(input);//abstract syntax tree
    auto result = EVAL(ast);
    return PRINT(result);
}

int main() {
    string input;
    for (;;) {
        cout << "meow> ";
        getline(cin, input);
        cout<<"purr> ";
        cout << rep(input) << endl;
    }
}
