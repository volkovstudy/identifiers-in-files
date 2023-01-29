#include "DynamicList.h"

void DynamicList::insert(IdentifierNode& identifierNode) {
    _list.push_back(identifierNode);
}

void DynamicList::updateByNode(const IdentifierNode& identifierNode) {
    for (IdentifierNode& node: _list) {
        if (node.getName() == identifierNode.getName()) {
            auto newValue = identifierNode.getValue();
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

void DynamicList::removeByName(const string& name) {
    for (const IdentifierNode& node: _list) {
        if (node.getName() == name) {
            _list.remove(node);
            break;
        }
    }
}

const list<IdentifierNode>& DynamicList::getList() const {
    return _list;
}
