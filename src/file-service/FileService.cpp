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

void FileService::rewrite(list<string> values) {
    ofstream outputStream(_filePath);

    for (const string& value: values) {
        outputStream << value << endl;
    }

    outputStream.close();
}
