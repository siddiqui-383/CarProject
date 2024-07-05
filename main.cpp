#include <iostream>
#include <string>

std::string names[] = { "Honda", "Toyota", "Mercedes", "KIA", "BMW" };

struct car {
public:
    std::string name;
    int model;
    int engine;

    car() {
        name = "";
        model = 0;
        engine = 0;
    }
};

void setCar(car* A) {
    int models[5] = { 2024,2022,2010,2020,2018 };
    int engines[5] = { 1800, 1600, 2000, 1600, 1800 };
    for (int i = 0; i < 5; i++) {
        (A + i)->model = models[i];
        (A + i)->engine = engines[i];
        (A + i)->name = names[i];
    }
}

void getCar(car* A, int n) {
    std::cout << "The attributes of Car " << n << " are: " << std::endl;
    std::cout << ' ' << "Name:" << (A + n - 1)->name << std::endl;
    std::cout << ' ' << "Model:" << (A + n - 1)->model << std::endl;
    std::cout << ' ' << "Engine CC:" << (A + n - 1)->engine << std::endl;
    std::cout << std::endl;
}

int main() {
    car myCar[5];
    int n;
    for (int i = 0; i < 5; i++) {
        std::cout << i+1 <<". " << names[i] << std::endl;
    }
    std::cout << " Please Enter the car number: ";
    std::cin >> n;
    setCar(myCar);
    getCar(myCar, n);
}