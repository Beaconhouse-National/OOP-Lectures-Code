#include "PatientAccount.h"
#include<iostream>
using namespace std;
PatientAccount::PatientAccount(){
    charges = 0;
    days = 0;
    dailyRate = 0;
}
void PatientAccount::setCharges(double c){
    charges = c;
}
void PatientAccount::setDays(int d){
    days = d;
}
void PatientAccount::setDailyRate(double r){
    dailyRate = r;
}
double PatientAccount::getCharges() const{
    return charges;
}
int PatientAccount::getDays() const{
    return days;
}
double PatientAccount::getDailyRate() const{
    return dailyRate;
}
double PatientAccount::getChargesPerDay() const{
    return charges / days;
}
