#include "IdentifiersManager.h"

IdentifiersManager::IdentifiersManager(const string& filePath) :
        _fileService(FileService(filePath)),
        _list(DynamicList()) {}
