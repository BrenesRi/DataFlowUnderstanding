//
// Created by ribre on 23/06/2022.
//

#ifndef DATAFLOWUNDERSTANDING_FILEMANAGER_H
#define DATAFLOWUNDERSTANDING_FILEMANAGER_H
#include <string>
#include <iostream>
#include <fstream>
#include "Person.h"
#include "FootPlayer.h"
#include <vector>
using namespace std;

class FileManager {
public:
    static void savePersonTextFile(const Person& person, const string& fileName);
    static void savePersonListTextFile(const vector<Person>& personList, const string& fileName);
    static void savePlayerListCSV(const std::string &filename, const vector<FootPlayer>& playerList);
    static void saveManagerListDAT(const std::string &filename, const vector<Person>& managerList);

    static string readByContent(const string& filename);

};


#endif //DATAFLOWUNDERSTANDING_FILEMANAGER_H
