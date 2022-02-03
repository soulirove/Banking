#include <algorithm>
#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <sstream>
#include <time.h>
#include <cstdio>
#include <cctype>
#include <vector>
#include <string>
#include <cmath>

using namespace std;
class account{
    private:
    string name; 
    string date_of_birth; 
    int citizenship_number; 
    string address; 
    //long long phone_number;
    string phone_number;
    int deposit;
    string type_of_deposit_account;
    long long account_number;
    string date_of_deposit;

    public:
    account(){ 
    name=""; 
    date_of_birth=""; 
    citizenship_number=0; 
    address=""; 
    //phone_number=0;
    phone_number="";
    deposit=0;
    type_of_deposit_account="";
    }
    void set_name(string _name){name=_name;}
    void set_date_of_birth(string _date_of_birth){date_of_birth=_date_of_birth;}
    void set_citizenship_number(int _citizenship_number){citizenship_number=_citizenship_number;}
    void set_address(string _address){address=_address;}
    //void set_phone_number(long long _phone_number){phone_number=_phone_number;}
    void set_phone_number(string _phone_number){phone_number=_phone_number;}
    void set_deposit(int _deposit){deposit=_deposit;}
    void set_type_of_deposit_account(string _type_of_deposit_account){type_of_deposit_account=_type_of_deposit_account;}
    void set_account_number(long long _account_number){account_number=_account_number;}
    void set_date_of_deposit(string _date_of_deposit){date_of_deposit=_date_of_deposit;}

    string get_name()const{return name;}
    string get_date_of_birth()const{return date_of_birth;}
    int get_citizenship_number()const{return citizenship_number;}
    string get_address()const{return address;}
    //long long get_phone_number()const{return phone_number;}
    string get_phone_number()const{return phone_number;}
    int get_deposit()const{return deposit;}
    string get_type_of_deposit_account()const{return type_of_deposit_account;}
    long long get_account_number()const{return account_number;}
    string get_date_of_deposit()const{return date_of_deposit;}
};
string choice(string _shout,int _number_of_trials, string _type,bool& _system_shut_down){
    string user_defined_input_string,
           data_attribute =_type,
           shout=_shout,
           return_values;
    int number_of_trials = _number_of_trials;
    bool pass_checker=false;
    char c;
    enum data_type : unsigned char{
        Integer,Long ,Decimal,String,Phone,Name,Date,Character,Boolean,Error
    };
    data_type attribute;
    if(data_attribute=="int"){
        attribute = Integer;
    }
    else if(data_attribute=="long long"){
        attribute = Long;
    }
    else if(data_attribute=="float"){
        attribute = Decimal;
    }
    else if(data_attribute=="sentence"){
        attribute = String;
    }
    else if(data_attribute=="phone"){
        attribute = Phone;
    }
    else if(data_attribute=="name"){
        attribute = Name;
    }
    else if(data_attribute=="date"){
        attribute = Date;
    }
    else if(data_attribute=="char"){
        attribute = Character;
    }
    else if(data_attribute=="bool"){
        attribute = Boolean;
    }
    else {
        attribute = Error;
    }
    
    switch (attribute)
    {
    case Integer:
        while(pass_checker==false  && number_of_trials!=0){
            std::cout<<shout<<std::endl;
            getline(std::cin, user_defined_input_string);
            for (int i = 0; i < user_defined_input_string.length(); i++) {

                c = user_defined_input_string.at(i);         // Get a char from string

                // if it's NOT within these bounds, then it's not a character
                if (! (( c >= '0' && c <= '9' ) && ( user_defined_input_string.length()<=10 )) ) {
                pass_checker=false;
                break;
                }
                else{pass_checker=true;}
            }
            if(pass_checker==false){
            number_of_trials--;
            std::cout<<"You have: "<<number_of_trials<<" trials to enter a correct answer\nOnce the chances left to enter a correct commend are equal to zero the system will shut down automatically!!!"<<endl;
            }
        }
        if(pass_checker==true){
            return_values = user_defined_input_string;
            user_defined_input_string.clear();
            _system_shut_down = false;
        }
        else{
            _system_shut_down = true;
        }
        break;

    case Long:
        while(pass_checker==false  && number_of_trials!=0){
        std::cout<<shout<<std::endl;
        getline(std::cin, user_defined_input_string);
            for (int i = 0; i < user_defined_input_string.length(); i++) {

                c = user_defined_input_string.at(i);         // Get a char from string

                // if it's NOT within these bounds, then it's not a character
                if (! (( c >= '0' && c <= '9' ) && ( 10 <= user_defined_input_string.length() ) && ( user_defined_input_string.length()<= 19)) ) {
                pass_checker=false;
                break;
                }
                else{pass_checker=true;}
            }
            if(pass_checker==false){
            number_of_trials--;
            std::cout<<"You have: "<<number_of_trials<<" trials to enter a correct answer\nOnce the chances left to enter a correct commend are equal to zero the system will shut down automatically!!!"<<endl;
            }
        }
        if(pass_checker==true){
            return_values = user_defined_input_string;
            user_defined_input_string.clear();
            _system_shut_down = false;
        }
        else{
            _system_shut_down = true;
        }
        break;

    case Decimal:
        while(pass_checker==false  && number_of_trials!=0){
        std::cout<<shout<<std::endl;
        getline(std::cin, user_defined_input_string);
            for (int i = 0; i < user_defined_input_string.length(); i++) {

                c = user_defined_input_string.at(i);         // Get a char from string

                // if it's NOT within these bounds, then it's not a character
                if (! (( c >= '0' && c <= '9' ) && ( c == '.' || c == 'E' || c == '-' || c == '+' || c == ',' ) && ( user_defined_input_string.length()<= 19)) ) {
                pass_checker=false;
                break;
                }
                else{pass_checker=true;}
            }
            if(pass_checker==false){
            number_of_trials--;
            std::cout<<"You have: "<<number_of_trials<<" trials to enter a correct answer\nOnce the chances left to enter a correct commend are equal to zero the system will shut down automatically!!!"<<endl;
            }
        }
        if(pass_checker==true){
            return_values = user_defined_input_string;
            user_defined_input_string.clear();
            _system_shut_down = false;
        }
        else{
            _system_shut_down = true;
        }
        break;

    case String:
        while(pass_checker==false  && number_of_trials!=0){
        std::cout<<shout<<std::endl;
        getline(std::cin, user_defined_input_string);
            for (int i = 0; i < user_defined_input_string.length(); i++) {

                c = user_defined_input_string.at(i);         // Get a char from string

                if (! ( ( c >= 'A' && c <= 'Z' ) || ( c >= 'a' && c <= 'z' ) || ( c >= '0' && c <= '9' ) || ( c == '_' || c == '-' || c == '/' || c == '.' || c == ',' )) ) {
                pass_checker=false;
                break;
                }
                else{pass_checker=true;}
            }
            if(pass_checker==false){
            number_of_trials--;
            std::cout<<"You have: "<<number_of_trials<<" trials to enter a correct answer\nOnce the chances left to enter a correct commend are equal to zero the system will shut down automatically!!!"<<endl;
            }
        }
        if(pass_checker==true){
            return_values = user_defined_input_string;
            user_defined_input_string.clear();
            _system_shut_down = false;
        }
        else{
            _system_shut_down = true;
        }
        break;

    case Phone:
        while(pass_checker==false  && number_of_trials!=0){
        std::cout<<shout<<std::endl;
        getline(std::cin, user_defined_input_string);
            for (int i = 0; i < user_defined_input_string.length(); i++) {

                c = user_defined_input_string.at(i);         // Get a char from string

                if (! ( ( c >= '0' && c <= '9' ) || ( c == '+' || c == '-' || c == ' ' )) ) {
                pass_checker=false;
                break;
                }
                else{pass_checker=true;}
            }
            if(pass_checker==false){
            number_of_trials--;
            std::cout<<"You have: "<<number_of_trials<<" trials to enter a correct answer\nOnce the chances left to enter a correct commend are equal to zero the system will shut down automatically!!!"<<endl;
            }
        }
        if(pass_checker==true){
            return_values = user_defined_input_string;
            user_defined_input_string.clear();
            _system_shut_down = false;
        }
        else{
            _system_shut_down = true;
        }
        break;

    case Name:
        while(pass_checker==false  && number_of_trials!=0){
            std::cout<<shout<<std::endl;
            getline(std::cin, user_defined_input_string);
            for (int i = 0; i < user_defined_input_string.length(); i++) {

                c = user_defined_input_string.at(i);         // Get a char from string

                // if it's NOT within these bounds, then it's not a character
                if (! (( c >= 'A' && c <= 'Z' ) || ( c >= 'a' && c <= 'z' )) ) {
                pass_checker=false;
                break;
                }
                else{pass_checker=true;}
            }
            if(pass_checker==false){
            number_of_trials--;
            std::cout<<"You have: "<<number_of_trials<<" trials to enter a correct answer\nOnce the chances left to enter a correct commend are equal to zero the system will shut down automatically!!!"<<endl;
            }
        }
        if(pass_checker==true){
            return_values = user_defined_input_string;
            user_defined_input_string.clear();
            _system_shut_down = false;
        }
        else{
            _system_shut_down = true;
        }
        break;

    case Date:
        while(pass_checker==false  && number_of_trials!=0){
        std::cout<<shout<<std::endl;
        getline(std::cin, user_defined_input_string);
            for (int i = 0; i < user_defined_input_string.length(); i++) {

                c = user_defined_input_string.at(i);         // Get a char from string

                // if it's NOT within these bounds, then it's not a character
                if (! (( c >= '0' && c <= '9' ) || ( c == '/' || c == '-' )) ) {
                pass_checker=false;
                break;
                }
                else{pass_checker=true;}
            }
            if(pass_checker==false){
            number_of_trials--;
            std::cout<<"You have: "<<number_of_trials<<" trials to enter a correct answer\nOnce the chances left to enter a correct commend are equal to zero the system will shut down automatically!!!"<<endl;
            }
        }
        if(pass_checker==true){
            return_values = user_defined_input_string;
            user_defined_input_string.clear();
            _system_shut_down = false;
        }
        else{
            _system_shut_down = true;
        }
        break;

    case Character:
        while(pass_checker==false  && number_of_trials!=0){
            std::cout<<shout<<std::endl;
            getline(std::cin, user_defined_input_string);

            if(user_defined_input_string.length()<2){pass_checker=true;}
            else{pass_checker=false;}
            if(pass_checker==false){
            number_of_trials--;
            std::cout<<"You have: "<<number_of_trials<<" trials to enter a correct answer\nOnce the chances left to enter a correct commend are equal to zero the system will shut down automatically!!!"<<endl;
            }
        }
        if(pass_checker==true){
            return_values = user_defined_input_string;
            user_defined_input_string.clear();
            _system_shut_down = false;
        }
        else{
            _system_shut_down = true;
        }
        break;

    case Boolean:
        while(pass_checker==false  && number_of_trials!=0){
            std::cout<<shout<<std::endl;
            getline(std::cin, user_defined_input_string);
            
            if ((user_defined_input_string!="true")||(user_defined_input_string!="false")) {
            number_of_trials--;
            std::cout<<"You have: "<<number_of_trials<<" trials to enter a correct answer\nOnce the chances left to enter a correct commend are equal to zero the system will shut down automatically!!!"<<endl;
            pass_checker=false;
            }
            else{
                pass_checker=true;
                return_values = user_defined_input_string;
                user_defined_input_string.clear();
            }

        }
        if(pass_checker==false){ 
            _system_shut_down = true;
        }
        break;

    case Error:
        std::cout<<"the data type entred is not correct, check again the source code!!!"<<endl;
        _system_shut_down = true;
        break;
    
    default:
        break;
    }
return return_values; 
}
const std::string currentDateTime() {
    time_t     now = time(0);
    struct tm  tstruct;
    char       buf[80];
    tstruct = *localtime(&now);
    strftime(buf, sizeof(buf), "%Y-%m-%d.%X", &tstruct);

    return buf;
}
int findAge(int current_date, int current_month,int current_year, int birth_date,int birth_month, int birth_year)
{
    // days of every month
    int month[] = { 31, 28, 31, 30, 31, 30, 31,
                          31, 30, 31, 30, 31 };
 
    // if birth date is greater then current birth
    // month then do not count this month and add 30
    // to the date so as to subtract the date and
    // get the remaining days
    if (birth_date > current_date) {
        current_date = current_date + month[birth_month - 1];
        current_month = current_month - 1;
    }
 
    // if birth month exceeds current month, then do
    // not count this year and add 12 to the month so
    // that we can subtract and find out the difference
    if (birth_month > current_month) {
        current_year = current_year - 1;
        current_month = current_month + 12;
    }
 
    // calculate date, month, year
    int calculated_date = current_date - birth_date;
    int calculated_month = current_month - birth_month;
    int calculated_year = current_year - birth_year;
 
    // print the present age
    /*printf("Present Age\nYears: %d  Months: %d  Days:"
           " %d\n", calculated_year, calculated_month,
                                      calculated_date);*/
    return  calculated_year;
}
void menu(){
    std::cout<<"\n         CUSTOMER ACCOUNT BANKING MANAGEMENT SYSTEM         \n"<<std::endl;
    std::cout<<"\n                  WELCOME TO THE MAIN MENU                  \n"<<std::endl;
    std::cout<<"\n1.Create new account"<<std::endl;
    std::cout<<"2.Update information of existing account"<<std::endl;
    std::cout<<"3.For transactions"<<endl;
    std::cout<<"4.Check the details of existing account"<<std::endl;
    std::cout<<"5.Removing existing account"<<std::endl;
    std::cout<<"6.View customer\'s list"<<std::endl;  
    std::cout<<"7.Exit\n"<<std::endl;   
    std::cout<<"\nEnter your choice: "<<std::endl;
}
account new_acc(const vector<account>& arr,bool& _system_shut_down){
    /*This function variables*/
    std::string shout,
                name,
                last_name,
                full_name,
                date_of_birth,
                address,
                phone_number,
                type_of_deposit,
                date_of_deposit;
    int citizenship_number,
        money,
        type_of_deposit_trials=3;
    long long account_number; //phone_number;
    bool correct_type_of_deposit_chosen=false;
    account other;
    while(_system_shut_down==false){
        std::cout<<"\n         CUSTOMER ACCOUNT BANKING MANAGEMENT SYSTEM         \n"<< endl;
        std::cout<<"\n                  CREATE NEW ACCOUNT                  \n"<<endl;

        shout="Please give the name of the new account holder";
        name = choice(shout,3,"name",_system_shut_down);
        if(_system_shut_down==true){
            break;
        }
        shout="Please give the last name of the new account holder";
        last_name = choice(shout,3,"name",_system_shut_down);
        if(_system_shut_down==true){
            break;
        }
        full_name=name+" "+last_name;
        other.set_name(full_name);

        shout="Please give the date of birth of the new account holder";
        date_of_birth = choice(shout,3,"date",_system_shut_down);
        if(_system_shut_down==true){
            break;
        }
        other.set_date_of_birth(date_of_birth);

        shout="Please give the citizenship number of the new account holder";
        citizenship_number = stoi(choice(shout,3,"int",_system_shut_down));
        if(_system_shut_down==true){
            break;
        }
        other.set_citizenship_number(citizenship_number);

        shout="Please give the address of the new account holder";
        address = choice(shout,3,"sentence",_system_shut_down);
        if(_system_shut_down==true){
            break;
        }
        other.set_address(address);

        shout="Please give the phone number of the new account holder";
        //const char *c = choice(shout,3,"long long",_system_shut_down).c_str(); sentence
        //phone_number = strtoll(c,NULL,0);
        phone_number = choice(shout,3,"phone",_system_shut_down);
        if(_system_shut_down==true){
            break;
        }
        other.set_phone_number(phone_number);

        shout="Please give the amount of money you want to deposit for the new account holder";
        money = stoi(choice(shout,3,"int",_system_shut_down));
        if(_system_shut_down==true){
            break;
        }
        other.set_deposit(money);

        std::cout<<"\nPlease choose one type of deposit account for the new account holder: \n1.saving \n2.current \n3.fixed for 1 year \n4.fixed for 2 years \n5.fixed for 3 years"<<endl;
        while (correct_type_of_deposit_chosen==false && type_of_deposit_trials!=0)
        {
            getline(std::cin, type_of_deposit);
            switch (stoi(type_of_deposit))
            {
            case 1:
                other.set_type_of_deposit_account("saving");
                correct_type_of_deposit_chosen = true;
                type_of_deposit_trials--;
                break;
            case 2:
                other.set_type_of_deposit_account("current");
                correct_type_of_deposit_chosen = true;
                type_of_deposit_trials--;
                break;
            case 3:
                other.set_type_of_deposit_account("fixed for 1 year");
                correct_type_of_deposit_chosen = true;
                type_of_deposit_trials--;
                break;
            case 4:
                other.set_type_of_deposit_account("fixed for 2 years");
                correct_type_of_deposit_chosen = true;
                type_of_deposit_trials--;
                break;
            case 5:
                other.set_type_of_deposit_account("fixed for 3 years");
                correct_type_of_deposit_chosen = true;
                type_of_deposit_trials--;
                break;
            
            default:
            correct_type_of_deposit_chosen = false;
            std::cout<<"Please select a number from the list available: "<<endl;
            type_of_deposit_trials--;
                break;
            }
            if (correct_type_of_deposit_chosen == true){_system_shut_down=false;}
            else{_system_shut_down=true;}
            if(_system_shut_down==true){
            break;
            }
        }
        if(arr.size()==0){
            long long iSecret = rand() % 1000 + 100000000000;
            other.set_account_number(iSecret);
        }
        else{
            bool exist=true,checker=false;
            while(checker==false){
                long long iSecret = rand() % 1000 + 100000000000;
                for(int i=0;i<arr.size();i++){
                    if(arr[i].get_account_number()==iSecret){exist=true;break;}
                    else{exist=false;}
                }
                account_number = iSecret;
                if(exist==true){
                checker=false;
                }   
                else{checker=true;}
            }
            other.set_account_number(account_number);
        }    
        date_of_deposit=currentDateTime();
        other.set_date_of_deposit(date_of_deposit);
        break;
    }
    return other;
}
void view_list(const account& other){
    std::cout<<"\nThe account holder\'s name: "<<other.get_name()<<endl;
    std::cout<<"\nThe account number: "<<other.get_account_number()<<endl;
    std::cout<<"\nThe account address: "<<other.get_address()<<endl;
    std::cout<<"\nThe account phone_number: "<<other.get_phone_number()<<endl; 
}
void edit(account& other,bool& _system_shut_down){
    std::string answer,
                shout,
                address,
                phone;
    int cout=3;

    std::cout<<"The currrent account address is: "<<other.get_address()<<" If you would like to change the address please type YES otherwise NO"<<endl;
    
    while((!(answer=="YES" || answer=="NO")) && (cout!=0)){
        getline(std::cin,answer);
        if(answer=="YES"){
            shout = "Please type the new address: ";
            address = choice(shout, 3,"sentence",_system_shut_down);
            other.set_address(address);
        }
        else if(answer=="NO"){
            break;
        }
        std::cout<<"Please type either YES or NO, you have: "<<cout<<" trials left"<<endl;
        cout--;
    }
    std::cout<<"The currrent account phone number is: "<<other.get_phone_number()<<" If you would like to change the phone number please type YES otherwise NO"<<endl;
    
    while(!(answer=="YES" || answer=="NO") && cout!=0){
        getline(std::cin,answer);
        if(answer=="YES"){
            shout = "Please type the phone number: ";
            phone = choice(shout, 3,"phone",_system_shut_down);
            other.set_phone_number(phone);
        }
        else if(answer=="NO"){
            break;
            }
        std::cout<<"Please type either YES or NO, you have: "<<cout<<" trials left"<<endl;
        cout--;
    }
    
}
void transact(account& other, bool& _system_shut_down){
    int deposit,withdraw,deposit_or_withdraw_count=3,not_enough_count=3;
    std::string shout,choose;
    bool deposit_or_withdraw = false,not_enough=true;
    std::cout<<"The current account ballance stands at: "<<other.get_deposit()<<endl;
    std::cout<<"\nin case of deposit please press 1 \nin case of withdraw please press 2"<<endl;
    shout = "would you like to deposit or withdraw money? ";
    
    while(deposit_or_withdraw == false && deposit_or_withdraw_count!=0){
        choose = choice(shout,3,"int", _system_shut_down);
        if(stoi(choose)==1){
            shout = "How much do you want to deposit: ";
            deposit = stoi( choice(shout,3,"int", _system_shut_down) );
            other.set_deposit(other.get_deposit()+deposit);
            deposit_or_withdraw = true;
        }
        else if(stoi(choose)==2){
            while(not_enough==true && not_enough_count!=0){
                shout = "How much do you want to withdraw: ";
                withdraw = stoi(choice(shout,3,"int", _system_shut_down));
                if(withdraw <= other.get_deposit()){
                other.set_deposit(other.get_deposit() - withdraw);
                not_enough=false;
                }
                else{
                    std::cout<<"You don\'t have enough!!!";
                    not_enough_count--;
                    not_enough=true;
                }
            }
            deposit_or_withdraw = true;
        }
        else{
            std::cout<<"enter a valid choice!!!"<<endl;
            deposit_or_withdraw_count--;
            deposit_or_withdraw = false;
        }
    }
    

}
void erase(vector<account>& arr,int index){
    std::cout<<"The following account number :" <<arr[index].get_account_number()<<" of the following account holder: "<<arr[index].get_name()<<" has been deleted"<<endl;
    arr.erase(arr.begin()+index);
}
void see(const account& other){
    std::string current_Date_Time;
    int current_year,current_month,current_day,date_of_deposit_year,date_of_deposit_month,date_of_deposit_day,birth_year,birth_month,birth_day,years,amount_of_interest;
    char slash;
    std::stringstream ss(currentDateTime());
    ss>>current_year>>slash>>current_month>>slash>>current_day;
    std::stringstream bb(other.get_date_of_birth());
    bb>>birth_year>>slash>>birth_month>>slash>>birth_day;
    std::stringstream dd(other.get_date_of_deposit());
    dd>>date_of_deposit_year>>slash>>date_of_deposit_month>>slash>>date_of_deposit_day;

    std::cout<<"The name is: "<<other.get_name()<<endl;
    std::cout<<"The account number is: "<<other.get_account_number()<<endl;
    std::cout<<"The date of birth is: "<<other.get_date_of_birth()<<endl;
    std::cout<<"the age of the account holder: "<<findAge(current_day,current_month,current_year,birth_day,birth_month,birth_year)<<endl;
    std::cout<<"The citizenship number is: "<<other.get_citizenship_number()<<endl;
    std::cout<<"The address is: "<<other.get_address()<<endl;
    std::cout<<"The phone number is: "<<other.get_phone_number()<<endl;
    std::cout<<"The balance is: "<<other.get_deposit()<<endl;
    std::cout<<"The type of deposit this account is: "<<other.get_type_of_deposit_account()<<endl;
    std::cout<<"The date of deposit to this account is: "<<other.get_date_of_deposit()<<endl;
    years =findAge(current_day,current_month,current_year,date_of_deposit_day,date_of_deposit_month,date_of_deposit_year);
    std::cout<<"this account is active since: "<<years<<endl;
    if("fixed for 1 year"){
        for(int i = 1; i <= years; i++)
        {
        amount_of_interest = other.get_deposit() * pow(1.0 + 0.1, i);
        }
    }
    else if("fixed for 2 years"){
        for(int i = 1; i <= years; i++)
        {
        amount_of_interest = other.get_deposit() * pow(1.0 + 0.2, i);
        }
    }
    else if("fixed for 3 years"){
        for(int i = 1; i <= years; i++)
        {
        amount_of_interest = other.get_deposit() * pow(1.0 + 0.3, i);
        }
    }
    std::cout<<"the amount of interest: "<<amount_of_interest<<endl;
}
void execution(vector<account>& existing_accounts){
    /*The list of veriables*/
    int menu_choice,
        index=0,
        trials = 3,
        account_number_trials=3;
    bool account_number_verifier=false,
        exit=false,
        account_number_avaibale=false,
        system_shut_down=false;
    std::string user_defined_input,
                 see_the_customers_banking_information_choice,
                 menu_or_exit_choice,
                 account_number,
                 shout;
    account user;
    menu();
    while(exit==false && trials!=0){
        getline(std::cin, user_defined_input);
        menu_choice = stoi(user_defined_input);
        switch (menu_choice)
        {
            case 1:
                user = new_acc(existing_accounts,system_shut_down);
                if(system_shut_down==false){
                    std::cout<<"\nThe new account have been created!!!"<<std::endl;
                    std::cout<<"\nDo you want to see the customer\'s banking information such as account number, name, address and phone number?\n If yes press 1\n Press anything else if not"<<std::endl;
                    getline(std::cin, see_the_customers_banking_information_choice);
                    if(stoi(see_the_customers_banking_information_choice)==1){
                        view_list(user);
                        std::cout<<std::endl;
                    }
                    //std::cout<<"existing_accounts.size()= "<<existing_accounts.size()<<endl;
                    existing_accounts.push_back(user);
                    //std::cout<<"existing_accounts.size()= "<<existing_accounts.size()<<endl;
                    std::cout<<"Press 1 to back to the main menu\nPress anything else to exit"<<std::endl;
                    getline(std::cin, menu_or_exit_choice);
                    if(stoi(menu_or_exit_choice)==1){
                        system("CLS");
                        execution(existing_accounts);
                    }
                    else{
                        exit=true;
                    }
                }
                else{
                    system("CLS");
                    execution(existing_accounts);
                }
                
                break;
            case 2:
                if(existing_accounts.size()==0){
                    std::cout<<"No account registred at the moment!!!"<<std::endl;
                }
                else{
                    while(account_number_avaibale==false  && account_number_trials!=0){
                        std::cout<<"You have: "<<account_number_trials<<" trials to enter a correct account number\nOnce the chances left to enter a correct commend are equal to zero the system will shut down automatically!!!\nPlease enter the account number: ";
                        getline(std::cin, account_number);
                        const char *c = account_number.c_str(); 
                        for(int i=0;i<existing_accounts.size();i++){
                            if(strtoll(c,NULL,0)==existing_accounts[i].get_account_number()){
                                index = i;
                                account_number_verifier=true;
                                break;
                            }
                            else{
                                account_number_verifier=false;
                            }
                        }
                        if(account_number_verifier==true){
                            edit(existing_accounts[index],system_shut_down);
                            if(system_shut_down==true){
                                break;
                            }
                            account_number_avaibale=true;
                        }
                        else{
                            std::cout<<"The account number given is not avaibale";
                            account_number_avaibale=false;
                            account_number_trials--;
                        }
                    }
                    account_number_trials=3;
                }   
                std::cout<<"Press 1 to back to the main menu\nPress anything else to exit"<<std::endl;
                getline(std::cin, menu_or_exit_choice);
                if(stoi(menu_or_exit_choice)==1){
                     system("CLS");
                    execution(existing_accounts);
                }
                else{
                    exit=true;
                }
                break;
            case 3:
                if(existing_accounts.size()==0){
                    std::cout<<"No account registred at the moment!!!"<<std::endl;
                }
                else{
                    while(account_number_avaibale==false  && account_number_trials!=0){
                        std::cout<<"You have: "<<account_number_trials<<" trials to enter a correct account number\nOnce the chances left to enter a correct commend are equal to zero the system will shut down automatically!!!\nPlease enter the account number: ";
                        getline(std::cin, account_number);
                        const char *c = account_number.c_str(); 
                        //phone_number = strtoll(c,NULL,0);
                        for(int i=0;i<existing_accounts.size();i++){
                            if(strtoll(c,NULL,0)==existing_accounts[i].get_account_number()){
                                index = i;
                                account_number_verifier=true;
                                break;
                            }
                            else{
                                account_number_verifier=false;
                            }
                        }
                        if(account_number_verifier==true){
                            transact(existing_accounts[index], system_shut_down);
                            if(system_shut_down==true){
                                break;
                            }
                            account_number_avaibale=true;
                            //account_number_trials--;
                        }
                        else{
                            std::cout<<"The account number given is not avaibale";
                            account_number_avaibale=false;
                            account_number_trials--;
                        }
                    }
                    account_number_trials=3;
                }
                std::cout<<"Press 1 to back to the main menu\nPress anything else to exit"<<std::endl;
                getline(std::cin, menu_or_exit_choice);
                if(stoi(menu_or_exit_choice)==1){
                     system("CLS");
                    execution(existing_accounts);
                }
                else{
                    exit=true;
                }
                break;
            case 4:
                if(existing_accounts.size()==0){
                    std::cout<<"No account registred at the moment!!!"<<std::endl;
                }
                else{
                    while(account_number_avaibale==false  && account_number_trials!=0){
                        std::cout<<"You have: "<<account_number_trials<<" trials to enter a correct account number\nOnce the chances left to enter a correct commend are equal to zero the system will shut down automatically!!!\nPlease enter the account number: ";
                        getline(std::cin, account_number);
                        const char *c = account_number.c_str(); 
                        //phone_number = strtoll(c,NULL,0);
                        for(int i=0;i<existing_accounts.size();i++){
                            if(strtoll(c,NULL,0)==existing_accounts[i].get_account_number()){
                                index = i;
                                account_number_verifier=true;
                                break;
                                }
                            else{
                                account_number_verifier=false;
                                }
                        }
                        if(account_number_verifier==true){
                            view_list(existing_accounts[index]);
                            account_number_avaibale=true;
                            //account_number_trials--;
                        }
                        else{
                            std::cout<<"The account number given is not avaibale";
                            account_number_avaibale=false;
                            account_number_trials--;
                        }
                    }
                    account_number_trials=3;
                }   
                std::cout<<"Press 1 to back to the main menu\nPress anything else to exit"<<std::endl;
                getline(std::cin, menu_or_exit_choice);
                if(stoi(menu_or_exit_choice)==1){
                     system("CLS");
                    execution(existing_accounts);
                }
                else{
                    exit=true;
                }         
                break;
            case 5:
                if(existing_accounts.size()==0){
                    std::cout<<"No account registred at the moment!!!"<<std::endl;
                }
                else{
                    while(account_number_avaibale==false  && account_number_trials!=0){
                        //std::cout<<"You have: "<<account_number_trials<<" trials to enter a correct account number\nOnce the chances left to enter a correct commend are equal to zero the system will shut down automatically!!!\nPlease enter the account number: ";
                        shout = "Please enter the account number: ";
                        account_number = choice(shout,3,"long long",system_shut_down);
                        if(system_shut_down==true){
                            break;
                        }
                        //getline(std::cin, account_number);
                        const char *c = account_number.c_str(); 
                        //phone_number = strtoll(c,NULL,0);
                        for(int i=0;i<existing_accounts.size();i++){
                            if(strtoll(c,NULL,0)==existing_accounts[i].get_account_number()){
                                index = i;
                                account_number_verifier=true;
                                break;
                                }
                            else{
                                account_number_verifier=false;
                                }
                        }
                        if(account_number_verifier==true){
                            erase(existing_accounts,index);
                            account_number_avaibale=true;
                            //account_number_trials--;
                        }
                        else{
                        std::cout<<"The account number given is not avaibale \nYou can try again for "<<account_number_trials<<" more times"<<std::endl;
                        account_number_avaibale=false;
                        account_number_trials--;
                        }
                    }
                }
                std::cout<<"Press 1 to back to the main menu\nPress anything else to exit"<<std::endl;
                getline(std::cin, menu_or_exit_choice);
                if(stoi(menu_or_exit_choice)==1){
                     system("CLS");
                    execution(existing_accounts);
                }
                else{
                    exit=true;
                }
                break;
            case 6:
                if(existing_accounts.size()==0){
                    std::cout<<"No account registred at the moment!!!"<<std::endl;
                }
                else{
                    while(account_number_avaibale==false  && account_number_trials!=0){
                        //std::cout<<"You have: "<<account_number_trials<<" trials to enter a correct account number\nOnce the chances left to enter a correct commend are equal to zero the system will shut down automatically!!!\nPlease enter the account number: ";
                        shout = "Please enter the account number: ";
                        account_number = choice(shout,3,"long long",system_shut_down);
                        //getline(std::cin, account_number);
                        if(system_shut_down==true){
                            break;
                        }
                        const char *c = account_number.c_str(); 
                        //phone_number = strtoll(c,NULL,0);
                        for(int i=0;i<existing_accounts.size();i++){
                            if(strtoll(c,NULL,0)==existing_accounts[i].get_account_number()){
                                index = i;
                                account_number_verifier=true;
                                break;
                                }
                            else{
                                account_number_verifier=false;
                            }
                        }
                        if(account_number_verifier==true){
                            see(existing_accounts[index]);
                            account_number_avaibale=true;
                            //account_number_trials--;
                        }
                        else{
                            std::cout<<"The account number given is not avaibale";
                            account_number_avaibale=false;
                            account_number_trials--;
                        }
                    }
                    account_number_trials=3;
                }
                std::cout<<"Press 1 to back to the main menu\nPress anything else to exit"<<std::endl;
                getline(std::cin, menu_or_exit_choice);
                if(stoi(menu_or_exit_choice)==1){
                     system("CLS");
                    execution(existing_accounts);
                }
                else{
                    exit=true;
                }
                break;
            case 7:
                exit = true;
                break;
            
            default:
                std::cout<<"Please select a number from the list available"<<std::endl;
                std::cout<<"You have: "<<trials-1<<" chances left to enter a correct commend otherwise the system will shut down automatically!!!"<<std::endl;
                exit = false;
                std::cout<<"\nEnter your choice: "<<std::endl;
                break;
        }
        trials--;
    }    
}

int main() {
    vector<account>existing_accounts;
    execution(existing_accounts);  
    system("CLS");
    //system("pause");
    return 0;
}