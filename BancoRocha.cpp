#include <iostream>
#include <string>
#include <locale>
#include <conio.h>
#define ENTER  0x0D
#include "Objetos.h"
using namespace std;

client bankCustomer;
employee bankEmployee;

int attempts = 0;

bool accessConfirmation(string password);
void menuBankName();
void bankName();
void mainMenu();

void clientMenu(int option);
void registerCustomer();
void changeName();
void changeStatus();
void changeAgency();
void changeMonthlyIncome();
void changeProfession();
void seeCustumer();

void employeeMenu(int option);
void registerCustomerEmployee();
void changeNameEmployee();
void changeStatusEmployee();
void changeSchedule();
void changeSalary();
void changeOccupation();
void seeEmployee();

void changeNameEmployee(){

    string name;
    string reason;

    bankName();
    cout << "|-----------------------------------------------|" << endl;
    cout << "|                Digite o novo nome             |" << endl;
    cout << "|-----------------------------------------------|" << endl;
    cout << "|Nome: ";
    cin >> name;
    system("cls");

    bankName();
    cout << "|-----------------------------------------------|" << endl;
    cout << "|              Digite o motivo da troca         |" << endl;
    cout << "|-----------------------------------------------|" << endl;
    cout << "|Motivo: ";
    cin >> reason;
    system("cls");

    cout <<bankEmployee.setName(name, reason);
    system("pause");
    system("cls");
    mainMenu();

}

void changeStatusEmployee(){

    string status;

    bankName();
    cout << "|-----------------------------------------------|" << endl;
    cout << "|               Digite o novo status            |" << endl;
    cout << "|-----------------------------------------------|" << endl;
    cout << "|Status: ";
    cin >> status;
    system("cls");

    cout << bankEmployee.setStatus(status) << endl << endl;
    system("pause");
    system("cls");
    mainMenu(); 

}

void changeSchedule(){

    string schedule;

    bankName();
    cout << "|-----------------------------------------------|" << endl;
    cout << "|               Digite o novo horário           |" << endl;
    cout << "|-----------------------------------------------|" << endl;
    cout << "|Horário: ";
    cin >> schedule;
    system("cls");

    cout << bankEmployee.setSchedule(schedule) << endl << endl;
    system("pause");
    system("cls");
    mainMenu(); 

}

void changeSalary(){

    float salary;

    bankName();
    cout << "|-----------------------------------------------|" << endl;
    cout << "|               Digite o novo salário           |" << endl;
    cout << "|-----------------------------------------------|" << endl;
    cout << "|Salário: ";
    cin >> salary;
    system("cls");

    if(bankEmployee.setSalary(salary) == true){
        cout << "troca efetuada com sucesso!" << endl << endl;
        system("pause");
        system("cls");
        mainMenu();
    }else{
        cout << "Erro na troca, contate o ADM!" << endl << endl;
        system("pause");
        system("cls");
        mainMenu();
    }
}

void changeOccupation(){

    string occupation;

    bankName();
    cout << "|-----------------------------------------------|" << endl;
    cout << "|                Digite o novo cargo            |" << endl;
    cout << "|-----------------------------------------------|" << endl;
    cout << "|Cargo: ";
    cin >> occupation;
    system("cls");

    if(bankEmployee.setOccupation(occupation) == true){
        cout << "troca efetuada com sucesso!" << endl << endl;
        system("pause");
        system("cls");
        mainMenu();
    }else{
        cout << "Erro na troca, contate o ADM!" << endl << endl;
        system("pause");
        system("cls");
        mainMenu();
    }

}

void seeEmployee(){

    bankName();
    cout << "|-----------------------------------------------|" << endl;
    cout << "|               dados do funcionário            |" << endl;
    cout << "|-----------------------------------------------|" << endl;
    bankEmployee.showDataEmployee();
    system("pause");
    system("cls");
    mainMenu();

}


void registerCustumerEmployee(){

    string name;
    string cpf;
    string dateBirth;
    string status;
    string occupation;
    float salary;
    string workSchedule;

    bankName();
    cout << "|-----------------------------------------------|" << endl;
    cout << "|                 Digite o nome                 |" << endl;
    cout << "|-----------------------------------------------|" << endl;
    cout << "|Nome: ";
    cin >> name;
    system("cls");

    bankName();
    cout << "|-----------------------------------------------|" << endl;
    cout << "|                 Digite o cpf                  |" << endl;
    cout << "|-----------------------------------------------|" << endl;
    cout << "|CPF: ";
    cin >> cpf;
    system("cls");

    bankName();
    cout << "|-----------------------------------------------|" << endl;
    cout << "|           Digite a data de nascimento         |" << endl;
    cout << "|-----------------------------------------------|" << endl;
    cout << "|Data: ";
    cin >> dateBirth;
    system("cls");

    bankName();
    cout << "|-----------------------------------------------|" << endl;
    cout << "|                 Digite o status               |" << endl;
    cout << "|-----------------------------------------------|" << endl;
    cout << "|Status: ";
    cin >> status;
    system("cls");

    bankName();
    cout << "|-----------------------------------------------|" << endl;
    cout << "|           Digite o cargo do funcionário       |" << endl;
    cout << "|-----------------------------------------------|" << endl;
    cout << "|Agencia: ";
    cin >> occupation;
    system("cls");

    bankName();
    cout << "|-----------------------------------------------|" << endl;
    cout << "|          Digite o salário do funcionário      |" << endl;
    cout << "|-----------------------------------------------|" << endl;
    cout << "|Renda: ";
    cin >> salary;
    system("cls");

    bankName();
    cout << "|-----------------------------------------------|" << endl;
    cout << "|  Digite o horário de trabalho do funcionário  |" << endl;
    cout << "|-----------------------------------------------|" << endl;
    cout << "|Profissão: ";
    cin >> workSchedule;
    system("cls");

    if(bankEmployee.getName(name) == true){
        if(bankEmployee.getCpf(cpf) == true){
            if(bankEmployee.getDateBirth(dateBirth) == true){
                if(bankEmployee.getStatus(status).compare("status adicionado") == 0){
                    if(bankEmployee.getOccupation(occupation) == true){
                        if(bankEmployee.getSalary(salary) == true){
                            if(bankEmployee.getSchedule(workSchedule).compare("definido horário de trabalho") == 0){
                                cout << "Cadastro efetuado com sucesso!" << endl << endl;
                                system("pause");
                                system("cls");
                                mainMenu();
                            }else{
                                cout << bankEmployee.getSchedule(workSchedule) << endl << endl;
                                bankEmployee.employeeReset();
                                system("pause");
                                system("cls");
                                mainMenu();
                            }
                        }else{
                            cout << "Erro ao cadastrar, contate o ADM do sistema!" << endl << endl;
                            bankEmployee.employeeReset();
                            system("pause");
                            system("cls");
                            mainMenu();
                        }
                    }else{
                        cout << "Erro ao cadastrar, contate o ADM do sistema!" << endl << endl;
                        bankEmployee.employeeReset();
                        system("pause");
                        system("cls");
                        mainMenu();
                    } 
                }else{
                    cout << bankEmployee.getStatus(status) << endl << endl;
                    bankEmployee.employeeReset();
                    system("pause");
                    system("cls");
                    mainMenu();
                }
            }else{
                cout << "Erro ao cadastrar, contate o ADM do sistema!" << endl << endl;
                bankEmployee.employeeReset();
                system("pause");
                system("cls");
                mainMenu();
            }
        }else{
            cout << "Erro ao cadastrar, contate o ADM do sistema!" << endl << endl;
            bankEmployee.employeeReset();
            system("pause");
            system("cls");
            mainMenu();
        }
    }else{
        cout << "Erro ao cadastrar, contate o ADM do sistema!" << endl << endl;
        bankEmployee.employeeReset();
        system("pause");
        system("cls");
        mainMenu();
    }

}

void employeeMenu(int option){

    do{
        bankName();
        cout << "|-----------------------------------------------|" << endl;
        cout << "|              1-Cadastrar funcionário          |" << endl;
        cout << "|              2-Mudar nome                     |" << endl;
        cout << "|              3-Mudar status                   |" << endl;
        cout << "|              4-Mudar função                   |" << endl;
        cout << "|              5-Mudar salário                  |" << endl;
        cout << "|              6-Mudar horário de trabalho      |" << endl;
        cout << "|              7-Ver dados do funcionário       |" << endl;
        cout << "|              8-Sair                           |" << endl;
        cout << "|-----------------------------------------------|" << endl;
        cout << "|opção: ";
        cin >> option;

        switch(option){
            case 1:
                system("cls");
                registerCustumerEmployee();
                break;
            
            case 2:
                system("cls");
                changeNameEmployee();
                break;
            
            case 3:
                system("cls");
                changeStatusEmployee();
                break;
            
            case 4:
                system("cls");
                changeOccupation();
                break;

            case 5:
                system("cls");
                changeSalary();
                break;

            case 6:
                system("cls");
                changeSchedule();
                break;

            case 7:
                system("cls");
                seeEmployee();
                break;
                
            case 8:
                system("cls");
                mainMenu();
                break;
        }

    system("cls");
    }while(option <= 0 || option >= 9);

}

void changeProfession(){
    string profission;

    bankName();
    cout << "|-----------------------------------------------|" << endl;
    cout << "|             Digite a nova profissão           |" << endl;
    cout << "|-----------------------------------------------|" << endl;
    cout << "|Profissão: ";
    cin >> profission;
    system("cls");

    if(bankCustomer.setProfession(profission) == true){
        cout << "Troca efetuada" << endl << endl;
        system("pause");
        system("cls");
        mainMenu();
    }else{
        cout << "Erro na troca contate o ADM!" << endl << endl;
        system("pause");
        system("cls");
        mainMenu();
    }
}

void changeMonthlyIncome(){
    float income;

    bankName();
    cout << "|-----------------------------------------------|" << endl;
    cout << "|                Digite a nova renda            |" << endl;
    cout << "|-----------------------------------------------|" << endl;
    cout << "|Renda: ";
    cin >> income;
    system("cls");

    if(bankCustomer.setIncome(income) == true){
        cout << "Troca efetuada" << endl << endl;
        system("pause");
        system("cls");
        mainMenu();
    }else{
        cout << "Erro na troca contate o ADM!" << endl << endl;
        system("pause");
        system("cls");
        mainMenu();
    }
}

void changeAgency(){
    int agency;
    int change;

    bankName();
    cout << "|-----------------------------------------------|" << endl;
    cout << "|              Digite a agencia atual           |" << endl;
    cout << "|-----------------------------------------------|" << endl;
    cout << "|Atual: ";
    cin >> agency;
    system("cls");

    bankName();
    cout << "|-----------------------------------------------|" << endl;
    cout << "|               Digite a nova agencia           |" << endl;
    cout << "|-----------------------------------------------|" << endl;
    cout << "|Agencia: ";
    cin >> change;
    system("cls");

    cout << bankCustomer.setAgency(agency, change) << endl << endl;
    system("pause");
    system("cls");
    mainMenu();   
}

void changeStatus(){
    string status;

    bankName();
    cout << "|-----------------------------------------------|" << endl;
    cout << "|               Digite o novo status            |" << endl;
    cout << "|-----------------------------------------------|" << endl;
    cout << "|Status: ";
    cin >> status;
    system("cls");

    cout << bankCustomer.setStatus(status) << endl << endl;
    system("pause");
    system("cls");
    mainMenu();   
}

void changeName(){
    string name;
    string reason;

    bankName();
    cout << "|-----------------------------------------------|" << endl;
    cout << "|                Digite o novo nome             |" << endl;
    cout << "|-----------------------------------------------|" << endl;
    cout << "|Nome: ";
    cin >> name;
    system("cls");

    bankName();
    cout << "|-----------------------------------------------|" << endl;
    cout << "|              Digite o motivo da troca         |" << endl;
    cout << "|-----------------------------------------------|" << endl;
    cout << "|Motivo: ";
    cin >> reason;
    system("cls");

    cout <<bankCustomer.setName(name, reason);
    system("pause");
    system("cls");
    mainMenu();

}

void seeCustumer(){
    bankName();
    cout << "|-----------------------------------------------|" << endl;
    cout << "|                 dados do cliente              |" << endl;
    cout << "|-----------------------------------------------|" << endl;
    bankCustomer.showData();
    system("pause");
    system("cls");
    mainMenu();
}

void registerCustomer(){

    string name;
    string cpf;
    string dateBirth;
    string status;
    string account;
    int agency;
    double monthlyIncome;
    string profession;

    bankName();
    cout << "|-----------------------------------------------|" << endl;
    cout << "|                 Digite o nome                 |" << endl;
    cout << "|-----------------------------------------------|" << endl;
    cout << "|Nome: ";
    cin >> name;
    system("cls");

    bankName();
    cout << "|-----------------------------------------------|" << endl;
    cout << "|                 Digite o cpf                  |" << endl;
    cout << "|-----------------------------------------------|" << endl;
    cout << "|CPF: ";
    cin >> cpf;
    system("cls");

    bankName();
    cout << "|-----------------------------------------------|" << endl;
    cout << "|           Digite a data de nascimento         |" << endl;
    cout << "|-----------------------------------------------|" << endl;
    cout << "|Data: ";
    cin >> dateBirth;
    system("cls");

    bankName();
    cout << "|-----------------------------------------------|" << endl;
    cout << "|                 Digite o status               |" << endl;
    cout << "|-----------------------------------------------|" << endl;
    cout << "|Status: ";
    cin >> status;
    system("cls");

    bankName();
    cout << "|-----------------------------------------------|" << endl;
    cout << "|                 Digite a conta                |" << endl;
    cout << "|-----------------------------------------------|" << endl;
    cout << "|Conta: ";
    cin >> account;
    system("cls");

    bankName();
    cout << "|-----------------------------------------------|" << endl;
    cout << "|                 Digite a agencia              |" << endl;
    cout << "|-----------------------------------------------|" << endl;
    cout << "|Agencia: ";
    cin >> agency;
    system("cls");

    bankName();
    cout << "|-----------------------------------------------|" << endl;
    cout << "|               Digite a renda mensal           |" << endl;
    cout << "|-----------------------------------------------|" << endl;
    cout << "|Renda: ";
    cin >> monthlyIncome;
    system("cls");

    bankName();
    cout << "|-----------------------------------------------|" << endl;
    cout << "|                 Digite a profissão            |" << endl;
    cout << "|-----------------------------------------------|" << endl;
    cout << "|Profissão: ";
    cin >> profession;
    system("cls");

    if(bankCustomer.getName(name) == true){
        if(bankCustomer.getCpf(cpf) == true){
            if(bankCustomer.getDateBirth(dateBirth) == true){
                if(bankCustomer.getStatus(status).compare("status adicionado") == 0){
                    if(bankCustomer.getAccount(account) == true){
                        if(bankCustomer.getAgency(agency).compare("agencia adicionada") == 0){
                            if(bankCustomer.getMonthlyIncome(monthlyIncome) == true){
                                if(bankCustomer.getProfession(profession) == true){
                                    cout << "Cadastro efetuado com sucesso!" << endl << endl;
                                    system("pause");
                                    system("cls");
                                    mainMenu();
                                }else{
                                    cout << "Erro ao cadastrar, contate o ADM do sistema!" << endl << endl;
                                    bankCustomer.customerReset();
                                    system("pause");
                                    system("cls");
                                    mainMenu();
                                }
                            }else{
                                cout << "Erro ao cadastrar, contate o ADM do sistema!" << endl << endl;
                                bankCustomer.customerReset();
                                system("pause");
                                system("cls");
                                mainMenu();
                            }
                        }else{
                            cout << bankCustomer.getStatus(status) << endl << endl;
                            bankCustomer.customerReset();
                            system("pause");
                            system("cls");
                            mainMenu();
                        }
                    }else{
                        cout << "Erro ao cadastrar, contate o ADM do sistema!" << endl << endl;
                        bankCustomer.customerReset();
                        system("pause");
                        system("cls");
                        mainMenu();
                    }
                }else{
                    cout << bankCustomer.getStatus(status) << endl << endl;
                    bankCustomer.customerReset();
                    system("pause");
                    system("cls");
                    mainMenu();
                }
            }else{
                cout << "Erro ao cadastrar, contate o ADM do sistema!" << endl << endl;
                bankCustomer.customerReset();
                system("pause");
                system("cls");
                mainMenu();
            }
        }else{
            cout << "Erro ao cadastrar, contate o ADM do sistema!" << endl << endl;
            bankCustomer.customerReset();
            system("pause");
            system("cls");
            mainMenu();
        }
    }else{
        cout << "Erro ao cadastrar, contate o ADM do sistema!" << endl << endl;
        bankCustomer.customerReset();
        system("pause");
        system("cls");
        mainMenu();
    }
}


void clientMenu(int option){
    
    do{
        bankName();
        cout << "|-----------------------------------------------|" << endl;
        cout << "|              1-Cadastrar cliente              |" << endl;
        cout << "|              2-Mudar nome                     |" << endl;
        cout << "|              3-Mudar status                   |" << endl;
        cout << "|              4-Mudar agencia                  |" << endl;
        cout << "|              5-Mudar renda mensal             |" << endl;
        cout << "|              6-Mudar profissão                |" << endl;
        cout << "|              7-Ver dados do cliente           |" << endl;
        cout << "|              8-Sair                           |" << endl;
        cout << "|-----------------------------------------------|" << endl;
        cout << "|opção: ";
        cin >> option;

        switch (option){
        case 1:
            system("cls");
            registerCustomer();
            break;
        
        case 2:
            system("cls");
            changeName();
            break;

        case 3:
            system("cls");
            changeStatus();
            break;

        case 4:
            system("cls");
            changeAgency();
            break;

        case 5:
            system("cls");
            changeMonthlyIncome();
            break;

        case 6:
            system("cls");
            changeProfession();
            break;

        case 7:
            system("cls");
            seeCustumer();
            break;

        case 8:
            system("cls");
            mainMenu();
        }

        system("cls");
    }while(option <= 0 || option >= 9);

}





void mainMenu(){
    
    int option;
    string login;
    bool confirmation;

    menuBankName();

    cin >> login;
    
    confirmation = accessConfirmation(login);
    
    if(confirmation == false){
        exit(0);
    }

    system("cls");

    do{
        bankName();
        cout << "|-----------------------------------------------|" << endl;
        cout << "|              1-cliente                        |" << endl;
        cout << "|              2-funcionário                    |" << endl;
        cout << "|              3-Sair                           |" << endl;
        cout << "|-----------------------------------------------|" << endl;
        cout << "|opção: ";
        cin >> option;   

        if(option == 1){
        
            system("cls");
            clientMenu(option);

        }else if(option == 2){
           
            system("cls");
            employeeMenu(option);     
        
        }else if(option == 3){
            exit(0);
        }

        system("cls");
        
    } while(option <= 0 || option >= 4);   
}





void bankName(){
    
    cout << "|-----------------------------------------------|" << endl;
    cout << "|                  Banco Rocha                  |" << endl;
    cout << "|-----------------------------------------------|" << endl;

}





void menuBankName(){
    
    cout << "|-----------------------------------------------|" << endl;
    cout << "|                  login: admin                 |" << endl;
    cout << "|                  senha: admin                 |" << endl;
    cout << "|-----------------------------------------------|" << endl;
    cout << "|                  Banco Rocha                  |" << endl;
    cout << "|-----------------------------------------------|" << endl;
    cout << "|login: ";

}





bool accessConfirmation(string login){

    string loginName = "admin";
    string accessPassword = "admin";
    string password;

    if(login.compare(loginName) != 0){
        system("cls");
        mainMenu();
    }
    
    do{
        char prePassword[10] = {0};
        int  index = 0;
    
        cout << "|senha: ";

        while(true){
            char letter = getch();

            if(letter == ENTER){
                break;
            }else{
                putchar('*');

            prePassword[index] = letter;
            index++;
            password = prePassword;
            }
        }

        if(password.compare(accessPassword) != 0){
            attempts++;

            cout << endl << "Maximo de tentativas: 3";
            cout << endl << "Tentativas: " << attempts << endl << endl;

            if(attempts < 3){
                
                system("pause");
                system("cls");
                mainMenu();
            
            }else{
            
                return false;
            
            }
        }

    }while(password.compare(accessPassword) != 0);
    
    return true;
}





int main(){

    setlocale(LC_CTYPE, "");
    mainMenu();
    
    return 0;
}