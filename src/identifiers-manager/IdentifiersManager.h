#ifndef IDENTIFIERS_IN_FILES_IDENTIFIERSMANAGER_H
#define IDENTIFIERS_IN_FILES_IDENTIFIERSMANAGER_H


#include "file-service/FileService.h"
#include "dynamic-list/DynamicList.h"
#include "identifier-parser/IdentifierParser.h"

class IdentifiersManager {
private:
    FileService _fileService;
    DynamicList _list;
public:
    IdentifiersManager(const string& filePath);

    void initializeList();

    const DynamicList& getList() const;
    void setList(const DynamicList& list);

    ~IdentifiersManager();
};


#endif
