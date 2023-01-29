#include "IdentifiersManager.h"

IdentifiersManager::IdentifiersManager(const string& filePath) :
        _fileService(FileService(filePath)),
        _list(DynamicList()) {}

void IdentifiersManager::initializeList() {
    list<string> fileContent = _fileService.readAllLines();

    if (fileContent.empty()) return;

    for (const string& line: fileContent) {
        IdentifierNode node = IdentifierParser::parse(line);
        _list.insert(node);
    }
}

const DynamicList& IdentifiersManager::getList() const {
    return _list;
}

IdentifiersManager::~IdentifiersManager() {
    list<string> nodes;
    for (const IdentifierNode& node: _list.getList()) {
        string line = IdentifierParser::toString(node);
        nodes.push_back(line);
    }

    _fileService.rewrite(nodes);
}
