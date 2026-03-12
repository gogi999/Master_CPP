#include <iostream>
#include <vector>
using namespace std;

// Function prototypes
void print_menu(string name);
void print_list();
void add_item();
void delete_item();

// Global variables
vector<string> list;
string name;
// Main function
int main(int arg_count, char *args[])
{

    if (arg_count > 1)
    {
        name = string(args[1]);
        print_menu(name);
    }
    else
    {
        cout << "Username not supplied... Exiting the program!!!" << endl;
    }
    return 0;
}

// Function definitions
void print_menu(string name)
{
    int choice;

    cout << "***************\n";
    cout << "1 - Print list.\n";
    cout << "2 - Add to list.\n";
    cout << "3 - Delete from list.\n";
    cout << "4 - Exit.\n";
    cout << "Enter your choice and press enter/return.\n";

    cin >> choice;

    if (choice == 4)
    {
        exit(0);
    }
    else
    {
        cout << "Sorry choice hasn't been implemented!!!\n";
    }
}

void add_item()
{
    cout << "\n\n\n\n\n\n\n\n\n";
    cout << "*** Add Item ***\n";
    cout << "Type in an item and press enter: ";
    string item;
    cin >> item;

    list.push_back(item);
    cout << "Item added to the list!!!\n\n\n\n\n";
    cin.clear();

    print_menu(name);
}

void delete_item()
{
    cout << "\n\n\n\n\n\n\n\n\n";
    cout << "*** Delete Item ***\n";
    cout << "Slecet an item number to delete\n";

    if (list.size())
    {
        for (int i = 0; i < list.size(); i++)
        {
            cout << i << ": " << list[i] << endl;
        }
    }
    else
    {
        cout << "No item in the list or to delete!!!\n";
    }

    print_menu(name);
}
