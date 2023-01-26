#include "IdentifierNode.h"

IdentifierNode::IdentifierNode(const string& name, float value) :
        _name(name),
        _value(value) {}

const string& IdentifierNode::getName() const {
    return _name;
}

float IdentifierNode::getValue() const {
    return _value;
}

void IdentifierNode::setValue(float value) {
    _value = value;
}
