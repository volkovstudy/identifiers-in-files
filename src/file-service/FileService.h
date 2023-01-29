#ifndef IDENTIFIERS_IN_FILES_FILESERVICE_H
#define IDENTIFIERS_IN_FILES_FILESERVICE_H


#include <fstream>

#include <string>
#include <list>

using namespace std;

class FileService {
private:
    string _filePath;
public:
    explicit FileService(const string& filePath);

    list<string> readAllLines();
    void rewrite(list<string> values);
};


#endif
