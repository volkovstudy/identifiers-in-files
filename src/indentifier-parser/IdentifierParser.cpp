#include "IdentifierParser.h"

/*
 * Line view:
 * <identifier><space><value>
 */

vector<string> IdentifierParser::split(const string& line, char delimiter) {
    vector<string> result;

    stringstream stream(line);
    string item;

    while (getline(stream, item, delimiter)) {
        result.push_back(item);
    }

    return result;
}

IdentifierNode& IdentifierParser::parse(const string& line) {
    vector<string> values = split(line, ' ');

    string name = values[0];
    float value = stof(values[1]);

    IdentifierNode* node = new IdentifierNode(name, value);

    return *node;
}
