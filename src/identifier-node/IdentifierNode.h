#ifndef IDENTIFIERS_IN_FILES_IDENTIFIERNODE_H
#define IDENTIFIERS_IN_FILES_IDENTIFIERNODE_H


#include <string>

using namespace std;

class IdentifierNode {
private:
    string _name;
    float _value;
public:
    IdentifierNode(const string& name, float value);

    const string& getName() const;
    float getValue() const;
    void setValue(float value);
};


#endif
