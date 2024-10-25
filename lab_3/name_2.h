#include <iostream>
#include <string>
using namespace std;

class name_2
{
private:
    string firstname;
    string surname;
    string thirdname;
    string message;

    string make_string_name_2()
    {
        message = firstname;
        if (surname.empty() == false){
            message = message + " " + surname;}
        if (thirdname.empty() == false){
            message = message + " " + thirdname;}
        return message;
    }


public:

    void execute_name_2()
    {
        set_firstname();
        if (firstname.empty() == false){
            set_surname();
            if (surname.empty() == false){
                set_thirdname();
            }

        }
        make_string_name_2();
        get_name();
    }

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
};