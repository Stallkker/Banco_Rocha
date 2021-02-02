#pragma once
#include <iostream>
#include <string>
using namespace std;



class employee{

    private:

        string name;
        string cpf;
        string dateBirth;
        string status;
        string occupation;
        float salary;
        string workSchedule;

    public:

        employee();
        
        bool getName(string name);
        bool getCpf(string cpf);
        bool getDateBirth(string dateBirth);
        string getStatus(string status);
        bool getOccupation(string occoupation);
        bool getSalary(float salary);
        string getSchedule(string workSchedule);


        bool setOccupation(string occoupation);
        bool setSalary(float salary);
        string setSchedule(string workSchedule);
        string setName(string name, string reason);
        string setStatus(string status);
        
        void employeeReset();

        void showDataEmployee();
};

employee::employee(){
    name = "";
    cpf = "";
    dateBirth = "";
    status = "";
    occupation = "";
    salary = NULL;
    workSchedule = "";
}

bool employee::getName(string name){

    this->name = name;
    
    if(this->name.compare(name) == 0){
        return true;

    }else{
        return false;
    }
}

bool employee::getCpf(string cpf){

    this->cpf = cpf;
    
    if(this->cpf.compare(cpf) == 0){
        return true;

    }else{
        return false;
    }
}

bool employee::getDateBirth(string dateBirth){

    this->dateBirth = dateBirth;
    
    if(this->dateBirth.compare(dateBirth) == 0){
        return true;

    }else{
        return false;
    }
}

string employee::getStatus(string status){

    string availableStatus1 = "Ativo";
    string availableStatus2 = "Afastado";
    string availableStatus3 = "Desligado";

    if(status.compare(availableStatus1) == 0){
        this->status = status;
        return "status adicionado";

    }else if(status.compare(availableStatus2) == 0){
        this->status = status;
        return "status adicionado";

    }else if(status.compare(availableStatus3) == 0){
        this->status = status;
        return "status adicionado";

    }else{
        return "status indisponível";

    }
}

bool employee::getOccupation(string occoupation){
        this->occupation = occupation;
    
    if(this->occupation.compare(occupation) == 0){
        return true;

    }else{
        return false;
    }
}

bool employee::getSalary(float salary){
    this->salary = salary;
    
    if(this->salary == salary){
        return true;

    }else{
        return false;
    }
}

string employee::getSchedule(string workSchedule){

    string availableTime1 = "08:00 / 16:00";
    string availableTime2 = "10:00 / 18:00";

    if(workSchedule.compare(availableTime1) == 0 || workSchedule.compare(availableTime2) == 0){
        this->workSchedule = workSchedule;
        return "definido horário de trabalho";

    }else{
        return "horário indisponivel";
    }

}

bool employee::setOccupation(string occoupation){

    this->occupation = occupation;

    if(this->occupation.compare(occupation) == 0){
        return true;

    }else{
        return false;
    }

}

bool employee::setSalary(float salary){

    this->salary = salary;

    if(this->salary == salary){
        return true;

    }else{
        return false;
    }

}

string employee::setSchedule(string workSchedule){

    string availableTime1 = "08:00 / 16:00";
    string availableTime2 = "10:00 / 18:00";

    if(workSchedule.compare(availableTime1) == 0 || workSchedule.compare(availableTime2) == 0){
        this->workSchedule = workSchedule;
        return "efetuada a troca de horário";

    }else{
        return "horário indisponivel";
    }
}

string employee::setName(string name, string reason){

    string reason1 = "Troca de nome";
    string reason2 = "Casamento";
    string reason3 = "Estrangeiro";
    string reason4 = "Mudança de sexo";
    string reason5 = "Proteção";

    if(reason.compare(reason1) == 0 || reason.compare(reason2) == 0){
        
        this->name = name;

        return "motivo aceito";
        
    }else if(reason.compare(reason3) == 0 || reason.compare(reason4) == 0 || reason.compare(reason5) == 0){
        
        this->name = name;

        return "motivo aceito";

    }else{
        
        return "motivo invalido";
    
    }

}

string employee::setStatus(string status){

    string availableStatus1 = "Ativo";
    string availableStatus2 = "Afastado";
    string availableStatus3 = "Desligado";

    if(status.compare(availableStatus1) == 0){
        this->status = status;
        return "status adicionado";

    }else if(status.compare(availableStatus2) == 0){
        this->status = status;
        return "status adicionado";

    }else if(status.compare(availableStatus3) == 0){
        this->status = status;
        return "status adicionado";

    }else{
        return "status indisponível";

    }

}

void employee::showDataEmployee(){
    cout << "Nome: "<< name << endl;
    cout << "CPF: "<< cpf << endl;
    cout << "Ano de nascimento: "<< dateBirth << endl;
    cout << "Status: "<< status << endl;
    cout << "Cargo: " << occupation << endl;
    cout << "Salário: " << salary << endl;
    cout << "Horário de trabalho: " << workSchedule << endl << endl;
}

void employee::employeeReset(){
    name = "";
    cpf = "";
    dateBirth = "";
    status = "";
    occupation = "";
    salary = 0;
    workSchedule = "";
}






class client{

    private:

        string name;
        string cpf;
        string dateBirth;
        string status;
        string account;
        int agency;
        double monthlyIncome;
        string profession;

    public:

        client();

        bool getName(string name);
        bool getCpf(string cpf);
        bool getDateBirth(string dateBirth);
        string getStatus(string status);
        bool getAccount(string account);
        string getAgency(int agency);
        bool getMonthlyIncome(double monthlyIncome);
        bool getProfession(string profession);

        string setAgency(int agency, int change);
        bool setIncome(double monthlyIncome);
        bool setProfession(string profession);
        string setName(string name, string reason);
        string setStatus(string status);
        
        void customerReset();

        void showData();
};

client::client(){
    name = "";
    cpf = "";
    dateBirth = "";
    status = "";
    account = "";
    agency = NULL;
    monthlyIncome = NULL;
    profession = "";
}

bool client::getName(string name){

    this->name = name;
    
    if(this->name.compare(name) == 0){
        return true;

    }else{
        return false;
    }
}

bool client::getCpf(string cpf){

    this->cpf = cpf;
    
    if(this->cpf.compare(cpf) == 0){
        return true;

    }else{
        return false;
    }
}

bool client::getDateBirth(string dateBirth){

    this->dateBirth = dateBirth;
    
    if(this->dateBirth.compare(dateBirth) == 0){
        return true;

    }else{
        return false;
    }
}

string client::getStatus(string status){

    string availableStatus1 = "Ativo";
    string availableStatus2 = "Bloquedo";
    string availableStatus3 = "Inativo";

    if(status.compare(availableStatus1) == 0){
        this->status = status;
        return "status adicionado";

    }else if(status.compare(availableStatus2) == 0){
        this->status = status;
        return "status adicionado";

    }else if(status.compare(availableStatus3) == 0){
        this->status = status;
        return "status adicionado";

    }else{
        return "status indisponível";

    }
}

bool client::getAccount(string account){

    this->account = account;
    
    if(this->account.compare(account) == 0){
        return true;

    }else{
        return false;
    }
}

string client::getAgency(int agency){

    int agencies1 = 1111;
    int agencies2 = 1234;
    int agencies3 = 4567;
    int agencies4 = 8910;

    if(agency == agencies1 || agency == agencies2 || agency == agencies3 || agency == agencies4){
        if(agency < 10000 || agency > 999){
            this->agency = agency;
            return "agencia adicionada";

        }else{
            return "agencia não encontrada";

        }
    }else{
        return "agencia indisponível";

    }

}

bool client::getMonthlyIncome(double monthlyIncome){

    this->monthlyIncome = monthlyIncome;
    
    if(this->monthlyIncome == monthlyIncome){
        return true;

    }else{
        return false;
    }
}

bool client::getProfession(string profession){

    this->profession = profession;
    
    if(this->profession.compare(profession) == 0){
        return true;

    }else{
        return false;
    }
}

string client::setAgency(int agency, int change){

    int agencies1 = 1111;
    int agencies2 = 1234;
    int agencies3 = 4567;
    int agencies4 = 8910;

    if(agency == agencies1 || agency == agencies2 || agency == agencies3 || agency == agencies4){
        if(agency < 10000 || agency > 999){
            
            if(change == agencies1 || change == agencies2 || change == agencies3 || change == agencies4){
                if(change < 10000 || change > 999){
                    this->agency = change;
                    return "agencia trocada";

                }else{
                    return "agencia não encontrada";
                }
            }else{
                return "agencia indisponível";

            }

        }else{
            return "agencia não encontrada";

        }

    }else{
        return "agencia indisponível";

    }

}

bool client::setIncome(double monthlyIncome){

    this->monthlyIncome = monthlyIncome;
    
    if(this->monthlyIncome == monthlyIncome){
        return true;
    }else{
        return false;
    }

}

bool client::setProfession(string profession){

    this->profession = profession;
    
    if(this->profession.compare(profession) == 0){
        return true;
    }else{
        return false;
    }

}

string client::setName(string name, string reason){

    string reason1 = "Troca de nome";
    string reason2 = "Casamento";
    string reason3 = "Estrangeiro";
    string reason4 = "Mudança de sexo";
    string reason5 = "Proteção";

    if(reason.compare(reason1) == 0 || reason.compare(reason2) == 0){
        
        this->name = name;

        return "motivo aceito";
        
    }else if(reason.compare(reason3) == 0 || reason.compare(reason4) == 0 || reason.compare(reason5) == 0){
        
        this->name = name;

        return "motivo aceito";

    }else{
        
        return "motivo invalido";
    
    }

}

string client::setStatus(string status){

    string availableStatus1 = "Ativo";
    string availableStatus2 = "Bloquedo";
    string availableStatus3 = "Inativo";

    if(status.compare(availableStatus1) == 0){
        this->status = status;
        return "status adicionado\n\n";

    }else if(status.compare(availableStatus2) == 0){
        this->status = status;
        return "status adicionado\n\n";

    }else if(status.compare(availableStatus3) == 0){
        this->status = status;
        return "status adicionado\n\n";

    }else{
        return "status indisponível\n\n";

    }
}

void client::showData(){
    cout << "Nome: "<< name << endl;
    cout << "CPF: "<< cpf << endl;
    cout << "Ano de nascimento: "<< dateBirth << endl;
    cout << "Status: "<< status << endl;
    cout << "Conta: "<< account << endl;
    cout << "Agencia: "<< agency << endl;
    cout << "Renda mensal: "<< monthlyIncome << endl;
    cout << "Profissão: "<< profession << endl << endl;
}

void client::customerReset(){
    name = "";
    cpf = "";
    dateBirth = "";
    status = "";
    account = "";
    agency = 0;
    monthlyIncome = 0;
    profession = "";
}