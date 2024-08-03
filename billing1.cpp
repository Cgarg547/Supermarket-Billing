#include <iostream>
#include <fstream>

using namespace std;

class shopping {
    private:
        int pcode;
        float price;
        float dis;
        string pname;

    public: 
        void menu();
        void administrator();
        void buyer();
        void add();
        void edit();
        void remove();
        void list();
        void receipt();
};

void shopping :: menu(){
    int choice;
    string email;
    string password;

    cout << "\t\t\t\t_______________________________________________\n";
    cout << "\t\t\t\t_______________________________________________\n";
    cout << "\t\t\t\t            Supermarket Main Menu              \n";
    cout << "\t\t\t\t_______________________________________________\n";
    cout << "\t\t\t\t_______________________________________________\n";
    cout << "\t\t\t\t                                               \n";
    cout << "\t\t\t\t|    1) Administrator     |\n";
    cout << "\t\t\t\t                          |\n";
    cout << "\t\t\t\t|    1) Buyer             |\n";
    cout << "\t\t\t\t                          |\n";
    cout << "\t\t\t\t|    1) Exit              |\n";
    cout << "\n\t\t\t   Please select:";
    cin >> choice;

    switch(choice){
        case 1:
            cout << "\t\t\t Please Login \n";
            cout << "\t\t\t Enter Email  \n";
            cin >> email;
            cout << "\t\t\t Password        \n";
            cin >> password;
    }



}