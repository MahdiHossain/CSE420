#include "scope_table.h"

class SymbolTable {
private:
    ScopeTable *currScopeTable;
    int tableSize;

public:
    SymbolTable(int tableSize) {
        this->tableSize = tableSize;

        currScopeTable = new ScopeTable(tableSize, NULL);
    }

    void enterScope() {
        currScopeTable->addChild();

        currScopeTable = new ScopeTable(tableSize, currScopeTable);
        cout << "New ScopeTable with id " << currScopeTable->getScopeId() << " created" << endl;
    }

    void exitScope() {
        if(!isSymbolTableEmpty()){

            if (currScopeTable->getParentScope() == NULL) {
                cout << "ScopeTable# " << currScopeTable->getScopeId() << " removed" << endl;
                cout << "Destroying the First Scope" << endl;
                delete currScopeTable;
                currScopeTable = NULL;
            }
            if (currScopeTable != NULL) {
                ScopeTable *parentScope = currScopeTable->getParentScope();
                cout << "ScopeTable# " << currScopeTable->getScopeId() << " removed" << endl;
                delete currScopeTable;
                currScopeTable = parentScope;
            }
        }
    }

    bool insert(SymbolInfo *newSymbol) {
        if(currScopeTable == NULL){
            currScopeTable = new ScopeTable(tableSize, NULL);
        }
        if (currScopeTable->lookup(newSymbol->getSymbolName())){

            cout << "< " << newSymbol->getSymbolName() << " : " << newSymbol->getSymbolType() << " > " << " already exists in current scope" <<endl;
            delete newSymbol;
            return false;
        }
        currScopeTable->insert(newSymbol);

        return true;
    }

    bool remove(string symbol) {

        SymbolInfo *currSymbol = currScopeTable->lookup(symbol);
        if (currScopeTable->deleteSymbolFromCurrScope(symbol)) {
            cout << "Found in ScopeTable# " << currScopeTable->getScopeId() << " at position " << currSymbol->getPosition() << endl;
            cout << "Deleted Entry " << currSymbol->getPosition() << " from current ScopeTable" << endl;

            return true;
        }

        cout << symbol << " Not found" << endl;
        return false;
    }

    bool lookup(string symbol) {
        ScopeTable *scope = currScopeTable;
        while (scope) {
            SymbolInfo *currSymbol = scope->lookup(symbol);
            if (currSymbol != NULL) {
                cout << "Found in ScopeTable# " << scope->getScopeId() << " at position " << currSymbol->getPosition() << endl;
                return true;
            } else scope = scope->getParentScope();
        }
        cout << symbol << " Not found" << endl;
        return false;
    }

    void printCurrScopeTable() {
        if(!isSymbolTableEmpty())
            currScopeTable->printCurr();
    }

    void printAllScopeTables() {
        ScopeTable *tempScope = currScopeTable;

        while (tempScope) {
            tempScope->printCurr();
            tempScope = tempScope->getParentScope();

        }
    }

    bool isSymbolTableEmpty(){
        if(!currScopeTable){
            cout << "NO CURRENT SCOPE" << endl;
            return true;
        }
        else return false;
    }

    ~SymbolTable() {
        if(currScopeTable->getParentScope() != NULL){
            delete currScopeTable->getParentScope();
        }
        delete currScopeTable;

    }
};

