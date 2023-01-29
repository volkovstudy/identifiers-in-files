#ifndef IDENTIFIERS_IN_FILES_IDENTIFIERPARSER_H
#define IDENTIFIERS_IN_FILES_IDENTIFIERPARSER_H


#include "identifier-node/IdentifierNode.h"

#include <string>
#include <sstream>
#include <vector>

class IdentifierParser {
private:
    static vector<string> split(const string& line, char delimiter);
public:
    static IdentifierNode& parse(const string& line);
    static string toString(const IdentifierNode& node);
};


#endif
