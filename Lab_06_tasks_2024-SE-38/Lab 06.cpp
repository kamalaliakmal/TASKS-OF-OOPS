#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    int inches;

public:
    // Constructor
    Distance(int f, int i) {
        feet = f;
        inches = i;
    }

    // Overload == operator
    bool operator==(Distance d) {
        return (feet == d.feet && inches == d.inches);
    }
};

int main() {
    Distance d1(5, 8);
    Distance d2(5, 8);
    Distance d3(6, 2);

    if (d1 == d2)
        cout << "d1 and d2 are equal" << endl;
    else
        cout << "d1 and d2 are not equal" << endl;

    if (d1 == d3)
        cout << "d1 and d3 are equal" << endl;
    else
        cout << "d1 and d3 are not equal" << endl;

    return 0;
}

