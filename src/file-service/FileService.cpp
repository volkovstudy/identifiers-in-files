#include "FileService.h"

FileService::FileService(const string& filePath) :
        _filePath(filePath) {}

list<string> FileService::readAllLines() {
    ifstream inputFile(_filePath);

    list<string> fileContent;

    string line;
    while (getline(inputFile, line)) {
        fileContent.push_back(line);
    }

    inputFile.close();

    return fileContent;
}
