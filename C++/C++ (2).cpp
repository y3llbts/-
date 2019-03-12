#include <iostream>
#include <stdio.h>
#include <stdfix.h>

using namespace std;

int srus = 0, suk = 0, susa = 0, scolor = 0, tmp = 0;

struct shoes {
    char type[15];
    int price;
    enum color{
        Yellow = 1,
        Blue = 2,
        Lightblue = 3,
        Green = 4,
        Red = 5,
        Orange = 6
    };
    union {
        int RUS, UK, USA;
    }shoessize;
    void input();
    void show();
    void warmshow();
};

void shoes::input() {
    cout << "Input type of shoes:\t";
    cin >> type;
    cout << "Input price of shoes ($):\t";
    cin >> price;
    cout << "Input foot size in RUSSIAN option:\t";
    cin >> shoessize.RUS;
    srus = shoessize.RUS;
    suk = srus - 32;
    susa = srus - 29;
    cout << "RUS\tUK\tUSA" << endl;
    cout << srus << "\t" << suk << "\t" << susa << endl;
    cout << "Input color of shoes:\t";
    cin >> scolor;
    cout << "=======================================\n";
}

void shoes::show() {
    cout << "Type: " << type << endl;
    cout << "Price: " << price << "$" << endl;
    cout << "Foot size: " << price << endl;
    cout << "RUS\tUK\tUSA" << endl;
    cout << srus << "\t" << suk << "\t" << susa << endl;
    switch (scolor) {
        case 1: cout << "Color: Yellow"; break;
        case 2: cout << "Color: Blue"; break;
        case 3: cout << "Color: Lightblue"; break;
        case 4: cout << "Color: Green"; break;
        case 5: cout << "Color: Red"; break;
        case 6: cout << "Color: Orange"; break;
        default: scolor = 0;
    }
    cout << "\n=======================================\n";
}

void shoes::warmshow() {
    cout << "SCOLOR" << tmp;
    if (tmp != 2 && tmp != 3) {
        cout << "Type: " << type << endl;
        cout << "Price: " << price << "$" << endl;
        cout << "Foot size: " << price << endl;
    } else {cout << "\nIn this case, we have`nt shoes with warm colors." << endl;}
    cout << "=======================================\n";
}

int main() {
    int shoesnum;
    int i = 0;
    cout << "\n================\tINPUT SHOES QUANTITY\t================\n";
    cin >> shoesnum;
    shoes inform[shoesnum];
    cout << "\n================\tINPUT SHOES IN DATABASE\t================\n";
    for (i = 0; i < shoesnum; i++) inform[i].input();
    cout << "\n================\tALL SHOES\t================\n";
    for (i = 0; i < shoesnum; i++) inform[i].show();
    cout << "\n================\tSHOES WITH WARM COLORS\t================\n";
    for (i = 0; i < shoesnum; i++) inform[i].warmshow();
    return 0;
}
