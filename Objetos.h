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

        void setName();
        void setStatus();

};

class employee: private person, public setPerson{

    private:

        int identification;
        string occupation;
        float salary;
        string workSchedule;

    public:

        void getRegister();
        void setSalary();
        void setOccupation();
        void SetSchedule();


};

class client: private person, public setPerson{

    private:

        string account;
        int agency;
        double monthlyIncome;
        string profession;
        double accountBalance;

    public:

        void getRegister();
        void setAgency();
        void setIncome();
        void setProfession();
};

