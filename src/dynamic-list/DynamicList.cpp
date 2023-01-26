#include "DynamicList.h"

void DynamicList::insert(IdentifierNode& identifierNode) {
    _list.push_back(identifierNode);
}

void DynamicList::updateByNode(const IdentifierNode& identifierNode) {
    for (IdentifierNode& node: _list) {
        if (node.getName() == identifierNode.getName()) {
            auto newValue = node.getValue();
            node.setValue(newValue);
        }
    }
}

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

void DynamicList::removeByNode(const IdentifierNode& identifierNode) {
    for (const IdentifierNode& node: _list) {
        if (node.getName() == identifierNode.getName()) {
            _list.remove(node);
        }
    }
}
