#include <iostream>

using namespace std;

struct inform {
    char name[20], sname[20];
    int snum, classnum;
    void input();
    void show();
    void solve();
};

void inform::input() {
    cout << "Input name:\t";
    cin >> name;
    cout << "Input second name:\t";
    cin >> sname;
    cout << "Input school number:\t";
    cin >> snum;
    cout << "Input class number:\t";
    cin >> classnum;
    cout << "=======================================\n";
}

void inform::show() {
    cout << "Name: " << name << endl;
    cout << "Second name: " << sname << endl;
    cout << "School number: " << snum << endl;
    cout << "Class number: " << classnum << endl;
    cout << "=======================================\n";
}

void inform::solve() {
    if (snum == 49 | snum == 90) {
        if (classnum == 7 | classnum == 8) {
            cout << "Name: " << name << endl;
            cout << "Second name: " << sname << endl;
        }
    }
    cout << "=======================================\n";
}

int main() {
    int schoolnum;
    int i = 0;
    cout << "Student quantity = ";
    cin >> schoolnum;
    inform massive[schoolnum];
    for (i = 0; i < schoolnum; i++) massive[i].input();
    cout << "\t\t\t\t-- All students --\n";
    cout << "=======================================\n";
    for (i = 0; i < schoolnum; i++) massive[i].show();
    cout << "\t-- All students form 90 & 49 schools, from 7 & 8 classes --\n";
    cout << "=======================================\n";
    for (i = 0; i < schoolnum; i++) massive[i].solve();
    return 0;
}
