#include<bits/stdc++.h>
using namespace std;

class SymbolInfo {
private:
    string symbolName;
    string symbolType;
    SymbolInfo *nextSymbol;    
    int hashIdx, hashPos;
public:
    symbol_info(string name, string type) {
        this->symbolName = name;
        this->symbolType = type;
        nextSymbol = NULL;
    }

    symbol_info() {
        nextSymbol = NULL;
    }

    string getSymbolName() {
        return symbolName;
    }

    string getSymbolType() {
        return symbolType;
    }

    SymbolInfo *getNextSymbol() {
        return nextSymbol;
    }

    void setNextSymbol(SymbolInfo *newSymbol) {
        nextSymbol = newSymbol;
    }

    void setHashIdx(int hashIdx) {
        this->hashIdx = hashIdx;
    }


    void setHashPos(int hashPos) {
        this->hashPos = hashPos;
    }

    string getPosition() {
        return to_string(hashIdx) + ", " + to_string(hashPos);
    }

    ~symbol_info() {

    }

};