#include <iostream>
#include<cmath>
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
