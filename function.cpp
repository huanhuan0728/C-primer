//
//  function.cpp
//  C++primer
//
//  Created by xuhuan lu on 2023/11/17.
//

#include "function.hpp"
using namespace std;


void print_hello(void){
    cout << "hello\n";
}

void getinfo(void){
    
    int carrots;
    
    cout << "How many carrots do you have?" << endl;
    cin >> carrots;
    cout << "Here are two more.";
    carrots += 2;
    cout << "Now you have " << carrots << " carrots." << endl;
    
}

void sqrt_(void){
    
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


void strtype3(void){
    char charr1[20];
    char charr2[20] = "jaguar";
    string str1;
    string str2 = "panther";
    
    str1 = str2;
    strcpy(charr1, charr2);
    
    str1 += "paste";
    strcat(charr1, "juice");
    
    int len1 = str1.size();
    int len2 = strlen(charr1);
    
    cout << "The string " << str1 << " contains " << len1 << " charaters.\n";
    cout << "The string " << charr1 << "contains " << len2 << " charaters.\n";
    
}

void strtype4(){
    char charr[20];
    string str;
    
    cout << "Length of string in charr before input: "
    << strlen(charr) << endl;
    cout << " Length of string in str before input: "
    << str.size() <<endl;
    cout << "Enter another line of text:\n";
    cin.getline(charr, 20);
    cout << "You entered: " << str << endl;
    cout << "Length of string in str after input: "
    << str.size() << endl;
}


void structur(void){
    inflatable guest = {
        "Glorious Gloria",
        1.88,
        29.99
    };
    
    inflatable pal = {
        "Audicous Arthur",
        3.12,
        32.99
    };
    
    cout << "Expand your guest list with " << guest.name;
    cout << "and" << pal.name << "!\n";
    cout << "You can have both for $";
    cout << guest.price + pal.price << "!\n";
}


void arrstruc(void){
    inflatable guests[2] = {
        {"Bambi", 0.5, 21.99},
        {"God zilla", 2000, 565.99}
    };
    
    cout << "The guests " << guests[0].name << " and " << guests[1].name
    << "\nhave a combined volume of "
    << guests[0].volume + guests[1].volume << " ciboc feet .\n";
}


void pointer(void){
    int updata = 6;
    int *p_updata;
    p_updata = &updata;
    
    cout << "Values: updatas = " << updata;
    cout << ", p_updatas = " << *p_updata << endl;
    
    *p_updata = *p_updata+1;
    cout << "Now updates = " << updata << endl;
}


void init_ptr(void){
    int higgens = 5;
    int * pt = &higgens;
    
    cout << "Value of higgens = " << higgens
    << "; Address of higgens = " << &higgens << endl;
    cout << "Value of pt = " << *pt
    << "; Value of pt = " << pt <<endl;
}


void use_new(void){
    int nigth = 1001;
    int *pt = new int;
    *pt = 1001;
    
    cout << "night value  = ";
    cout << nigth << ": location = " << &nigth << endl;
    cout << " int ";
    cout << "value = " << *pt << ": location = " << pt << endl;
    double * pd = new double;
    * pd = 100001.0;
    
    cout << "double ";
    cout << "value = " << *pd << ": location = " << pd << endl;
    cout << "lication of pointer pd: " << &pd << endl;
    cout << "size of pt = " << sizeof(pt);
    cout << ": size of *pt = " << sizeof(*pt) << endl;
    cout << "size of pd = " << sizeof(pd);
    cout << ": size of *pd = " << sizeof(*pd) << endl;
}


void arraynew(void){
    double *p3 = new double [3];
    p3[0] = 0.2;
    p3[1] = 0.5;
    p3[2] = 0.8;
    cout << "p3[1] is " << p3[1] << "\n.";
    p3 = p3 + 1;
    cout << "Now p3[0] is " << p3[0] << " and";
    cout << "p3[1] is " << p3[1] << ".\n";
    p3 = p3 - 1;
    delete [] p3;
}


void addpntrs(void){
    double wages[3] = {1000.0, 2000.0, 3000.0};
    short stacks[3] = {3, 2, 1};
    
    double * pw = wages;
    short * ps = &stacks[0];
    
    cout << "pw = " << pw << ", *pw = " << *pw << endl;
    pw = pw + 1;
    cout << "add 1 to the pw pointer:\n";
    cout << "pw = " << pw << ", *pw = " << *pw << endl;
    cout << "ps = " << ps << ", *ps = " << *ps << endl;
    ps = ps + 1;
    cout << "add 1 to the ps pointer:\n";
    cout << "ps = " << ps << ", *ps = " << *ps << "\n\n";
    cout << "access two elements with array notation\n";
    cout << "stacks[0] = " << stacks[0] <<
    ", stack[1] = " << stacks[1] << endl;
    cout << "access two elements with pointer notation\n"
    << ", *(stacks + 1) = " << * (stacks + 1) << endl;
    cout << sizeof(wages) << " *(stacks + 1) " << endl;
    
    cout << sizeof(wages) << " = size of wages array\n";
    cout << sizeof(pw) << " = size of pw pointer\n";
    
}


void ptrstr(void){
    char animal[20] = "bear";
    const char * bird = "wern";
    char * ps;
    
    cout << animal << " and ";
    cout << bird << "\n";
    
    cout << "Enter a kind of animal: ";
    cin >> animal;
    
    ps = animal;
    cout << ps << "!\n";
    cout << "Before using strcpy():\n";
    cout << animal << " at " << (int *) animal << endl;
    cout << ps << " at " << (int *) animal << endl;
    
    ps = new char[strlen(animal) + 1];
    strcpy(ps, animal);
    cout << "After using strcpy(): \n";
    cout << animal << " at " << (int *) animal << endl;
    cout << ps << " at " << (int *) ps << endl;
    delete [] ps;
    
}


/*
 创建动态结构时，不能将成员运算符句点用于结构名，因为这种结构没有名称，只是知道它的地址。
 C++为这种情况提供了一个运算符(->)
 */
void newstrct(void){
    inflatable * ps = new inflatable;   // allot memory for structure
    cout << "Enter name of infaltable item: ";
    cin.get(ps->name, 20);
    cout << "Enter volume in cubic feet: ";
    cin >> (*ps).volume;
    cout << "Enter price: $";
    cin >> ps->price;
    cout << "Name: " << (*ps).name << endl; // methed 1
    cout << "Price: $" << ps->price << endl;    // method 2
    
    delete ps;
}
