#include <iostream>
#include <string>
#include <map>
#include <vector>
#include "Header.h"

using namespace std;
/*
To do:
1-написать меню(через свичи)+
2-создать многофайловый проект+
3-раскидать каждую опцию на функции+
4-разобраться с мапами и что с ними происходит!!!!!
5-enam!!!!!!!!!!!
*/
void menu() 
{
    enum Mytraine //нейминг
    {
        CREAT_TRAM = 1,
        TRAMS_IN_STOP,
        STOPS_IN_TRAMS,
        TRAMS
    };
    cout << "Welcome to timelist tramvay!" << endl 
        << "|Press 1| - do 1 zadanie" << endl 
        << "|Press 2| - do 2 zadanie" << endl 
        << "|Press 3| - do 3 zadanie" << endl 
        << "|Press 4| - do 4 zadanie" << endl 
        << "|Press 5| - Exit" << endl;
    int kriteriy;
    cin >> kriteriy;
    switch (kriteriy)
    {
    case CREAT_TRAM:
        zadanie_1();
        break;
    case TRAMS_IN_STOP:
        zadanie_2;
        break;
    case STOPS_IN_TRAMS:
        zadanie_3;
        break;
    case TRAMS:
        zadanie_4;

        break;
    case 5:
        cout << "Goodbay!" << endl;
        break;
    default:
        cout << "Error!" << endl;
        break;
    }
}
    /*map<string, vector<string>> train_1;
    vector<string> ost_1 = { "Marksa","Titova","Studencheskaya" };
    map<string, vector<string>> train_2;
    vector<string> ost_2 = { "Blukhera","Titova","Kosmicheskaya" };
    map<string, vector<string>> trains = { make_pair("15",train_1),make_pair("18", train_2)};


    создание трамвая с именем:
    string name;
    cin >> name;
    map<string, int> mapik = { {name,12} };
    */
    
int main()
{
    
    menu();
}

