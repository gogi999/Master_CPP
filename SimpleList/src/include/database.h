#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

class Database
{
public:
    // Constructor
    Database()
    {
    }
    // Destructor
    ~Database()
    {
    }

    vector<string> list;
    string name;

    void write(vector<string> list);
    void read();
};