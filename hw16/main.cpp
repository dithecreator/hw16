//
//  main.cpp
//  hw16
//
//  Created by Дима on 04.10.23.
//

#include <iostream>
#include "Payment.hpp"
using namespace std;
int main(int argc, const char * argv[]) {
    Payment person;
    person.input();
    cout << endl;
    person.print();
}
