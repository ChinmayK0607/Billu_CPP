#pragma once

class Value{

};

class ListValue : public Value{
    public:
        ListValue() { }
        void push(const Value *value){
            m_list.push_back(value);
        }
    private:
        std::vector<Value *> m_list {};
};

class SymbolValue: public Value{
    public:
        SymbolValue(std::string str) : m_str { str } { }
        std::string str() { return m_str; }
    private:
        std::string m_str;
};
