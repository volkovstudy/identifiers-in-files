#ifndef IDENTIFIERS_IN_FILES_IDENTIFIERSMANAGER_H
#define IDENTIFIERS_IN_FILES_IDENTIFIERSMANAGER_H


#include "file-service/FileService.h"
#include "dynamic-list/DynamicList.h"

class IdentifiersManager {
private:
    FileService _fileService;
    DynamicList _list;
};


#endif
