
#include <iostream>
#include <string>
using namespace std;

class Company {
public:
    string companyName;
    int companySize;
    bool isSmoker;
    int numberOfSigarettes;

    Company() : companyName("Default Company"), companySize(5), isSmoker(true), numberOfSigarettes(0) {}

    Company(string name, int size, bool smoker, int sigarettes) : companyName(name), companySize(5), isSmoker(smoker), numberOfSigarettes(sigarettes) {}

    void printCompanyInfo() {
        cout << "Company: " << companyName << ", Age: " << companySize << ", Smoker: " << (isSmoker ? "Yes" : "No") << ", Sigarettes: " << numberOfSigarettes << endl;
    }
};

class Employee {
public:
    string employeeName;
    int employeeAge;
    bool likeSing;
    int numberOfSongs;

    Employee() : employeeName("Default Employee"), employeeAge(0), likeSing(true), numberOfSongs(0) {}

    Employee(string name, int age, bool sing, int songs) : employeeName(name), employeeAge(age), likeSing(sing), numberOfSongs(songs) {}

    void printEmployeeInfo() {
        cout << "Employee: " << employeeName << ", Age: " << employeeAge << ", Sing: " << (likeSing ? "Yes" : "No") << ", Song: " << numberOfSongs << endl;
    }
};

class Vehicle {
public:
    string vehicleType;
    int vehicleYear;
    bool isAthlete;
    int numberOfAwards;

    Vehicle() : vehicleType("Default Vehicle"), vehicleYear(0), isAthlete(true), numberOfAwards(0) {}

    Vehicle(string type, int year, bool athlete, int awards) : vehicleType(type), vehicleYear(year), isAthlete(athlete), numberOfAwards(awards) {}

    void printVehicleInfo() {
        cout << "Vehicle Type: " << vehicleType << ", Year: " << vehicleYear << ", Athlete: " << (isAthlete ? "true" : "false") << ", Awards: " << numberOfAwards << endl;
    }
};

class Truck : public Vehicle {
public:
    float cargoCapacity;
    int numberOfAxles;

    Truck() : cargoCapacity(0.0), numberOfAxles(2) {}

    Truck(float capacity, int axles, string type, int year, bool athlete, int awards) : cargoCapacity(capacity), numberOfAxles(axles), Vehicle(type, year, athlete, awards) {}

    Truck(float capacity, int axles, Vehicle& vehicle) : cargoCapacity(capacity), numberOfAxles(axles), Vehicle(vehicle) {}

    void printTruckInfo() {
        cout << "Cargo Capacity: " << cargoCapacity << " tons, Number of Axles: " << numberOfAxles << endl;
    }
};

class Car : public Vehicle {
public:
    int numberOfSeats;
    string fuelType;

    Car() : numberOfSeats(4), fuelType("Gasoline") {}

    Car(int seats, string fuel, string type, int year, bool athlete, int awards) : numberOfSeats(seats), fuelType(fuel), Vehicle(type, year, athlete, awards) {}


    Car(int seats, string fuel, Vehicle& vehicle) : numberOfSeats(seats), fuelType(fuel), Vehicle(vehicle) {}

    void printCarInfo() {
        cout << "Number of Seats: " << numberOfSeats << ", Fuel Type: " << fuelType << endl;
    }
};

int main() {
    Company c1("Feature", 13, true, 4);
    c1.printCompanyInfo();

    Employee e1("Crocks", 25, true, 7);
    e1.printEmployeeInfo();

    Vehicle v1("Toyota", 23, false, 3);
    v1.printVehicleInfo();

    Truck t1(3.0, 5, "Truck", 2017, false, 1);
    t1.printTruckInfo();
    t1.printVehicleInfo();

    Car car1(5, "Super", "SUV", 2019, false, 6);
    car1.printCarInfo();
    car1.printVehicleInfo();

    return 0;
}