#include <iostream>
#include <string>
using namespace std;


class person{
    
    protected:
        
        string name;
        string cpf;
        string dateBirth;
        string status;

};

class setPerson: private person{
    
    protected:

        void setName(string name);
        void setStatus(string status);

};

class employee: private person, public setPerson{

    private:

        long int identification;
        string occupation;
        float salary;
        string workSchedule;

    public:

        employee(string name, string cpf, string dateBirth, string status, long int identification, string occupation, float salary, string workSchedule);
        
        void getRegister(string name, string cpf, string dateBirth, string status, long int identification, string occupation, float salary, string workSchedule);
        
        void setOccupation(string occoupation);
        void setSalary(float salary);
        void SetSchedule(string workSchedule);


};

class client: private person, public setPerson{

    private:

        string account;
        int agency;
        double monthlyIncome;
        string profession;
        double accountBalance;

    public:

        client(string name, string cpf, string dateBirth, string status, string account, int agency, double monthlyIncome, string profession, double accountBalance);

        void getRegister(string name, string cpf, string dateBirth, string status, string account, int agency, double monthlyIncome, string profession, double accountBalance);
        
        void setAgency(int agency);
        void setIncome(double monthlyIncome);
        void setProfession(string profession);
};