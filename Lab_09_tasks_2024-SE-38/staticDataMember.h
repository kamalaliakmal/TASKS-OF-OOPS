#include <iostream>
using namespace std;

class Counter {
private:
    static int count; // static data member
public:
    Counter() {
        count++; // increment whenever an object is created
    }

    static void showCount() { // static function to display count
        cout << "Total objects created = " << count << endl;
    }
};

// Definition of static data member (must be outside the class)
int Counter::count = 0;
