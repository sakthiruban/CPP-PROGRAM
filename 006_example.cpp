/*------------------------------------------------------------------------------------------------- 
 *   Author         : Emertxe (https://emertxe.com) 
 *   Date           : Wed 08 Mar 2016 16:00:04 IST
 *   File           : 006_example.cpp
 *   Title          : structure vs class
 *   Description    : This program demonstrates the sizeof operator with class and structure.
 *-----------------------------------------------------------------------------------------------*/

#include <iostream>

using namespace std;

struct sEmployee
{
    int id;             //4+4
    string name;           //32
    string address;        //32
};

class cEmployee
{
    int id;       //4+4
    string name; //32
    string address;  //32
};
void print_data();
{
	cout<<id<<"\n"<<name<<"\n"<<address<<"\n";
};
int main()
{
    sEmployee emp1;
    cEmployee emp2;

    cout << "sizeof emp1 is " << sizeof(emp1) << endl;
    cout << "sizeof emp2 is " << sizeof(emp2) << endl;
    emp1.print_data();

    return 0;
}

