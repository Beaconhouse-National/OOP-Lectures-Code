#ifndef PATIENTACCOUNT_H
#define PATIENTACCOUNT_H
class PatientAccount{
    private:
        double charges;
        int days;
        double dailyRate;
    public:
        PatientAccount();
        void setCharges(double c);
        void setDays(int d);
        void setDailyRate(double r);
        double getCharges() const;
        int getDays() const;
        double getDailyRate() const;
        double getChargesPerDay() const;
};
#endif