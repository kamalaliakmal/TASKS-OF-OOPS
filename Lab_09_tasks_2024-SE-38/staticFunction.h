#include <iostream>
using namespace std;

class Counter {
private:
    static int count; // static data member
public:
    Counter() {
        count++; // increment whenever an object is created
    }

    static void print() { // static function to print count
        cout << "Total objects created so far = " << count << endl;
    }
};

// Definition of static data member
int Counter::count = 0;

