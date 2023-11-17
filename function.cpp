//
//  function.cpp
//  C++primer
//
//  Created by xuhuan lu on 2023/11/17.
//

#include "function.hpp"

void print_hello(void){
    using namespace std;
    cout << "hello\n";
}

void getinfo(void){
    using namespace std;
    
    int carrots;
    
    cout << "How many carrots do you have?" << endl;
    cin >> carrots;
    cout << "Here are two more.";
    carrots += 2;
    cout << "Now you have " << carrots << " carrots." << endl;
    
}

void sqrt_(void){
    using namespace std;
    
    double area;
    cout << "Enter the floor area, in square feet, of your home: ";
    cin >> area;
    double side;
    side = sqrt(area);
    cout << "That's the equivalent of a square " << side
    << "feet to the side." << endl;
    
    cout << "How fascinatig!" << endl;
    
}
