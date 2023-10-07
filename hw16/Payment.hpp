//
//  Payment.hpp
//  hw16
//
//  Created by Дима on 04.10.23.
//

#ifndef Payment_hpp
#define Payment_hpp
#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;
class Payment{
    string name; //имя
    string surname; //отчество
    string vorname; //фамилия
    double salary; //оклад
    int year; //год поступления
    double bonusPercent; //процент надбавки
    double incomeTax; //подоходный налог
    int workedDays; //количество отработанных дней
    int workDays; //количество рабочих дней в месяце
    double paidSum; // начисленная сумма
    double amountWithheld; //удержанная сумма
    int yearAdmission; // год поступления
    
public:
    Payment();
    Payment(string n, string f, string v, double s, int y, double bonus, int work, int worked, double paid, int yearAdm);
    void input();
    double salaryPerDay(); //зарплата за день
    double accuredAmount(); //удержанная сумма
    double sumWithheld(); //удержанная сумма
    int standing(); //стаж
    double income_tax();  //подоходный налог
    double pensionFund(); //пенсионный фонд
    void print();
};

#endif /* Payment_hpp */
