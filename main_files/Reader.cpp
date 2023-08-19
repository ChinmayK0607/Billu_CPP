#include "Reader.hpp"

std::vector<std::string_view> tokenize(std::string &input){
    Tokenize tokenise {input};
    std::vector<std::string_view> v;
    while(auto tok = tokenise.next){
        v.push_back(*tok);
    }
    return v;
}

Value *read_str(std::string &input){
    auto tokens = tokenize(input);
    Reader read { tokens };
    return read_form(read);
}

Value *read_form(Reader &read){
    auto token = read.peek();

    switch(token[0]){
        case '(':
            return read_list(read);
        default:
            return read_atom(read);
    }
}

Value *read_list(Reader &read){

}
Value *read_atom(Reader &read){
    
}
