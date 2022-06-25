//
// Created by ribre on 23/06/2022.
//

#include "FileManager.h"

void FileManager::savePersonTextFile(const Person &person, const string &fileName) {

    // Create and open a text file
    ofstream myFile(fileName, ios_base::app);

    // Write to the file
    myFile << person.toString() << endl;

    // Close the file
    myFile.close();
}

void FileManager::savePersonListTextFile(const vector<Person> &personList, const string &fileName) {

    // Create and open a text file
    ofstream myFile(fileName, ios_base::app);

    // Write to the file
    for (auto &person : personList) {
        myFile << person.toString() << endl;
    }

    // Close the file
    myFile.close();
}

void FileManager::savePlayerListCSV(const std::string &filename, const vector<FootPlayer> &playerList) {

    std::ofstream out(filename, std::ios::out | std::ios::app | std::ios::binary);

    if(!out.is_open()) {
        throw std::invalid_argument("Could not open file ["+ filename + "]");
    }

    for (auto &player : playerList) {
        out << player.getName() << ";" << player.getId() << ";" << player.getHappiness() << ";"
        << player.getSalary()<< ";" << player.getTransferFee() << '\r' << '\n';
    }
}

void FileManager::saveManagerListDAT(const string &filename, const vector<Person> &managerList) {

    ofstream myFile(filename, ios::out | ios_base::binary);

    for (auto &person:managerList){
        myFile.write((char *)&person, sizeof(person));
    }
    myFile.close();

}

string FileManager::readByContent(const string &filename) {
    // Create a text string, which is used to output the text file
    string content;

    // Read from the text file
    ifstream myReadFile(filename);
    if (!myReadFile.is_open()) {
        throw invalid_argument("Could not open the file [" + filename + "]");
    }

    // With this line you can read the full content of a text file
    // https://en.cppreference.com/w/cpp/iterator/istreambuf_iterator
    content.assign((istreambuf_iterator<char>(myReadFile)),
                   (istreambuf_iterator<char>()));

    return content;
}

