#include <iostream>
#include <vector>
using namespace std;

// private: // only the class itself can access these variables and functions
// protected: // only the class itself and derived classes can access these variables and functions
// public: // anyone can access these variables and functions

class List
{
public:
    vector<string> list;
    string name;

    void print_menu();
    void add_item();
    void delete_item();
    void print_list();
};