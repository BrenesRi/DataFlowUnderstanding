#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include "Person.h"
#include "FootPlayer.h"
#include "FootManager.h"
#include "FileManager.h"

    using namespace std;
int main() {
    try {
        srand (time(nullptr));

    Person persona("Jose","320921231",rand() % 100);
    Person persona2("Jesus","320921231",rand() % 100);
    Person persona3("Jorge","320921231",rand() % 100);

    vector<Person> listaGente;
    listaGente.push_back(persona);
    listaGente.push_back(persona2);
    listaGente.push_back(persona3);

    FootPlayer jugador("Salah", "29281722", rand() % 100, 23,80);
    FootPlayer jugador2("Contreras", "29281722", rand() % 100, 23,80);
    FootPlayer jugador3("Kroos", "29281722", rand() % 100, 23,80);

    vector<FootPlayer> listaJugadores;
    listaJugadores.push_back(jugador);
    listaJugadores.push_back(jugador2);
    listaJugadores.push_back(jugador3);

    FootManager entrenador("Ancelotti","10292912",rand() % 100,"Real Madrid",47);
    FootManager entrenador2("Klopp","10292912",rand() % 100,"Real Madrid",47);
    FootManager entrenador3("Guardiola","10292912",rand() % 100,"Real Madrid",47);

    vector<Person> listaEntrenadores;
    listaEntrenadores.push_back(entrenador);
    listaEntrenadores.push_back(entrenador2);
    listaEntrenadores.push_back(entrenador3);

    //TESTEO DE SAVING

    //salvando en txt
    FileManager parseoDatos;
    parseoDatos.savePersonTextFile(persona,"personastxt.txt");
    parseoDatos.savePersonListTextFile(listaGente,"personastxt.txt");

    //salvando en cvc
    parseoDatos.savePlayerListCSV("jugadorescsv.csv",listaJugadores);

    //salvando en binario
    parseoDatos.saveManagerListDAT("managersdat.dat",listaEntrenadores);

    //leyendo en txt
    cout<< parseoDatos.readByContent("personastxt.txt");
    cout<<endl;
    //leyendo de csv
    //Excelente ejemplo en "Archivos" github, con conversión de variable

    //leyendo de dat
    //Excelente ejemplo en "Lab04" github, para vectores


    } catch (exception& ex) {
        cerr << ex.what() << '\n' << std::endl;
    }
    return 0;
}
