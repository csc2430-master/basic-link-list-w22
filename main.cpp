#include <iostream>

#include "linked_list.h"

using std::cout;
using std::endl;

int main() {
    LinkedList baby;
    cout << "Output Empty List" << endl;
    cout << "Size = " << baby.Size() << endl;
    baby.Write(cout);
    cout << endl;

    baby.AddToTop(4);
    baby.AddToTop(1);
    baby.AddToTop(7);
    baby.AddToTop(3);
    baby.AddToTop(5);
    cout << "Output List with Stuff" << endl;
    cout << "Size = " << baby.Size() << endl; // 5
    baby.Write(cout); // 5 3 7 1 4
    cout << endl;


    return 0;
}
