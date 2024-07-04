#include <iostream>
#include <string>

struct car {
public:
    std::string name;
    int model;
    int engine;
};

void setCar(car* A) {
    std::string names[] = {"Honda", "Toyota", "Mercedes", "KIA", "BMW"}; 
    int models[5] = {2024,2022,2010,2020,2018};
    int engines[5] ={1800, 1600, 2000, 1600, 1800} ;
    for (int i = 0; i < 5; i++) {
        (A + i)-> model = models[i];
        (A + i)->engine = engines[i];
        (A + i)->name = names[i];
    }
}

void getCar(car* A, int n) {
    for (int i = 0; i < sizeof(A)/sizeof(A[0]); i++) {
        if(i+1 == n){
            std::cout << "The attributes of Car " << i << " are: " << std::endl;
            std::cout << ' ' << A->name << std::endl;
            std::cout << ' ' << A->model << std::endl;
            std::cout << ' ' << A->engine << std::endl;
            std::cout << std::endl;
        }
        
    }
    
}

int main() {
    car myCar[10];
    int n;
    std::cout<< " Please Enter the car number: ";
    std::cin>>n;
    setCar(myCar);
    getCar(myCar, n);
}