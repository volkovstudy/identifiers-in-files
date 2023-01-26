#ifndef IDENTIFIERS_IN_FILES_DYNAMICLIST_H
#define IDENTIFIERS_IN_FILES_DYNAMICLIST_H


#include <list>
#include <string>

#include "identifier-node/IdentifierNode.h"

using namespace std;

class DynamicList {
private:
    list<IdentifierNode> _list;
public:
    IdentifierNode& findByName(const string& name);
};


#endif
