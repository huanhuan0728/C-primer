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
