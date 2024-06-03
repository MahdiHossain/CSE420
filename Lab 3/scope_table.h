#include "symbol_info.h"
class ScopeTable {

private:
    string scopeID;
    int childCount;

    long long total_buckets;
    SymbolInfo **chainHashTable;
    ScopeTable *parentScope;

public:
    ScopeTable(int n, ScopeTable *parentScope) {
        childCount = 0;

        this->parentScope = parentScope;

        if (parentScope == NULL) {
            scopeID = "1";

        } else {
            scopeID = parentScope->scopeID + "." + to_string(parentScope->childCount);
        }

        total_buckets = n;
        chainHashTable = new SymbolInfo *[total_buckets];
        for (int i = 0; i < total_buckets; i++)
            chainHashTable[i] = NULL;
    }

    void setParentScope(ScopeTable *parentScope) {
        ScopeTable::parentScope = parentScope;
    }

    void addChild() {
        childCount++;
    }

    int getChildCount() const {
        return childCount;
    }

    ScopeTable *getParentScope() const {
        return parentScope;
    }

    int32_t sdbmhash(string key) {
        const char *str = key.c_str();
        int32_t hash = 0;
        int c;

        while (c = *str++)
            hash = c + (hash << 6) + (hash << 16) - hash;
        return hash % total_buckets;
    }

    const string getScopeId() {
        return scopeID;
    }

    void insert(SymbolInfo *symbol) {
        string key = symbol->getSymbolName();

        int posInChain = 0;

        int idx = sdbmhash(key);
        if (chainHashTable[idx] == NULL) {
            chainHashTable[idx] = symbol;
            symbol->setHashIdx(idx);
            symbol->setHashPos(posInChain);
        } else {
            posInChain++;
            SymbolInfo *currSymbol = chainHashTable[idx];
            while (currSymbol->getNextSymbol() != NULL) {
                currSymbol = currSymbol->getNextSymbol();
                posInChain++;
            }
            currSymbol->setNextSymbol(symbol);
            symbol->setHashIdx(idx);
            symbol->setHashPos(posInChain);
        }

        cout << "Inserted in ScopeTable# " << scopeID << " at position " << idx << ", " << posInChain << endl;

    }

    bool deleteSymbolFromCurrScope(string key) {
        int idx = sdbmhash(key);

        SymbolInfo *currSymbol = chainHashTable[idx];

        if (lookup(key) == NULL) {
            cout << key << " not found, cannot delete" << endl;
            return false;
        }

        if (currSymbol->getSymbolName() == key && currSymbol->getNextSymbol() == NULL) {
            delete currSymbol;
            chainHashTable[idx] = NULL;
            return true;
        }

        SymbolInfo *parent = chainHashTable[idx];
        int c = 0;
        while (currSymbol->getSymbolName() != key && currSymbol->getNextSymbol() != NULL) {
            parent = currSymbol;
            currSymbol = currSymbol->getNextSymbol();
            c++;
        }

        if (currSymbol->getSymbolName() == key && currSymbol->getNextSymbol() != NULL) {
            if (c == 0) {
                chainHashTable[idx] = currSymbol->getNextSymbol();
            }
            parent->setNextSymbol(currSymbol->getNextSymbol());
            currSymbol->setNextSymbol(NULL);

            delete currSymbol;
            return true;
        } else {
            parent->setNextSymbol(NULL);
            currSymbol->setNextSymbol(NULL);
            delete currSymbol;
            return true;
        }
        return false;
    }

    void printCurr() {
        cout << "ScopeTable# " << scopeID << endl;
        for (int i = 0; i < total_buckets; i++) {
            cout << i << " --> ";

            SymbolInfo *currSymbol = chainHashTable[i];
            while (currSymbol != NULL) {
                cout << "< " << currSymbol->getSymbolName() << " : " << currSymbol->getSymbolType() << " > ";
                currSymbol = currSymbol->getNextSymbol();
            }
            cout << endl;
            
        }
    }

    SymbolInfo *lookup(string key) {
        int idx = sdbmhash(key);
        SymbolInfo *currSymbol = chainHashTable[idx];
        if (currSymbol == NULL) {
            return NULL;
        }

        int c = 0;
        while (currSymbol != NULL) {
            if (currSymbol->getSymbolName() == key) {
                currSymbol->setHashPos(c);
                return currSymbol;
            }
            c++;
            currSymbol = currSymbol->getNextSymbol();
        }
        return NULL;
    }


    ~ScopeTable() {
        for (int i = 0; i < total_buckets; i++) {

            SymbolInfo *tempSymbol = chainHashTable[i];
            while(tempSymbol){
                SymbolInfo * currNext = tempSymbol->getNextSymbol();
                delete tempSymbol;
                tempSymbol = currNext;
            }
        }
        delete[] chainHashTable;

    }
};
