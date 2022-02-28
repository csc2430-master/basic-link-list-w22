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

    cout << "Testing Get and Remove" << endl;
    cout << baby.Get(5) << endl;
    cout << baby.Get(4) << endl;
    cout << baby.Get(3) << endl;
    cout << baby.Get(2) << endl;
    cout << baby.Get(1) << endl;
    cout << baby.Get(0) << endl;
    cout << "- - - - - - - - - - - - - - " << endl;
    cout << baby.Remove(5) << endl;
    cout << baby.Remove(2) << endl;
    baby.Write(cout) << endl;
    cout << endl;



    return 0;
}
