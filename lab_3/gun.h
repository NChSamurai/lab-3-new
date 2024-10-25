#include <iostream>
#include <string>
using namespace std;

class gun
{
private:
    int bullets;
    int count;


    void load_gun()
    {
        cout << "Input number of bullets (5 or less): ";
        while(!(cin>> bullets) or (bullets > 5)) {
            cout << "Wrong !! Enter again !\n";
            cin.clear();
            cin.ignore();
            cout << "Enter int <= 5: ";
        }
        cout << "Input number of shots:";
        while(!(cin>> count) or (count < 1)) {
            cout << "Wrong !! Enter again !\n";
            cin.clear();
            cin.ignore();
            cout << "Enter int > 0: ";
        }
    }
    void shoot()
    {
       if (bullets > 0){
           cout << "!BoooM!  \n";
           bullets --;
       }
       else{
           cout << "Click...  \n";

       }
    }

public:
    void execute_gun()
    {
        load_gun();
        while(count > 0)
        {
            shoot();
            count --;
            }
        }

};