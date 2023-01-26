#include "DynamicList.h"

IdentifierNode& DynamicList::findByName(const string& name) {
    for (IdentifierNode& identifierNode: _list) {
        if (identifierNode.getName() == name) {
            return identifierNode;
        }
    }

    stringstream message;
    message << "Didn't find node with name '" << name << "'";

    throw runtime_error(message.str());
}
