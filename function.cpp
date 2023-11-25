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

void arrayone(void){
    using namespace std;
    
    int yams[3];
    yams[0] = 7;
    yams[1] = 8;
    yams[2] = 6;
    
    int yamcost[3] = {20, 30, 5};
    cout << "Total yams = ";
    cout << yams[0] + yams[1] + yams[2] << " yams cost ";
    cout << "The package with " << yams[1] << " yams costs";
    
}


void instr1 (void){
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];
    
    cout << "Enter your name: \n";
    cin >> name;
    cout << "Enter your favorite dessert:\n";
    cin >> dessert;
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";
}


void insert2 (void){
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];
    
    cout << "Enter your name: \n";
    cin.getline(name, ArSize);
    cout << "Enter your favorite dessert:\n ";
    cin.getline(dessert, ArSize);
    cout << "I have some delicious " << dessert;
    cout << "for you, " << name << ".\n";
    
}


void instr3 (void){
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];
    
    cout << "Enter your name: \n";
    cin.get(name, ArSize).get();
    cout << "Enter your favorite dessert:\n ";
    cin.get(dessert, ArSize).get();
    cout << "I have some delicious " << dessert;
    cout << "for you, " << name << ".\n";

}


void numstr (void){
    using namespace std;
    cout << "What year was your house built?\n";
    int year;
//    cin >> year;
// cin读取year之后会把换行符留在输入队列中。后面的cin.getline()读取到换行符之后会认为是一个空行，并将一个空字符赋值给address数组。
    // 方法一：cin.get()跳过换行符
//    cin >> year;
//    cin.get();

    //  方法二：利用表达式cin >> 返回cin对象，将调用拼接起来：
    (cin >> year).get();
    
    cout << "What is its street address?\n";
    char address[80];
    cin.getline(address, 80);

}
