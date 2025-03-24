#include<iostream>
using namespace std;
class PatientAccount{
    private:
        double charges;
        int days;
        double dailyRate;
    public:
        PatientAccount(){
            charges=0.0;
            days=0;
            dailyRate=1000.0;
        }
        void setCharges(double c){
            charges = c;
        }
        void setDays(int d){
            days = d;
            charges = days * dailyRate;
        }
        void setDailyRate(double r){
            dailyRate = r;
        }
        double getCharges() const{
            return charges;
        }
        int getDays() const{
            return days;
        }
        double getDailyRate() const{
            return dailyRate;
        }
        void addCharges(double c){
            charges += c;
        }

};
class Surgery{
    private:
    double chargesofSurgery[5]={1000,2000,3000,4000,5000};
    public:
    Surgery(){
        
    }
    void performSurgery(PatientAccount &p, int SurgeryType){
        p.addCharges(chargesofSurgery[SurgeryType]);
    }
};
class Pharmacy{
    private:
    double chargesofMedicine[5]={100,200,300,400,500};
    public:
    Pharmacy(){
        
    }
    void buyMedicine(PatientAccount &p, int MedicineType){
        p.addCharges(chargesofMedicine[MedicineType]);
    }
};

int main(){
    PatientAccount p;
    cout<<"Enter the number of days the patient stayed in the hospital: ";
    int days;
    cin>>days;
    p.setDays(days);
    Surgery s;
    cout<<"Enter the type of surgery performed on the patient: 0-4";
    int SurgeryType;
    cin>>SurgeryType;
    s.performSurgery(p,SurgeryType);
    Pharmacy ph;
    cout<<"Enter the type of medicine bought by the patient: 0-4";
    int MedicineType;
    cin>>MedicineType;
    ph.buyMedicine(p,MedicineType);
    cout<<"Total charges: "<<p.getCharges()<<endl;
    return 0;
}