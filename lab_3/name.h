#include <iostream>
#include <string>
using namespace std;

class name
{
private:
    string firstname;
    string surname;
    string thirdname;
    string message;

    string make_string_name()
    {
        if (firstname.empty() == false){
            message = firstname;}
        if (surname.empty() == false){
            if (message.empty() == false){
                message = message + " ";}
            message = message + surname;}
        if (thirdname.empty() == false){
            if (message.empty() == false){
                message = message + " ";}
            message = message  + thirdname;}
        return message;
    }
public:
    void set_firstname()
    {
        cout << "Enter the firstname : ";
        getline(cin, firstname);

    }

    void set_surname()
    {
        cout << "Enter the surname : ";
        getline(cin, surname);

    }

    void set_thirdname()
    {
        cout << "Enter the thirdname : ";
        getline(cin, thirdname);

    }


    void get_name()
    {

        cout << message;
    }


    void execute_name()
    {
        set_firstname();
        set_surname();
        set_thirdname();
        make_string_name();
        get_name();
    }



};