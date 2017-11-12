#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;



class tele
{
    char name[20];
    char number[11];
public:
    void search_number(char key[]);
    void search_name(char key[]);
    void update(char key[]);
    void outdata();
};

void tele::search_number(char key[])
{
    ifstream filein;
    filein.open("data.txt", ios::in);
    if(filein.is_open())
    {
        while(!filein.eof())
        {
            filein>>name;
            filein>>number;
            if(!strcmp(number, key))
            {
                cout<<"The number "<<number<<" belongs to "<<name<<endl;
                break;
            }
        }
        filein.clear();
        filein.close();
    }
}

void tele::search_name(char key[])
{
    ifstream filein;
    filein.open("data.txt", ios::in);
    if(filein.is_open())
    {
        while(!filein.eof())
        {
            filein>>name;
            filein>>number;
            if(!strcmp(name, key))
            {
                cout<<name<<" has the number "<<number<<endl;
                break;
            }
        }
        filein.clear();
        filein.close();
    }
}
void tele::update(char key[])
{

}

void tele::outdata()
{

}

int main()
{
    tele ob;
    char name[20], number[11];
    int choice = 1;
    while(choice)
    {
        cout<<"1. Search using Ph. No.\n"
            <<"2. Search using Name\n"
            <<"3. Update No.\n"
            <<"4. Display List\n"
            <<"Any other choice to exit\n";
        cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"Enter the number you want to search\n";
            cin>>number;
            ob.search_number(number);
            break;
        case 2:
            cout<<"Enter the Name you want to search\n";
            cin>>name;
            ob.search_name(name);
            break;
        case 3:
            cout<<"Enter the Name who's number you want to update\n";
            cin>>name;
            ob.update(name);
            break;
        /*case 4:
            ob.outdata();
            break;*/
        default:
            choice = 0;
        }
    }
    return 0;
}
