#include <iostream>
#include <string>
using namespace std;

// ---------------- USER ----------------
class User {
protected:
    int userID;
    string name;
public:
    void login() { cout << "User logged in\n"; }
    void viewProfile() { cout << "User Profile\n"; }
};

// ---------------- CROP ----------------
class Crop {
private:
    int cropID;
    string name;
public:
    void viewCrop() { cout << "Crop details\n"; }
};

// ---------------- LANDPLOT ----------------
class LandPlot {
private:
    int plotID;
    double size;
    string location;
    Crop crop;   // Composition (Crop is part of LandPlot)
public:
    void viewStatus() { cout << "LandPlot with Crop\n"; }
};

// ---------------- EQUIPMENT ----------------
class Equipment {
private:
    int equipmentID;
    string name;
public:
    void viewEquipment() { cout << "Equipment details\n"; }
};

// ---------------- INVENTORY ----------------
class Inventory {
private:
    int itemID;
    string itemName;
public:
    void viewInventory() { cout << "Inventory details\n"; }
};

// ---------------- WEATHER ----------------
class WeatherModule {
private:
    double temperature;
    string forecast;
public:
    void showWeather() { cout << "Weather forecast\n"; }
};

// ---------------- FARMER ----------------
class Farmer : public User {   // Inheritance
private:
    int farmerID;
    string contactInfo;

    // Direct objects instead of pointers
    LandPlot landPlot;       
    Equipment equipment;    
    Inventory inventory;    
    WeatherModule weather;  
public:
    void addFarmer() { cout << "Farmer added\n"; }
    void viewFarmer() { cout << "Farmer details\n"; }
};

// ---------------- MAIN DEMO ----------------
int main() {
    Farmer f1;
    f1.login();
    f1.viewFarmer();

    return 0;
}
