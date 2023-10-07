//
//  Payment.cpp
//  hw16
//
//  Created by Дима on 04.10.23.
//

#include "Payment.hpp"
#include <string>
#include <iostream>
using namespace std;

Payment:: Payment(){
    name = ' ';
    surname = ' ';
    vorname = ' ';
    salary = 0;
    year = 0;
    yearAdmission = 0;
    bonusPercent = 0;
    incomeTax = 0;
    workedDays = 0;
    workDays = 0;
    paidSum = 0;
    amountWithheld = 0;
    
}

Payment:: Payment(string n, string s, string v, double sal, int y, double bonus, int work, int worked, double paid, int yearAdm){
    name = n;
    surname = s;
    vorname = v;
    salary = sal;
    year = y;
    bonusPercent = bonus;
    workedDays = worked;
    workDays = work;
    paidSum = paid; //начисленная сумма
    yearAdmission = yearAdm; //год поступления
}

void Payment:: input(){
    cout << "enter a name: ";
    cin >> name;
    cout << "enter surname: ";
    cin >> surname;
    cout << "enter vorname: ";
    cin >> vorname;
    cout << "enter salary: ";
    cin >> salary;
    cout << "year the employee started working: ";
    cin >> year;
    cout << "enter bonus percentage: ";
    cin >> bonusPercent;
    cout << "count of working days this month: ";
    cin >> workDays;
    cout << "number of days worked: ";
    cin >> workedDays;
}


double Payment:: salaryPerDay(){ //зарплата за день
    double payAmount = (salary / workedDays);
    return payAmount;
}

double Payment:: accuredAmount(){ //вычисляем начисленную сумму
    paidSum = salaryPerDay() * workDays;
    return paidSum;
}

double Payment:: sumWithheld(){ //удержанная сумма
    amountWithheld = pensionFund() + income_tax();
    return amountWithheld;
}

int Payment:: standing(){ //стаж
    int stand = year - yearAdmission;
    return stand;
}

double Payment:: income_tax(){ //подоходный налог
    incomeTax = ((salaryPerDay() * workedDays) * 13) / 100;
        return incomeTax;
}


double Payment:: pensionFund(){ //пенсионный фонд
    double fund = ((salaryPerDay() * workedDays) * 1) / 100;
    return fund;

}



void Payment:: print(){

        cout << "INFO:" << endl;
        cout << "name: " << name << endl;
        cout << "surname: " << surname << endl;
        cout << "vorname: " << vorname << endl;
        cout << "started working: " << year << endl;
        cout << "salary: " << salary << endl;
        cout << "bonus percentage: " << bonusPercent << endl;
        cout << "income tax: " << income_tax() << endl;
        cout << "Standing: " << standing() << endl;
        cout << "Amount withheld: " << sumWithheld() << endl;
        cout << "Accrued amount: " << accuredAmount() << endl;
}

