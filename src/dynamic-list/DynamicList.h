#ifndef IDENTIFIERS_IN_FILES_DYNAMICLIST_H
#define IDENTIFIERS_IN_FILES_DYNAMICLIST_H


#include <list>
#include <string>
#include <stdexcept>
#include <sstream>

#include "identifier-node/IdentifierNode.h"

using namespace std;

class DynamicList {
private:
    list<IdentifierNode> _list;
public:
    void insert(IdentifierNode& identifierNode);
    void updateByNode(const IdentifierNode& identifierNode);
    void removeByName(const string& name);

    IdentifierNode& findByName(const string& name);

    const list<IdentifierNode>& getList() const;
};


#endif
