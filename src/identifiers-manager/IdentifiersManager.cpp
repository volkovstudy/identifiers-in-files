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
